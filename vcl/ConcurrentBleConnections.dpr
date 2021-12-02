program ConcurrentBleConnections;

uses
  Forms,
  main in 'main.pas' {fmMain},
  GattConnections in 'GattConnections.pas';

{$R *.res}

begin
  Application.Initialize;
  Application.CreateForm(TfmMain, fmMain);
  Application.Run;
end.
