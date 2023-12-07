//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "main.h"
#include "GattConnections.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma link "wclBluetooth"
#pragma resource "*.dfm"
TfmMain *fmMain;
//---------------------------------------------------------------------------
__fastcall TfmMain::TfmMain(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------

void __fastcall TfmMain::Stop()
{
	if (FClients->Count > 0)
	{
		for (int i = 0; i < FClients->Count; i++)
		{
			((TGattConnections*)FClients->Items[i])->Terminate();
			((TGattConnections*)FClients->Items[i])->Free();
		}
		FClients->Clear();
	}

	if (FRadio != NULL)
	{
		FRadio->Terminate();
		FRadio = NULL;
	}

	if (wclBluetoothManager->Active)
		wclBluetoothManager->Close();

	FDevices.Length = 0;
}
//---------------------------------------------------------------------------

void __fastcall TfmMain::btClearClick(TObject *Sender)
{
	lbLog->Items->Clear();
}
//---------------------------------------------------------------------------

void __fastcall TfmMain::FormCreate(TObject *Sender)
{
	FClients = new TList();
	FDevices.Length = 0;
	FRadio = NULL;
}
//---------------------------------------------------------------------------

void __fastcall TfmMain::FormDestroy(TObject *Sender)
{
	Stop();

	FClients->Free();
}
//---------------------------------------------------------------------------

void __fastcall TfmMain::wclBluetoothManagerDiscoveringStarted(TObject *Sender,
	TwclBluetoothRadio * const Radio)
{
	lbLog->Items->Add("Discovering BLE devices has been started");
	FDevices.Length = 0;
}
//---------------------------------------------------------------------------

void __fastcall TfmMain::wclBluetoothManagerDiscoveringCompleted(TObject *Sender,
		  TwclBluetoothRadio * const Radio, const int Error)
{
	lbLog->Items->Add("Discovering completed with result: 0x" + IntToHex(Error, 8));
	if (Error == WCL_E_SUCCESS)
	{
		if (FDevices.Length == 0)
		{
			lbLog->Items->Add("No BLE devices were found");
			Stop();
		}
		else
		{
			lbLog->Items->Add("Found " + IntToStr(FDevices.Length) + " BLE devices");
			lbLog->Items->Add("Start connecting to GATT devices");

			for (int i = 0; i < FDevices.Length; i++)
			{
				TGattConnections* Client = new TGattConnections(FRadio,
					FDevices[i], lbLog);
				int Res = Client->Run();
				if (Res == WCL_E_SUCCESS)
					FClients->Add(Client);
				else
					Client->Free();
			}
		}
	}
}
//---------------------------------------------------------------------------

void __fastcall TfmMain::wclBluetoothManagerDeviceFound(TObject *Sender,
	TwclBluetoothRadio * const Radio, const __int64 Address)
{
	lbLog->Items->Add("Device found: " + IntToHex(Address, 12));
	int i = FDevices.Length;
	FDevices.Length = i + 1;
	FDevices[i] = Address;
}
//---------------------------------------------------------------------------

void __fastcall TfmMain::wclBluetoothManagerBeforeClose(TObject *Sender)
{
	lbLog->Items->Add("Bluetooth Manager is closing");
}
//---------------------------------------------------------------------------

void __fastcall TfmMain::wclBluetoothManagerAfterOpen(TObject *Sender)
{
	lbLog->Items->Add("Bluetooth Manager has been opened");
}
//---------------------------------------------------------------------------

void __fastcall TfmMain::btStartClick(TObject *Sender)
{
	if (wclBluetoothManager->Active)
		ShowMessage("Connections is already running");
	else
	{
		int Res = wclBluetoothManager->Open();
		if (Res != WCL_E_SUCCESS)
			ShowMessage("Bluetooth Manager open failed: 0x" + IntToHex(Res, 8));
		else
		{
			FRadio = NULL;

			if (wclBluetoothManager->Count == 0)
				ShowMessage("No Bluetooth hardware was found");
			else
			{
				for (int i = 0; i < wclBluetoothManager->Count; i++)
				{
					if (wclBluetoothManager->Radios[i]->Available)
					{
						FRadio = wclBluetoothManager->Radios[i];
						break;
					}
				}

				if (FRadio == NULL)
					ShowMessage("No available Bluetooth hardware found");
				else
				{
					Res = FRadio->Discover(10, dkBle);
					if (Res != WCL_E_SUCCESS)
					{
						ShowMessage("Failed to start discovering: 0x" + IntToHex(Res, 8));
						FRadio = NULL;
					}
				}
			}

			if (FRadio == NULL)
				wclBluetoothManager->Close();
		}
	}
}
//---------------------------------------------------------------------------

void __fastcall TfmMain::btStopClick(TObject *Sender)
{
	if (!wclBluetoothManager->Active)
		ShowMessage("Connection is not running");
	else
		Stop();
}
//---------------------------------------------------------------------------

