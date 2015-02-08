unit uFrmEmitirRecibo;

interface

uses
  Winapi.Windows, Winapi.Messages, System.SysUtils, System.Variants, System.Classes, Vcl.Graphics,
  Vcl.Controls, Vcl.Forms, Vcl.Dialogs, Vcl.StdCtrls, Vcl.ExtCtrls, tpEdit,
  Vcl.Buttons;

type
  TfrmEmitirRecibo = class(TForm)
    GroupBox1: TGroupBox;
    RadioGroup1: TRadioGroup;
    edtNome: TEdit;
    Label1: TLabel;
    edtReferente: TEdit;
    edtObservacoes: TEdit;
    edtEmitente: TEdit;
    Label2: TLabel;
    Label3: TLabel;
    Label4: TLabel;
    edtEndereco: TEdit;
    edtCidade: TEdit;
    Label5: TLabel;
    Label6: TLabel;
    edtCpfcnpj: TtpEdit;
    Label7: TLabel;
    edtDataEmissao: TtpEdit;
    Label8: TLabel;
    edtValor: TtpEdit;
    Label9: TLabel;
    btnFechar: TBitBtn;
    btnPesquisar: TBitBtn;
    btnCancelar: TBitBtn;
    btnSalvar: TBitBtn;
    procedure btnFecharClick(Sender: TObject);
    procedure FormKeyPress(Sender: TObject; var Key: Char);
  private
    { Private declarations }
  public
    { Public declarations }
  end;

var
  frmEmitirRecibo: TfrmEmitirRecibo;

implementation

{$R *.dfm}

uses uFuncoes;

procedure TfrmEmitirRecibo.btnFecharClick(Sender: TObject);
begin
  Close;
end;

procedure TfrmEmitirRecibo.FormKeyPress(Sender: TObject; var Key: Char);
begin
  EnterporTab(key,self);
  FechaFormEsc(key,self);
end;

end.
