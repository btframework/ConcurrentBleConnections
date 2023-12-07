unit main;

interface

uses
  Forms, wclBluetooth, Vcl.Controls, Vcl.StdCtrls, System.Classes;

type
  TfmMain = class(TForm)
    btStart: TButton;
    btStop: TButton;
    lbLog: TListBox;
    btClear: TButton;
    wclBluetoothManager: TwclBluetoothManager;
    procedure btClearClick(Sender: TObject);
    procedure FormCreate(Sender: TObject);
    procedure FormDestroy(Sender: TObject);
    procedure wclBluetoothManagerDiscoveringStarted(Sender: TObject;
      const Radio: TwclBluetoothRadio);
    procedure wclBluetoothManagerDiscoveringCompleted(Sender: TObject;
      const Radio: TwclBluetoothRadio; const Error: Integer);
    procedure wclBluetoothManagerDeviceFound(Sender: TObject;
      const Radio: TwclBluetoothRadio; const Address: Int64);
    procedure wclBluetoothManagerBeforeClose(Sender: TObject);
    procedure wclBluetoothManagerAfterOpen(Sender: TObject);
    procedure btStartClick(Sender: TObject);
    procedure btStopClick(Sender: TObject);

  private
    FClients: TList;
    FDevices: TwclBluetoothAddresses;
    FRadio: TwclBluetoothRadio;

    procedure Stop;
  end;

var
  fmMain: TfmMain;

implementation

uses
  GattConnections, wclErrors, SysUtils, Dialogs;

{$R *.dfm}

{ TfmMain }

procedure TfmMain.Stop;
var
  i: Integer;
begin
  if FClients.Count > 0 then begin
    for i := 0 to FClients.Count - 1 do begin
      TGattConnections(FClients[i]).Terminate;
      TGattConnections(FClients[i]).Free;
    end;
    FClients.Clear;
  end;

  if FRadio <> nil then begin
    FRadio.Terminate;
    FRadio := nil;
  end;

  if wclBluetoothManager.Active then
    wclBluetoothManager.Close;

  FDevices := nil;
end;

procedure TfmMain.btClearClick(Sender: TObject);
begin
  lbLog.Items.Clear;
end;

procedure TfmMain.FormCreate(Sender: TObject);
begin
  FClients := TList.Create;
  FDevices := nil;
  FRadio := nil;
end;

procedure TfmMain.FormDestroy(Sender: TObject);
begin
  Stop;

  FClients.Free;
end;

procedure TfmMain.wclBluetoothManagerDiscoveringStarted(Sender: TObject;
  const Radio: TwclBluetoothRadio);
begin
  lbLog.Items.Add('Discovering BLE devices has been started');
  FDevices := nil;
end;

procedure TfmMain.wclBluetoothManagerDiscoveringCompleted(Sender: TObject;
  const Radio: TwclBluetoothRadio; const Error: Integer);
var
  i: Integer;
  Client: TGattConnections;
  Res: Integer;
begin
  lbLog.Items.Add('Discovering completed with result: 0x' + IntToHex(Error, 8));
  if Error = WCL_E_SUCCESS then begin
    if Length(FDevices) = 0 then begin
      lbLog.Items.Add('No BLE devices were found');
      Stop;
    end else begin
      lbLog.Items.Add('Found ' + IntToStr(Length(FDevices)) + ' BLE devices');
      lbLog.Items.Add('Start connecting to GATT devices');

      for i := 0 to Length(FDevices) - 1 do begin
        Client := TGattConnections.Create(FRadio, FDevices[i], lbLog);
        Res := Client.Run;
        if Res = WCL_E_SUCCESS then
          FClients.Add(Client)
        else
          Client.Free;
      end;
    end;
  end;
end;

procedure TfmMain.wclBluetoothManagerDeviceFound(Sender: TObject;
  const Radio: TwclBluetoothRadio; const Address: Int64);
var
  i: Integer;
begin
  lbLog.Items.Add('Device found: ' + IntToHex(Address, 12));
  i := Length(FDevices);
  SetLength(FDevices, i + 1);
  FDevices[i] := Address;
end;

procedure TfmMain.wclBluetoothManagerBeforeClose(Sender: TObject);
begin
  lbLog.Items.Add('Bluetooth Manager is closing');
end;

procedure TfmMain.wclBluetoothManagerAfterOpen(Sender: TObject);
begin
  lbLog.Items.Add('Bluetooth Manager has been opened');
end;

procedure TfmMain.btStartClick(Sender: TObject);
var
  Res: Integer;
  i: Integer;
begin
  if wclBluetoothManager.Active then
    ShowMessage('Connections is already running')

  else begin
    Res := wclBluetoothManager.Open;
    if Res <> WCL_E_SUCCESS then
      ShowMessage('Bluetooth Manager open failed: 0x' + IntToHex(Res, 8))

    else begin
      FRadio := nil;

      if wclBluetoothManager.Count = 0 then
        ShowMessage('No Bluetooth hardware was found')

      else begin
        for i := 0 to wclBluetoothManager.Count - 1 do begin
          if wclBluetoothManager[i].Available then begin
            FRadio := wclBluetoothManager[i];
            Break;
          end;
        end;

        if FRadio = nil then
          ShowMessage('No available Bluetooth hardware found')

        else begin
          Res := FRadio.Discover(10, dkBle);
          if Res <> WCL_E_SUCCESS then begin
            ShowMessage('Failed to start discovering: 0x' + IntToHex(Res, 8));
            FRadio := nil;
          end;
        end;
      end;

      if FRadio = nil then
        wclBluetoothManager.Close;
    end;
  end;
end;

procedure TfmMain.btStopClick(Sender: TObject);
begin
  if not wclBluetoothManager.Active then
    ShowMessage('Connection is not running')
  else
    Stop;
end;

end.
