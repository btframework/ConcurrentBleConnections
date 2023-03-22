#include "stdafx.h"
#include "GattConnections.h"

#include "..\..\..\..\WCL7\CPP\Source\Common\wclErrors.h"

CString IntToHex(const int i)
{
	CString s;
	s.Format(_T("%.8X"), i);
	return s;
}

CString IntToHex(const __int64 i)
{
	CString s;
	s.Format(_T("%.4X%.8X"), static_cast<INT32>((i >> 32) & 0x00000FFFF), static_cast<INT32>(i) & 0xFFFFFFFF);
	return s;
}

CString IntToStr(const int i)
{
	CString s;
	s.Format(_T("%d"), i);
	return s;
}

void CGattConnections::ClientConnect(void* Sender, const int Error)
{
	if (Error != WCL_E_SUCCESS)
		Trace(_T("Connection error: ") + IntToHex(Error));
	else
	{
		Trace(_T("Client connected"));
		
		wclGattServices Services;
		int Res = FClient->ReadServices(goNone, Services);
		if (Res != WCL_E_SUCCESS)
			Trace(_T("Failed to read services: ") + IntToHex(Res));
		else
			Trace(_T("Services have been read with success"));
	}
}

CGattConnections::CGattConnections(CwclBluetoothRadio* Radio, __int64 Address,
	CListBox* Log)
	: CwclThread()
{
	FAddress = Address;
	FRadio = Radio;
	FLog = Log;
}

bool CGattConnections::OnInitialize()
{
	FClient = new CwclGattClient();
	__hook(&CwclGattClient::OnConnect, FClient, &CGattConnections::ClientConnect);
	FClient->Address = FAddress;
	int Res = FClient->Connect(FRadio);
	if (Res != WCL_E_SUCCESS)
	{
		Trace(_T("Start connection failed: ") + IntToHex(Res));
		__unhook(FClient);
		delete FClient;
		FClient = NULL;
		return false;
	}
	return true;
}

void CGattConnections::OnSynchronize(const void* const Param)
{
	FLog->AddString((LPTSTR)Param);
}

void CGattConnections::OnTerminate()
{
	if (FClient != NULL)
	{
		FClient->Disconnect();
		__unhook(FClient);
		delete FClient;
		FClient = NULL;
	}
}

void CGattConnections::Trace(const CString& Msg)
{
	CString Str = IntToHex(FAddress) + _T(": ") + Msg;
	LPCTSTR aStr = Str;
	Synchronize(aStr);
}