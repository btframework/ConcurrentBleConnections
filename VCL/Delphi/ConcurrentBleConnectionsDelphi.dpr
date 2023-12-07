program ConcurrentBleConnectionsDelphi;

uses
  Vcl.Forms,
  GattConnections in 'GattConnections.pas',
  main in 'main.pas' {fmMain};

{$R *.res}

begin
  Application.Initialize;
  Application.MainFormOnTaskbar := True;
  Application.CreateForm(TfmMain, fmMain);
  Application.Run;
end.
