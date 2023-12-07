//---------------------------------------------------------------------------

#ifndef mainH
#define mainH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include "wclBluetooth.hpp"
//---------------------------------------------------------------------------
class TfmMain : public TForm
{
__published:	// IDE-managed Components
	TButton *btStart;
	TButton *btStop;
	TListBox *lbLog;
	TButton *btClear;
	TwclBluetoothManager *wclBluetoothManager;
	void __fastcall btClearClick(TObject *Sender);
	void __fastcall FormCreate(TObject *Sender);
	void __fastcall FormDestroy(TObject *Sender);
	void __fastcall wclBluetoothManagerDiscoveringStarted(TObject *Sender, TwclBluetoothRadio * const Radio);
	void __fastcall wclBluetoothManagerDiscoveringCompleted(TObject *Sender, TwclBluetoothRadio * const Radio,
          const int Error);
	void __fastcall wclBluetoothManagerDeviceFound(TObject *Sender, TwclBluetoothRadio * const Radio,
          const __int64 Address);
	void __fastcall wclBluetoothManagerBeforeClose(TObject *Sender);
	void __fastcall wclBluetoothManagerAfterOpen(TObject *Sender);
	void __fastcall btStartClick(TObject *Sender);
	void __fastcall btStopClick(TObject *Sender);


private:	// User declarations
	TList*					FClients;
	TwclBluetoothAddresses	FDevices;
	TwclBluetoothRadio*		FRadio;

	void __fastcall Stop();

public:		// User declarations
	__fastcall TfmMain(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TfmMain *fmMain;
//---------------------------------------------------------------------------
#endif
