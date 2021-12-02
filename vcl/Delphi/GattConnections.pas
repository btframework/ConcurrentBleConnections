unit GattConnections;

interface

uses
  wclThread, wclBluetooth, StdCtrls;

type
  TGattConnections = class(TwclThread)
  private
    FAddress: Int64;
    FClient: TwclGattClient;
    FRadio: TwclBluetoothRadio;
    FLog: TListBox;

    procedure Trace(const Msg: string);

    procedure ClientConnect(Sender: TObject; const Error: Integer);

  protected
    function OnInitialize: Boolean; override;
    procedure OnTerminate; override;
    procedure OnSynchronize(const Param: Pointer); override;

  public
    constructor Create(const Radio: TwclBluetoothRadio; const Address: Int64;
      const Log: TListBox); reintroduce;

    property Address: Int64 read FAddress;
  end;

implementation

uses
  SysUtils, wclErrors;

{ TGattConnections }

procedure TGattConnections.ClientConnect(Sender: TObject; const Error: Integer);
var
  Services: TwclGattServices;
  Res: Integer;
begin
  if Error <> WCL_E_SUCCESS then
    Trace('Connection error: ' + IntToHex(Error, 8))

  else begin
    Trace('Client connected');

    Res := FClient.ReadServices(goNone, Services);
    if Res <> WCL_E_SUCCESS then
      Trace('Failed to read services: ' + IntToHex(Res, 8))
    else
      Trace('Services have been read with success');
  end;
end;

constructor TGattConnections.Create(const Radio: TwclBluetoothRadio;
  const Address: Int64; const Log: TListBox);
begin
  inherited Create;

  FAddress := Address;
  FRadio := Radio;
  FLog := Log;
end;

function TGattConnections.OnInitialize: Boolean;
var
  Res: Integer;
begin
  FClient := TwclGattClient.Create(nil);
  FClient.OnConnect := ClientConnect;
  FClient.Address := FAddress;
  Res := FClient.Connect(FRadio);
  if Res <> WCL_E_SUCCESS then begin
    Trace('Start connection failed: ' + IntToHex(Res, 8));
    FClient.Free;
    FClient := nil;
    Result := False;
  end else
    Result := True;
end;

procedure TGattConnections.OnSynchronize(const Param: Pointer);
begin
  FLog.Items.Add(string(Param));
end;

procedure TGattConnections.OnTerminate;
begin
  if FClient <> nil then begin
    FClient.Disconnect;
    FClient.Free;
    FClient := nil;
  end;
end;

procedure TGattConnections.Trace(const Msg: string);
var
  Str: string;
begin
  Str := IntToHex(FAddress, 12) + ': ' + Msg;
  Synchronize(Pointer(Str));
end;

end.
