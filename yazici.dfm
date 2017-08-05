object yazicii: Tyazicii
  Left = 255
  Top = 188
  Width = 696
  Height = 480
  Caption = 'yazici'
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'MS Sans Serif'
  Font.Style = []
  OldCreateOrder = False
  OnCreate = FormCreate
  PixelsPerInch = 96
  TextHeight = 13
  object Memo1: TMemo
    Left = 168
    Top = 16
    Width = 345
    Height = 321
    ScrollBars = ssVertical
    TabOrder = 0
  end
  object Button1: TButton
    Left = 544
    Top = 16
    Width = 89
    Height = 25
    Caption = 'YAZICI AYARI'
    TabOrder = 1
    OnClick = Button1Click
  end
  object Button2: TButton
    Left = 224
    Top = 344
    Width = 185
    Height = 25
    Caption = 'YAZICI PENCERES'#304' '#304'LE YAZDIR'
    TabOrder = 2
    OnClick = Button2Click
  end
  object PrintDialog1: TPrintDialog
    Collate = True
    Options = [poPageNums, poSelection]
    Left = 32
    Top = 24
  end
  object PrinterSetupDialog1: TPrinterSetupDialog
    Left = 80
    Top = 24
  end
end
