object satirabaslukekleme: Tsatirabaslukekleme
  Left = 278
  Top = 186
  Width = 300
  Height = 237
  Caption = 'sat'#305'ra bo'#351'luk ekleme'
  Color = clSkyBlue
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'MS Sans Serif'
  Font.Style = []
  OldCreateOrder = False
  PixelsPerInch = 96
  TextHeight = 13
  object Button3: TButton
    Left = 336
    Top = 328
    Width = 75
    Height = 25
    Caption = 'Button3'
    TabOrder = 0
    Visible = False
  end
  object ListBox2: TListBox
    Left = 600
    Top = 24
    Width = 121
    Height = 97
    ItemHeight = 13
    TabOrder = 1
    Visible = False
  end
  object PageControl1: TPageControl
    Left = 0
    Top = 0
    Width = 289
    Height = 201
    ActivePage = TabSheet1
    TabIndex = 0
    TabOrder = 2
    object TabSheet1: TTabSheet
      Caption = 'SATIRA BO'#350'LUK EKLEME '#304#350'LEM'#304
      object ListBox1: TListBox
        Left = 16
        Top = 4
        Width = 121
        Height = 137
        ItemHeight = 13
        TabOrder = 0
      end
      object Button1: TButton
        Left = 62
        Top = 148
        Width = 75
        Height = 25
        Caption = 'y'#252'kle'
        TabOrder = 1
        OnClick = Button1Click
      end
      object Button2: TButton
        Left = 144
        Top = 8
        Width = 137
        Height = 25
        Caption = 'bo'#351'luk ekle kaydet'
        TabOrder = 2
        OnClick = Button2Click
      end
      object Button4: TButton
        Left = 208
        Top = 152
        Width = 75
        Height = 25
        Caption = 'OTOMAT'#304'K'
        TabOrder = 3
        OnClick = Button4Click
      end
    end
  end
  object OpenDialog1: TOpenDialog
    Left = 352
    Top = 168
  end
end
