object DmRelatorios: TDmRelatorios
  OldCreateOrder = False
  Height = 270
  Width = 515
  object frxReport: TfrxReport
    Version = '5.1.5'
    DotMatrixReport = False
    IniFile = '\Software\Fast Reports'
    PreviewOptions.Buttons = [pbPrint, pbLoad, pbSave, pbExport, pbZoom, pbFind, pbOutline, pbPageSetup, pbTools, pbEdit, pbNavigator, pbExportQuick]
    PreviewOptions.Zoom = 1.000000000000000000
    PrintOptions.Printer = 'Default'
    PrintOptions.PrintOnSheet = 0
    ReportOptions.CreateDate = 42087.921125648200000000
    ReportOptions.LastChange = 42101.909481493060000000
    ScriptLanguage = 'PascalScript'
    ScriptText.Strings = (
      ''
      'begin'
      ''
      'end.')
    Left = 48
    Top = 24
    Datasets = <
      item
        DataSet = frxDBDsRecibos
        DataSetName = 'frxDBDsRecibos'
      end>
    Variables = <
      item
        Name = ' New Category1'
        Value = Null
      end
      item
        Name = 'tipo'
        Value = Null
      end
      item
        Name = 'beneficiario'
        Value = ''
      end>
    Style = <>
    object Data: TfrxDataPage
      Height = 1000.000000000000000000
      Width = 1000.000000000000000000
    end
    object Page1: TfrxReportPage
      PaperWidth = 210.000000000000000000
      PaperHeight = 297.000000000000000000
      PaperSize = 9
      LeftMargin = 10.000000000000000000
      RightMargin = 10.000000000000000000
      TopMargin = 10.000000000000000000
      BottomMargin = 10.000000000000000000
      Frame.Width = 3.000000000000000000
      object Shape1: TfrxShapeView
        Left = 5.669291340000000000
        Top = 3.779530000000000000
        Width = 706.772110000000000000
        Height = 506.456692910000000000
      end
      object Shape2: TfrxShapeView
        Left = 5.779530000000000000
        Top = 536.693260000000000000
        Width = 706.772110000000000000
        Height = 506.456692910000000000
      end
      object Line1: TfrxLineView
        Left = 1.779530000000000000
        Top = 522.575140000000000000
        Width = 714.331170000000000000
        Color = clBlack
        Frame.Style = fsDot
        Diagonal = True
      end
      object TipoRecibo: TfrxMemoView
        Left = 15.118120000000000000
        Top = 7.559060000000000000
        Width = 472.441250000000000000
        Height = 37.795300000000000000
        Font.Charset = DEFAULT_CHARSET
        Font.Color = clBlack
        Font.Height = -29
        Font.Name = 'Arial'
        Font.Style = []
        Memo.UTF8W = (
          '[tipo]')
        ParentFont = False
      end
      object Date: TfrxMemoView
        Left = 15.118120000000000000
        Top = 49.133890000000000000
        Width = 264.567100000000000000
        Height = 18.897650000000000000
        DisplayFormat.FormatStr = 'mmmm dd, yyyy'
        DisplayFormat.Kind = fkDateTime
        Font.Charset = DEFAULT_CHARSET
        Font.Color = clBlack
        Font.Height = -16
        Font.Name = 'Arial'
        Font.Style = []
        Memo.UTF8W = (
          '[Date]')
        ParentFont = False
      end
      object Memo1: TfrxMemoView
        Left = 612.283860000000000000
        Top = 45.354360000000000000
        Width = 94.488250000000000000
        Height = 22.677180000000000000
        Font.Charset = DEFAULT_CHARSET
        Font.Color = clBlack
        Font.Height = -19
        Font.Name = 'Arial'
        Font.Style = [fsBold]
        HAlign = haRight
        Memo.UTF8W = (
          'RECIBO')
        ParentFont = False
      end
      object Shape3: TfrxShapeView
        Left = 532.913730000000000000
        Top = 79.370130000000000000
        Width = 173.858380000000000000
        Height = 30.236240000000000000
      end
      object Shape4: TfrxShapeView
        Left = 532.913730000000000000
        Top = 117.165430000000000000
        Width = 173.858380000000000000
        Height = 30.236240000000000000
      end
      object Memo2: TfrxMemoView
        Left = 419.527830000000000000
        Top = 83.149660000000000000
        Width = 105.826840000000000000
        Height = 22.677180000000000000
        Font.Charset = DEFAULT_CHARSET
        Font.Color = clBlack
        Font.Height = -19
        Font.Name = 'Arial'
        Font.Style = [fsBold]
        Memo.UTF8W = (
          'N'#218'MERO:')
        ParentFont = False
      end
      object Memo3: TfrxMemoView
        Left = 419.527830000000000000
        Top = 120.944960000000000000
        Width = 105.826840000000000000
        Height = 22.677180000000000000
        Font.Charset = DEFAULT_CHARSET
        Font.Color = clBlack
        Font.Height = -19
        Font.Name = 'Arial'
        Font.Style = [fsBold]
        Memo.UTF8W = (
          'VALOR R$:')
        ParentFont = False
      end
      object Line2: TfrxLineView
        Left = 8.559060000000000000
        Top = 154.960730000000000000
        Width = 699.212598430000000000
        Color = clBlack
        Diagonal = True
      end
      object Beneficiario: TfrxMemoView
        Left = 15.118120000000000000
        Top = 166.519790000000000000
        Width = 173.858380000000000000
        Height = 18.897650000000000000
        Font.Charset = DEFAULT_CHARSET
        Font.Color = clBlack
        Font.Height = -16
        Font.Name = 'Arial'
        Font.Style = []
        Memo.UTF8W = (
          '[Beneficiario]')
        ParentFont = False
      end
      object Memo4: TfrxMemoView
        Left = 15.118120000000000000
        Top = 192.976500000000000000
        Width = 173.858380000000000000
        Height = 18.897650000000000000
        Font.Charset = DEFAULT_CHARSET
        Font.Color = clBlack
        Font.Height = -16
        Font.Name = 'Arial'
        Font.Style = []
        Memo.UTF8W = (
          'A import'#226'ncia de:')
        ParentFont = False
      end
      object Memo5: TfrxMemoView
        Left = 15.118120000000000000
        Top = 219.433210000000000000
        Width = 173.858380000000000000
        Height = 18.897650000000000000
        Font.Charset = DEFAULT_CHARSET
        Font.Color = clBlack
        Font.Height = -16
        Font.Name = 'Arial'
        Font.Style = []
        Memo.UTF8W = (
          'Referente a:')
        ParentFont = False
      end
      object Memo6: TfrxMemoView
        Left = 15.118120000000000000
        Top = 245.889920000000000000
        Width = 173.858380000000000000
        Height = 18.897650000000000000
        Font.Charset = DEFAULT_CHARSET
        Font.Color = clBlack
        Font.Height = -16
        Font.Name = 'Arial'
        Font.Style = []
        Memo.UTF8W = (
          'Observa'#231#227'o:')
        ParentFont = False
      end
      object Line3: TfrxLineView
        Left = 8.692913390000000000
        Top = 279.346630000000000000
        Width = 699.212598430000000000
        Color = clBlack
        Diagonal = True
      end
      object Memo7: TfrxMemoView
        Left = 15.118120000000000000
        Top = 291.023810000000000000
        Width = 313.700990000000000000
        Height = 18.897650000000000000
        Font.Charset = DEFAULT_CHARSET
        Font.Color = clBlack
        Font.Height = -16
        Font.Name = 'Arial'
        Font.Style = []
        Memo.UTF8W = (
          'Para maior clareza firmo(amos) o presente:')
        ParentFont = False
      end
      object Memo8: TfrxMemoView
        Left = 15.118120000000000000
        Top = 317.480520000000000000
        Width = 173.858380000000000000
        Height = 18.897650000000000000
        Font.Charset = DEFAULT_CHARSET
        Font.Color = clBlack
        Font.Height = -16
        Font.Name = 'Arial'
        Font.Style = []
        Memo.UTF8W = (
          'Emitente:')
        ParentFont = False
      end
      object Memo9: TfrxMemoView
        Left = 15.118120000000000000
        Top = 343.937230000000000000
        Width = 173.858380000000000000
        Height = 18.897650000000000000
        Font.Charset = DEFAULT_CHARSET
        Font.Color = clBlack
        Font.Height = -16
        Font.Name = 'Arial'
        Font.Style = []
        Memo.UTF8W = (
          'Endere'#231'o:')
        ParentFont = False
      end
      object Memo10: TfrxMemoView
        Left = 15.118120000000000000
        Top = 370.393940000000000000
        Width = 173.858380000000000000
        Height = 18.897650000000000000
        Font.Charset = DEFAULT_CHARSET
        Font.Color = clBlack
        Font.Height = -16
        Font.Name = 'Arial'
        Font.Style = []
        Memo.UTF8W = (
          'Cidade:')
        ParentFont = False
      end
      object Memo11: TfrxMemoView
        Left = 15.118120000000000000
        Top = 396.850650000000000000
        Width = 173.858380000000000000
        Height = 18.897650000000000000
        Font.Charset = DEFAULT_CHARSET
        Font.Color = clBlack
        Font.Height = -16
        Font.Name = 'Arial'
        Font.Style = []
        Memo.UTF8W = (
          'CPF/CNPJ:')
        ParentFont = False
      end
      object Line4: TfrxLineView
        Left = 38.015770000000000000
        Top = 475.543600000000000000
        Width = 309.921008430000000000
        Color = clBlack
        Diagonal = True
      end
      object Line5: TfrxLineView
        Left = 369.614410000000000000
        Top = 475.543600000000000000
        Width = 309.921008430000000000
        Color = clBlack
        Diagonal = True
      end
      object Memo12: TfrxMemoView
        Left = 37.795300000000000000
        Top = 479.323130000000000000
        Width = 309.921460000000000000
        Height = 18.897650000000000000
        Font.Charset = DEFAULT_CHARSET
        Font.Color = clBlack
        Font.Height = -13
        Font.Name = 'Arial'
        Font.Style = []
        HAlign = haCenter
        Memo.UTF8W = (
          'Assinatura do emitente')
        ParentFont = False
      end
      object Memo13: TfrxMemoView
        Left = 370.393940000000000000
        Top = 479.323130000000000000
        Width = 309.921460000000000000
        Height = 18.897650000000000000
        Font.Charset = DEFAULT_CHARSET
        Font.Color = clBlack
        Font.Height = -13
        Font.Name = 'Arial'
        Font.Style = []
        HAlign = haCenter
        Memo.UTF8W = (
          'Assinatura do benefici'#225'rio')
        ParentFont = False
      end
      object Memo14: TfrxMemoView
        Left = 612.283860000000000000
        Top = 7.559060000000000000
        Width = 94.488250000000000000
        Height = 22.677180000000000000
        Font.Charset = DEFAULT_CHARSET
        Font.Color = clBlack
        Font.Height = -16
        Font.Name = 'Arial'
        Font.Style = [fsBold]
        HAlign = haRight
        Memo.UTF8W = (
          '1'#176' via')
        ParentFont = False
      end
      object frxDBDsRecibosid: TfrxMemoView
        Left = 540.472790000000000000
        Top = 83.149660000000000000
        Width = 162.519790000000000000
        Height = 22.677180000000000000
        DataField = 'id'
        DataSet = frxDBDsRecibos
        DataSetName = 'frxDBDsRecibos'
        DisplayFormat.FormatStr = '#00000000'
        Font.Charset = DEFAULT_CHARSET
        Font.Color = clBlack
        Font.Height = -19
        Font.Name = 'Arial'
        Font.Style = []
        HAlign = haRight
        Memo.UTF8W = (
          '[frxDBDsRecibos."id"]')
        ParentFont = False
      end
      object frxDBDsRecibosemitente: TfrxMemoView
        Left = 196.535560000000000000
        Top = 317.480520000000000000
        Width = 510.236550000000000000
        Height = 18.897650000000000000
        DataField = 'emitente'
        DataSet = frxDBDsRecibos
        DataSetName = 'frxDBDsRecibos'
        Font.Charset = DEFAULT_CHARSET
        Font.Color = clBlack
        Font.Height = -16
        Font.Name = 'Arial'
        Font.Style = []
        Memo.UTF8W = (
          '[frxDBDsRecibos."emitente"]')
        ParentFont = False
      end
      object frxDBDsRecibosendereco: TfrxMemoView
        Left = 196.535560000000000000
        Top = 343.937230000000000000
        Width = 510.236550000000000000
        Height = 18.897650000000000000
        DataField = 'endereco'
        DataSet = frxDBDsRecibos
        DataSetName = 'frxDBDsRecibos'
        Font.Charset = DEFAULT_CHARSET
        Font.Color = clBlack
        Font.Height = -16
        Font.Name = 'Arial'
        Font.Style = []
        Memo.UTF8W = (
          '[frxDBDsRecibos."endereco"]')
        ParentFont = False
      end
      object frxDBDsReciboscidade: TfrxMemoView
        Left = 196.535560000000000000
        Top = 370.393940000000000000
        Width = 510.236550000000000000
        Height = 18.897650000000000000
        DataField = 'cidade'
        DataSet = frxDBDsRecibos
        DataSetName = 'frxDBDsRecibos'
        Font.Charset = DEFAULT_CHARSET
        Font.Color = clBlack
        Font.Height = -16
        Font.Name = 'Arial'
        Font.Style = []
        Memo.UTF8W = (
          '[frxDBDsRecibos."cidade"]')
        ParentFont = False
      end
      object frxDBDsReciboscpf_cnpj: TfrxMemoView
        Left = 196.535560000000000000
        Top = 396.850650000000000000
        Width = 510.236550000000000000
        Height = 18.897650000000000000
        DataField = 'cpf_cnpj'
        DataSet = frxDBDsRecibos
        DataSetName = 'frxDBDsRecibos'
        Font.Charset = DEFAULT_CHARSET
        Font.Color = clBlack
        Font.Height = -16
        Font.Name = 'Arial'
        Font.Style = []
        Memo.UTF8W = (
          '[frxDBDsRecibos."cpf_cnpj"]')
        ParentFont = False
      end
      object frxDBDsRecibosobservacao: TfrxMemoView
        Left = 196.535560000000000000
        Top = 245.669450000000000000
        Width = 510.236550000000000000
        Height = 18.897650000000000000
        DataField = 'observacao'
        DataSet = frxDBDsRecibos
        DataSetName = 'frxDBDsRecibos'
        Font.Charset = DEFAULT_CHARSET
        Font.Color = clBlack
        Font.Height = -16
        Font.Name = 'Arial'
        Font.Style = []
        Memo.UTF8W = (
          '[frxDBDsRecibos."observacao"]')
        ParentFont = False
      end
      object frxDBDsRecibosreferente: TfrxMemoView
        Left = 196.535560000000000000
        Top = 219.212740000000000000
        Width = 510.236550000000000000
        Height = 18.897650000000000000
        DataField = 'referente'
        DataSet = frxDBDsRecibos
        DataSetName = 'frxDBDsRecibos'
        Font.Charset = DEFAULT_CHARSET
        Font.Color = clBlack
        Font.Height = -16
        Font.Name = 'Arial'
        Font.Style = []
        Memo.UTF8W = (
          '[frxDBDsRecibos."referente"]')
        ParentFont = False
      end
      object frxDBDsRecibosvlr_recibo1: TfrxMemoView
        Left = 196.535560000000000000
        Top = 192.756030000000000000
        Width = 298.582870000000000000
        Height = 18.897650000000000000
        DataField = 'vlr_recibo'
        DataSet = frxDBDsRecibos
        DataSetName = 'frxDBDsRecibos'
        Font.Charset = DEFAULT_CHARSET
        Font.Color = clBlack
        Font.Height = -16
        Font.Name = 'Arial'
        Font.Style = []
        Memo.UTF8W = (
          '[frxDBDsRecibos."vlr_recibo"]')
        ParentFont = False
      end
      object frxDBDsRecibosnome: TfrxMemoView
        Left = 196.535560000000000000
        Top = 167.299320000000000000
        Width = 510.236550000000000000
        Height = 18.897650000000000000
        DataField = 'nome'
        DataSet = frxDBDsRecibos
        DataSetName = 'frxDBDsRecibos'
        Font.Charset = DEFAULT_CHARSET
        Font.Color = clBlack
        Font.Height = -16
        Font.Name = 'Arial'
        Font.Style = []
        Memo.UTF8W = (
          '[frxDBDsRecibos."nome"]')
        ParentFont = False
      end
      object frxDBDsRecibosvlr_recibo: TfrxMemoView
        Left = 536.693260000000000000
        Top = 120.724490000000000000
        Width = 166.299320000000000000
        Height = 22.677180000000000000
        DataField = 'vlr_recibo'
        DataSet = frxDBDsRecibos
        DataSetName = 'frxDBDsRecibos'
        Font.Charset = DEFAULT_CHARSET
        Font.Color = clBlack
        Font.Height = -19
        Font.Name = 'Arial'
        Font.Style = []
        HAlign = haRight
        Memo.UTF8W = (
          '[frxDBDsRecibos."vlr_recibo"]')
        ParentFont = False
      end
    end
  end
  object frxDBDsUsuarios: TfrxDBDataset
    UserName = 'frxDBDataset1'
    CloseDataSource = False
    DataSet = DmDados.cdsUsuarios
    BCDToCurrency = False
    Left = 47
    Top = 96
  end
  object frxPDFExport: TfrxPDFExport
    UseFileCache = True
    ShowProgress = True
    OverwritePrompt = False
    DataOnly = False
    PrintOptimized = False
    Outline = False
    Background = False
    HTMLTags = True
    Quality = 95
    Author = 'FastReport'
    Subject = 'FastReport PDF export'
    ProtectionFlags = [ePrint, eModify, eCopy, eAnnot]
    HideToolbar = False
    HideMenubar = False
    HideWindowUI = False
    FitWindow = False
    CenterWindow = False
    PrintScaling = False
    Left = 176
    Top = 32
  end
  object frxSimpleTextExport: TfrxSimpleTextExport
    UseFileCache = True
    ShowProgress = True
    OverwritePrompt = False
    DataOnly = False
    Frames = False
    EmptyLines = False
    OEMCodepage = False
    DeleteEmptyColumns = True
    Left = 176
    Top = 88
  end
  object frxDBDsReceber: TfrxDBDataset
    UserName = 'frxDBDataset1'
    CloseDataSource = False
    FieldAliases.Strings = (
      'id=id'
      'documento=documento'
      'descricao=descricao'
      'parcela=parcela'
      'vlr_parcela=vlr_parcela'
      'vlr_compra=vlr_compra'
      'vlr_abatido=vlr_abatido'
      'dt_compra=dt_compra'
      'dt_vencimento=dt_vencimento'
      'dt_cadastro=dt_cadastro'
      'status=status'
      'dt_pagamento=dt_pagamento')
    DataSet = DmDados.cdsContas_receber
    BCDToCurrency = False
    Left = 47
    Top = 160
  end
  object frxDBDsPagar: TfrxDBDataset
    UserName = 'Pagar'
    CloseDataSource = False
    FieldAliases.Strings = (
      'id=id'
      'numero_doc=numero_doc'
      'descricao=descricao'
      'parcela=parcela'
      'vlr_parcela=vlr_parcela'
      'vlr_compra=vlr_compra'
      'vlr_abatido=vlr_abatido'
      'dt_compra=dt_compra'
      'dt_cadastro=dt_cadastro'
      'dt_vencimento=dt_vencimento'
      'dt_pagamento=dt_pagamento'
      'status=status')
    DataSet = DmDados.cdsContas_pagar
    BCDToCurrency = False
    Left = 47
    Top = 216
  end
  object frxDBDsCaixa: TfrxDBDataset
    UserName = 'frxDBDataset_Caixa'
    CloseDataSource = False
    FieldAliases.Strings = (
      'id=id'
      'numero_doc=numero_doc'
      'descricao=descricao'
      'valor=valor'
      'tipo=tipo'
      'dt_cadastro=dt_cadastro')
    DataSet = DmDados.cdsCaixa
    BCDToCurrency = False
    Left = 176
    Top = 160
  end
  object sqlRecibos: TSQLQuery
    MaxBlobSize = -1
    Params = <
      item
        DataType = ftInteger
        Name = 'prm'
        ParamType = ptInput
      end>
    SQL.Strings = (
      'select * from recibos where id = :prm')
    SQLConnection = DmDados.SQLConnection
    Left = 320
    Top = 104
    object sqlRecibosid: TIntegerField
      FieldName = 'id'
      Required = True
    end
    object sqlRecibostipo_recibo: TIntegerField
      FieldName = 'tipo_recibo'
      Required = True
    end
    object sqlRecibosdt_emissao: TDateField
      FieldName = 'dt_emissao'
      Required = True
    end
    object sqlRecibosnome: TStringField
      FieldName = 'nome'
      Required = True
      Size = 100
    end
    object sqlRecibosvlr_recibo: TFMTBCDField
      FieldName = 'vlr_recibo'
      Required = True
      Precision = 20
      Size = 2
    end
    object sqlRecibosreferente: TStringField
      FieldName = 'referente'
      Required = True
      Size = 100
    end
    object sqlRecibosobservacao: TStringField
      FieldName = 'observacao'
      Size = 255
    end
    object sqlRecibosemitente: TStringField
      FieldName = 'emitente'
      Required = True
      Size = 100
    end
    object sqlRecibosendereco: TStringField
      FieldName = 'endereco'
      Size = 100
    end
    object sqlReciboscpf_cnpj: TStringField
      FieldName = 'cpf_cnpj'
      Size = 30
    end
    object sqlReciboscidade: TStringField
      FieldName = 'cidade'
      Size = 100
    end
    object sqlRecibosdt_cadastro: TDateField
      FieldName = 'dt_cadastro'
      Required = True
    end
    object sqlReciboshr_cadastro: TTimeField
      FieldName = 'hr_cadastro'
      Required = True
    end
    object sqlRecibosuser_cadastro: TStringField
      FieldName = 'user_cadastro'
      Required = True
      Size = 50
    end
  end
  object frxDBDsRecibos: TfrxDBDataset
    UserName = 'frxDBDsRecibos'
    CloseDataSource = False
    FieldAliases.Strings = (
      'id=id'
      'tipo_recibo=tipo_recibo'
      'dt_emissao=dt_emissao'
      'nome=nome'
      'vlr_recibo=vlr_recibo'
      'referente=referente'
      'observacao=observacao'
      'emitente=emitente'
      'endereco=endereco'
      'cpf_cnpj=cpf_cnpj'
      'cidade=cidade'
      'dt_cadastro=dt_cadastro'
      'hr_cadastro=hr_cadastro'
      'user_cadastro=user_cadastro')
    DataSet = sqlRecibos
    BCDToCurrency = False
    Left = 320
    Top = 160
  end
end
