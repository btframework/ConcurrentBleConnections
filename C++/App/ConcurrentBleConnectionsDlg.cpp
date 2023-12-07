// ConcurrentBleConnectionsDlg.cpp : implementation file
//

#include "stdafx.h"
#include "ConcurrentBleConnections.h"
#include "ConcurrentBleConnectionsDlg.h"

#include "GattConnections.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CConcurrentBleConnectionsDlg dialog




CConcurrentBleConnectionsDlg::CConcurrentBleConnectionsDlg(CWnd* pParent /*=NULL*/)
	: CDialog(CConcurrentBleConnectionsDlg::IDD, pParent)
{
	m_hIcon = AfxGetApp()->LoadIcon(IDR_MAINFRAME);
}

void CConcurrentBleConnectionsDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	DDX_Control(pDX, IDC_LIST_LOG, lbLog);
}

BEGIN_MESSAGE_MAP(CConcurrentBleConnectionsDlg, CDialog)
	ON_WM_PAINT()
	ON_WM_QUERYDRAGICON()
	//}}AFX_MSG_MAP
	ON_BN_CLICKED(IDC_BUTTON_CLEAR, &CConcurrentBleConnectionsDlg::OnBnClickedButtonClear)
	ON_WM_DESTROY()
	ON_BN_CLICKED(IDC_BUTTON_START, &CConcurrentBleConnectionsDlg::OnBnClickedButtonStart)
	ON_BN_CLICKED(IDC_BUTTON_STOP, &CConcurrentBleConnectionsDlg::OnBnClickedButtonStop)
END_MESSAGE_MAP()


// CConcurrentBleConnectionsDlg message handlers

BOOL CConcurrentBleConnectionsDlg::OnInitDialog()
{
	CDialog::OnInitDialog();

	// Set the icon for this dialog.  The framework does this automatically
	//  when the application's main window is not a dialog
	SetIcon(m_hIcon, TRUE);			// Set big icon
	SetIcon(m_hIcon, FALSE);		// Set small icon

	// TODO: Add extra initialization here

	FDevices.clear();
	FRadio = NULL;

	__hook(&CwclBluetoothManager::OnDiscoveringStarted, &wclBluetoothManager,
		&CConcurrentBleConnectionsDlg::wclBluetoothManagerDiscoveringStarted);
	__hook(&CwclBluetoothManager::OnDiscoveringCompleted, &wclBluetoothManager,
		&CConcurrentBleConnectionsDlg::wclBluetoothManagerDiscoveringCompleted);
	__hook(&CwclBluetoothManager::OnDeviceFound, &wclBluetoothManager,
		&CConcurrentBleConnectionsDlg::wclBluetoothManagerDeviceFound);
	__hook(&CwclBluetoothManager::BeforeClose, &wclBluetoothManager,
		&CConcurrentBleConnectionsDlg::wclBluetoothManagerBeforeClose);
	__hook(&CwclBluetoothManager::AfterOpen, &wclBluetoothManager,
		&CConcurrentBleConnectionsDlg::wclBluetoothManagerAfterOpen);

	return TRUE;  // return TRUE  unless you set the focus to a control
}

// If you add a minimize button to your dialog, you will need the code below
//  to draw the icon.  For MFC applications using the document/view model,
//  this is automatically done for you by the framework.

void CConcurrentBleConnectionsDlg::OnPaint()
{
	if (IsIconic())
	{
		CPaintDC dc(this); // device context for painting

		SendMessage(WM_ICONERASEBKGND, reinterpret_cast<WPARAM>(dc.GetSafeHdc()), 0);

		// Center icon in client rectangle
		int cxIcon = GetSystemMetrics(SM_CXICON);
		int cyIcon = GetSystemMetrics(SM_CYICON);
		CRect rect;
		GetClientRect(&rect);
		int x = (rect.Width() - cxIcon + 1) / 2;
		int y = (rect.Height() - cyIcon + 1) / 2;

		// Draw the icon
		dc.DrawIcon(x, y, m_hIcon);
	}
	else
	{
		CDialog::OnPaint();
	}
}

// The system calls this function to obtain the cursor to display while the user drags
//  the minimized window.
HCURSOR CConcurrentBleConnectionsDlg::OnQueryDragIcon()
{
	return static_cast<HCURSOR>(m_hIcon);
}

void CConcurrentBleConnectionsDlg::Stop()
{
	if (FClients.size() > 0)
	{
		for (CLIENTS::iterator i = FClients.begin(); i != FClients.end(); i++)
		{
			(*i)->Terminate();
			delete (*i);
		}
		FClients.clear();
	}
	
	if (FRadio != NULL)
	{
		FRadio->Terminate();
		FRadio = NULL;
	}
	
	if (wclBluetoothManager.Active)
		wclBluetoothManager.Close();

	FDevices.clear();
}

void CConcurrentBleConnectionsDlg::OnBnClickedButtonClear()
{
	lbLog.ResetContent();
}

void CConcurrentBleConnectionsDlg::OnDestroy()
{
	CDialog::OnDestroy();

	Stop();

	__unhook(&wclBluetoothManager);
}

void CConcurrentBleConnectionsDlg::wclBluetoothManagerDiscoveringStarted(void* Sender,
	CwclBluetoothRadio* const Radio)
{
	lbLog.AddString(_T("Discovering BLE devices has been started"));
	FDevices.clear();
}

void CConcurrentBleConnectionsDlg::wclBluetoothManagerDiscoveringCompleted(void* Sender,
	CwclBluetoothRadio* const Radio, const int Error)
{
	lbLog.AddString(_T("Discovering completed with result: 0x") + IntToHex(Error));
	if (Error != WCL_E_SUCCESS)
		return;

	if (FDevices.size() == 0)
	{
		lbLog.AddString(_T("No BLE devices were found"));
		Stop();
	}
	else
	{
		lbLog.AddString(_T("Found ") + IntToStr((int)FDevices.size()) + _T(" BLE devices"));
		lbLog.AddString(_T("Start connecting to GATT devices"));
		
		for (wclBluetoothAddresses::iterator i = FDevices.begin(); i != FDevices.end(); i++)
		{
			CGattConnections* Client = new CGattConnections(FRadio, (*i), &lbLog);
			int Res = Client->Run();
			if (Res == WCL_E_SUCCESS)
				FClients.push_back(Client);
			else
				delete Client;
		}
	}
}

void CConcurrentBleConnectionsDlg::wclBluetoothManagerDeviceFound(void* Sender,
	CwclBluetoothRadio* const Radio, const __int64 Address)
{
	lbLog.AddString(_T("Device found: ") + IntToHex(Address));
	FDevices.push_back(Address);
}

void CConcurrentBleConnectionsDlg::wclBluetoothManagerBeforeClose(void* Sender)
{
	lbLog.AddString(_T("Bluetooth Manager is closing"));
}

void CConcurrentBleConnectionsDlg::wclBluetoothManagerAfterOpen(void* Sender)
{
	lbLog.AddString(_T("Bluetooth Manager has been opened"));
}

void CConcurrentBleConnectionsDlg::OnBnClickedButtonStart()
{
	if (wclBluetoothManager.Active)
		AfxMessageBox(_T("Connections is already running"));
	else
	{
		int Res = wclBluetoothManager.Open();
		if (Res != WCL_E_SUCCESS)
			AfxMessageBox(_T("Bluetooth Manager open failed: 0x") + IntToHex(Res));
		else
		{
			FRadio = NULL;
			
			if (wclBluetoothManager.Count == 0)
				AfxMessageBox(_T("No Bluetooth hardware was found"));
			else
			{
				for (size_t i = 0; i < wclBluetoothManager.Count; i++)
				{
					if (wclBluetoothManager.Radios[i]->Available)
					{
						FRadio = wclBluetoothManager.Radios[i];
						break;
					}
				}
				
				if (FRadio == NULL)
					AfxMessageBox(_T("No available Bluetooth hardware found"));
				else
				{
					Res = FRadio->Discover(10, dkBle);
					if (Res != WCL_E_SUCCESS)
					{
						AfxMessageBox(_T("Failed to start discovering: 0x") + IntToHex(Res));
						FRadio = NULL;
					}
				}
			}
			
			if (FRadio == NULL)
				wclBluetoothManager.Close();
		}
	}
}

void CConcurrentBleConnectionsDlg::OnBnClickedButtonStop()
{
	if (!wclBluetoothManager.Active)
		AfxMessageBox(_T("Connection is not running"));
	else
		Stop();
}
