object parantezdenayirma: Tparantezdenayirma
  Left = 243
  Top = 195
  Width = 572
  Height = 366
  Caption = 'parantezdenayirma'
  Color = clInactiveCaptionText
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'MS Sans Serif'
  Font.Style = []
  OldCreateOrder = False
  PixelsPerInch = 96
  TextHeight = 13
  object ListBox1: TListBox
    Left = 32
    Top = 72
    Width = 121
    Height = 97
    ItemHeight = 13
    TabOrder = 0
  end
  object Button1: TButton
    Left = 64
    Top = 176
    Width = 75
    Height = 25
    Caption = 'y'#252'kle'
    TabOrder = 1
    OnClick = Button1Click
  end
  object Button2: TButton
    Left = 184
    Top = 112
    Width = 75
    Height = 25
    Caption = 'ayr'#305#351't'#305'r'
    TabOrder = 2
    OnClick = Button2Click
  end
  object ListBox2: TListBox
    Left = 272
    Top = 72
    Width = 121
    Height = 97
    ItemHeight = 13
    TabOrder = 3
  end
  object ProgressBar1: TProgressBar
    Left = 0
    Top = 16
    Width = 449
    Height = 17
    Min = 0
    Max = 100
    TabOrder = 4
  end
  object Button3: TButton
    Left = 312
    Top = 176
    Width = 75
    Height = 25
    Caption = 'kaydet'
    TabOrder = 5
    OnClick = Button3Click
  end
  object Button4: TButton
    Left = 376
    Top = 232
    Width = 75
    Height = 25
    Caption = 'otomatik'
    TabOrder = 6
    OnClick = Button4Click
  end
  object Memo1: TMemo
    Left = 24
    Top = 304
    Width = 137
    Height = 25
    Lines.Strings = (
      'Memo1')
    TabOrder = 7
  end
  object Button5: TButton
    Left = 168
    Top = 304
    Width = 241
    Height = 25
    Caption = 'bo'#351'luklar'#305' yok et'
    TabOrder = 8
    OnClick = Button5Click
  end
end
