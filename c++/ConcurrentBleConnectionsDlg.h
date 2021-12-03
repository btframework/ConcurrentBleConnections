// ConcurrentBleConnectionsDlg.h : header file
//

#pragma once
#include "afxwin.h"
#include <list>

#include "GattConnections.h"


// CConcurrentBleConnectionsDlg dialog
class CConcurrentBleConnectionsDlg : public CDialog
{
// Construction
public:
	CConcurrentBleConnectionsDlg(CWnd* pParent = NULL);	// standard constructor

// Dialog Data
	enum { IDD = IDD_CONCURRENTBLECONNECTIONS_DIALOG };

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV support


// Implementation
protected:
	HICON m_hIcon;

	// Generated message map functions
	virtual BOOL OnInitDialog();
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
private:
	CListBox lbLog;

	typedef std::list<CGattConnections*> CLIENTS;

	CwclBluetoothManager wclBluetoothManager;
	wclBluetoothAddresses FDevices;
	CwclBluetoothRadio* FRadio;
	CLIENTS FClients;

	void Stop();

	void wclBluetoothManagerDiscoveringStarted(void* Sender,
		CwclBluetoothRadio* const Radio);
	void wclBluetoothManagerDiscoveringCompleted(void* Sender,
		CwclBluetoothRadio* const Radio, const int Error);
	void wclBluetoothManagerDeviceFound(void* Sender,
		CwclBluetoothRadio* const Radio, const __int64 Address);
	void wclBluetoothManagerBeforeClose(void* Sender);
	void wclBluetoothManagerAfterOpen(void* Sender);

public:
	afx_msg void OnBnClickedButtonClear();
	afx_msg void OnDestroy();
	afx_msg void OnBnClickedButtonStart();
	afx_msg void OnBnClickedButtonStop();
};
