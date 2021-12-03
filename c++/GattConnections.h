#pragma once

#include "..\..\..\..\WCL7\CPP\Source\Common\wclHelpers.h"
#include "..\..\..\..\WCL7\CPP\Source\Common\wclThread.h"
#include "..\..\..\..\WCL7\CPP\Source\Bluetooth\wclBluetooth.h"

using namespace wclCommon;
using namespace wclBluetooth;

class CGattConnections : public CwclThread
{
private:
	__int64				FAddress;
	CwclGattClient*		FClient;
	CwclBluetoothRadio*	FRadio;
	CListBox*			FLog;
	
	void Trace(const CString& Msg);
	
	void ClientConnect(void* Sender, const int Error);
	
protected:
	virtual bool OnInitialize() override;
	virtual void OnTerminate() override;
	virtual void OnSynchronize(const void* const Param) override;
	
public:
	CGattConnections(CwclBluetoothRadio* Radio, __int64 Address,
		CListBox* Log);
	
	__int64 GetAddress();
};

CString IntToHex(const int i);
CString IntToHex(const __int64 i);
CString IntToStr(const int i);