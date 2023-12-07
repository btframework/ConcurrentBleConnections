//---------------------------------------------------------------------------

#ifndef GattConnectionsH
#define GattConnectionsH
//---------------------------------------------------------------------------

#include <Vcl.StdCtrls.hpp>

#include "wclCommon.hpp"
#include "wclBluetooth.hpp"

class TGattConnections : public TwclThread
{
private:
	__int64				FAddress;
	TwclGattClient*		FClient;
	TwclBluetoothRadio*	FRadio;
	TListBox*			FLog;

	void __fastcall Trace(String Msg);

	void __fastcall ClientConnect(TObject* Sender, const int Error);

protected:
	virtual bool __fastcall OnInitialize();
	virtual void __fastcall OnTerminate();
	virtual void __fastcall OnSynchronize(const void* Param);

public:
	virtual __fastcall TGattConnections(TwclBluetoothRadio* const Radio,
		const __int64 Address, TListBox* const Log);

	__property __int64 Address = { read = FAddress };
};

#endif
