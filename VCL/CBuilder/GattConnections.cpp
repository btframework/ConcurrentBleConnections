//---------------------------------------------------------------------------

#pragma hdrstop

#include "GattConnections.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)

void __fastcall TGattConnections::ClientConnect(TObject* Sender,
	const int Error)
{
	if (Error != WCL_E_SUCCESS)
		Trace("Connection error: " + IntToHex(Error, 8));
	else
	{
		Trace("Client connected");

		TwclGattServices Services;
		int Res = FClient->ReadServices(goNone, Services);
		if (Res != WCL_E_SUCCESS)
			Trace("Failed to read services: " + IntToHex(Res, 8));
		else
			Trace("Services have been read with success");
	}
}

__fastcall TGattConnections::TGattConnections(TwclBluetoothRadio* const Radio,
	const __int64 Address, TListBox* const Log) : TwclThread()
{
	FAddress = Address;
	FRadio = Radio;
	FLog = Log;
}

bool __fastcall TGattConnections::OnInitialize()
{
	FClient = new TwclGattClient(NULL);
	FClient->OnConnect = ClientConnect;
	FClient->Address = FAddress;
	int Res = FClient->Connect(FRadio);
	if (Res != WCL_E_SUCCESS)
	{
		Trace("Start connection failed: " + IntToHex(Res, 8));
		FClient->Free();
		FClient = NULL;
		return false;
	}
	return true;
}

void __fastcall TGattConnections::OnSynchronize(const void* Param)
{
	FLog->Items->Add(*((String*)Param));
}

void __fastcall TGattConnections::OnTerminate()
{
	if (FClient != NULL)
	{
		FClient->Disconnect();
		FClient->Free();
		FClient = NULL;
	}
}

void __fastcall TGattConnections::Trace(String Msg)
{
	String Str = IntToHex(FAddress, 12) + ": " + Msg;
	Synchronize((void*)&Str);
}
