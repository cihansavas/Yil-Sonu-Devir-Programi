object ilamatkontrol: Tilamatkontrol
  Left = 163
  Top = 150
  Width = 1201
  Height = 599
  Caption = 'ilamatkontrol'
  Color = clGradientInactiveCaption
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'MS Sans Serif'
  Font.Style = []
  OldCreateOrder = False
  OnActivate = FormActivate
  PixelsPerInch = 96
  TextHeight = 13
  object PageControl1: TPageControl
    Left = 0
    Top = 0
    Width = 1185
    Height = 561
    Cursor = crHandPoint
    ActivePage = TabSheet11
    Align = alClient
    BiDiMode = bdLeftToRight
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -11
    Font.Name = 'MS Sans Serif'
    Font.Style = [fsBold]
    ParentBiDiMode = False
    ParentFont = False
    TabIndex = 9
    TabOrder = 0
    object TabSheet1: TTabSheet
      Caption = 'DEFTER KAY'#304'T'
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -11
      Font.Name = 'MS Sans Serif'
      Font.Style = [fsBold]
      ParentFont = False
      object GroupBox1: TGroupBox
        Left = 224
        Top = 112
        Width = 337
        Height = 177
        Caption = '           YEN'#304' DEFTER OLU'#350'TURMA '#304#350'LEM'#304
        Font.Charset = DEFAULT_CHARSET
        Font.Color = clWindowText
        Font.Height = -12
        Font.Name = 'MS Sans Serif'
        Font.Style = [fsBold]
        ParentFont = False
        TabOrder = 0
        object Label1: TLabel
          Left = 8
          Top = 64
          Width = 77
          Height = 13
          Caption = 'DEFTER YILI'
        end
        object Label2: TLabel
          Left = 8
          Top = 112
          Width = 145
          Height = 13
          Caption = 'SON '#304'LAMAT NUMARASI'
        end
        object Edit1: TEdit
          Left = 168
          Top = 56
          Width = 121
          Height = 21
          Cursor = crHandPoint
          TabOrder = 0
        end
        object Edit2: TEdit
          Left = 168
          Top = 104
          Width = 121
          Height = 21
          Cursor = crHandPoint
          TabOrder = 1
        end
        object Button1: TButton
          Left = 216
          Top = 136
          Width = 75
          Height = 25
          Cursor = crHandPoint
          Caption = 'OLU'#350'TUR'
          TabOrder = 2
          OnClick = Button1Click
        end
      end
      object kayit: TListBox
        Left = 744
        Top = 0
        Width = 121
        Height = 97
        ItemHeight = 13
        TabOrder = 1
        Visible = False
      end
    end
    object TabSheet2: TTabSheet
      Caption = 'DEFTER '#304#350'LEMLER'#304
      ImageIndex = 1
      object GroupBox2: TGroupBox
        Left = 32
        Top = 24
        Width = 265
        Height = 177
        Caption = '                   '#304'LAMAT '#304#350'LEMLER'#304'                '
        Font.Charset = DEFAULT_CHARSET
        Font.Color = clWindowText
        Font.Height = -12
        Font.Name = 'MS Sans Serif'
        Font.Style = [fsBold]
        ParentFont = False
        TabOrder = 0
        object Label3: TLabel
          Left = 16
          Top = 40
          Width = 73
          Height = 13
          Caption = #304'LAMAT YILI'
        end
        object Label4: TLabel
          Left = 16
          Top = 80
          Width = 68
          Height = 13
          Caption = #304'LAMAT NO'
        end
        object ComboBox1: TComboBox
          Left = 88
          Top = 32
          Width = 153
          Height = 21
          Cursor = crHandPoint
          ItemHeight = 0
          TabOrder = 0
          OnChange = ComboBox1Change
        end
        object Verigirisi: TEdit
          Left = 88
          Top = 72
          Width = 153
          Height = 21
          BiDiMode = bdLeftToRight
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clWindowText
          Font.Height = -12
          Font.Name = 'MS Sans Serif'
          Font.Style = [fsBold]
          ParentBiDiMode = False
          ParentFont = False
          TabOrder = 1
          OnChange = VerigirisiChange
        end
        object manuelgiris: TRadioButton
          Left = 16
          Top = 136
          Width = 113
          Height = 17
          Cursor = crHandPoint
          Caption = 'MANUEL G'#304'R'#304#350
          Color = clGradientInactiveCaption
          ParentColor = False
          TabOrder = 2
          Visible = False
          OnClick = manuelgirisClick
        end
        object otomatikgiris: TRadioButton
          Left = 16
          Top = 152
          Width = 121
          Height = 17
          Cursor = crHandPoint
          Caption = 'OTOMAT'#304'K G'#304'R'#304#350
          TabOrder = 3
          OnClick = otomatikgirisClick
        end
        object Acik: TButton
          Left = 86
          Top = 104
          Width = 75
          Height = 25
          Cursor = crHandPoint
          Caption = 'Acik'
          TabOrder = 4
          OnClick = AcikClick
        end
        object kapali: TButton
          Left = 166
          Top = 104
          Width = 75
          Height = 25
          Cursor = crHandPoint
          Caption = 'kapali'
          TabOrder = 5
          OnClick = kapaliClick
        end
      end
      object GroupBox3: TGroupBox
        Left = 32
        Top = 208
        Width = 833
        Height = 313
        Caption = 
          '                                                                ' +
          '           '#304'LAM DURUMUNA G'#214'RE L'#304'STELER                          ' +
          '                                                      '
        Font.Charset = DEFAULT_CHARSET
        Font.Color = clWindowText
        Font.Height = -12
        Font.Name = 'MS Sans Serif'
        Font.Style = [fsBold]
        ParentFont = False
        TabOrder = 1
        object Label5: TLabel
          Left = 104
          Top = 40
          Width = 86
          Height = 13
          Caption = 'A'#199'IK '#304'LAMLAR'
        end
        object Label6: TLabel
          Left = 280
          Top = 40
          Width = 101
          Height = 13
          Caption = 'KAPALI '#304'LAMLAR'
        end
        object Label7: TLabel
          Left = 456
          Top = 40
          Width = 133
          Height = 13
          Caption = #304#350'LEM YAPILACAKLAR'
        end
        object Label8: TLabel
          Left = 648
          Top = 40
          Width = 102
          Height = 13
          Caption = 'HATALI '#304'LAMLAR'
        end
        object aciksayisi: TLabel
          Left = 120
          Top = 288
          Width = 36
          Height = 13
          Caption = '11111'
        end
        object kapalisayisi: TLabel
          Left = 312
          Top = 288
          Width = 36
          Height = 13
          Caption = '11111'
        end
        object islemsizsayisi: TLabel
          Left = 496
          Top = 288
          Width = 36
          Height = 13
          Caption = '11111'
        end
        object hatalisayisi: TLabel
          Left = 680
          Top = 288
          Width = 36
          Height = 13
          Caption = '11111'
        end
        object Label10: TLabel
          Left = 160
          Top = 288
          Width = 34
          Height = 13
          Caption = 'ADET'
        end
        object Label11: TLabel
          Left = 536
          Top = 288
          Width = 34
          Height = 13
          Caption = 'ADET'
        end
        object Label12: TLabel
          Left = 352
          Top = 288
          Width = 34
          Height = 13
          Caption = 'ADET'
        end
        object Label13: TLabel
          Left = 720
          Top = 288
          Width = 34
          Height = 13
          Caption = 'ADET'
        end
        object Aciklistesi: TListBox
          Left = 80
          Top = 64
          Width = 121
          Height = 220
          DragCursor = crMultiDrag
          DragMode = dmAutomatic
          ItemHeight = 13
          TabOrder = 0
          OnDragDrop = AciklistesiDragDrop
          OnDragOver = AciklistesiDragOver
        end
        object Kapalilistesi: TListBox
          Left = 272
          Top = 64
          Width = 121
          Height = 220
          DragCursor = crMultiDrag
          DragMode = dmAutomatic
          ItemHeight = 13
          TabOrder = 1
          OnDragDrop = KapalilistesiDragDrop
          OnDragOver = KapalilistesiDragOver
        end
        object islemsizlistesi: TListBox
          Left = 456
          Top = 64
          Width = 121
          Height = 220
          DragCursor = crMultiDrag
          DragMode = dmAutomatic
          ItemHeight = 13
          TabOrder = 2
          OnDragDrop = islemsizlistesiDragDrop
          OnDragOver = islemsizlistesiDragOver
        end
        object Hatalilistesi: TListBox
          Left = 640
          Top = 64
          Width = 121
          Height = 220
          DragCursor = crMultiDrag
          DragMode = dmAutomatic
          ItemHeight = 13
          TabOrder = 3
          OnDragDrop = HatalilistesiDragDrop
          OnDragOver = HatalilistesiDragOver
        end
      end
      object GroupBox4: TGroupBox
        Left = 432
        Top = 24
        Width = 233
        Height = 105
        Caption = '     '#304'LAM DURUMU SORGULAMA              '
        Font.Charset = DEFAULT_CHARSET
        Font.Color = clWindowText
        Font.Height = -12
        Font.Name = 'MS Sans Serif'
        Font.Style = [fsBold]
        ParentFont = False
        TabOrder = 2
        object Label9: TLabel
          Left = 8
          Top = 32
          Width = 68
          Height = 13
          Caption = #304'LAMAT NO'
        end
        object aranacakdeger: TEdit
          Left = 96
          Top = 32
          Width = 121
          Height = 21
          TabOrder = 0
        end
        object Button2: TButton
          Left = 96
          Top = 64
          Width = 123
          Height = 25
          Cursor = crHandPoint
          Caption = 'DURUM SORGULA'
          TabOrder = 1
          OnClick = Button2Click
        end
      end
      object GroupBox28: TGroupBox
        Left = 864
        Top = 296
        Width = 105
        Height = 225
        TabOrder = 3
        object Label47: TLabel
          Left = 8
          Top = 13
          Width = 105
          Height = 52
          Caption = 
            '   S'#304'L'#304'NECEK            '#304'LAMLARI             KUTUYA  S'#220'R'#220'KLEY'#304'N'#304 +
            'Z'
          WordWrap = True
        end
        object Image1: TImage
          Left = 8
          Top = 80
          Width = 89
          Height = 137
          DragMode = dmAutomatic
          Picture.Data = {
            0A544A504547496D616765AE120000FFD8FFE000104A46494600010100000100
            010000FFDB0084000906061210100F0E10121010141415101510141010111715
            100F1412151714101414171B261E1719231912151F2F202327292C2C2C151E31
            35302A35262B2C2901090A0A0E0C0E170F0F1A29241C24292C292C2929292C29
            352C2C292C29292C292C292D292E2C2C2D292935292C292C292929292C2D2C29
            2C293529292C292929FFC000110800B7011403012200021101031101FFC4001B
            00010002030101000000000000000000000003060204050107FFC40045100001
            030201060909030B050000000000010002030411050612213141511322617181
            91A1B1C107143242527292D1E12353D21633436263738283A2B2C2153493F0F1
            FFC4001A010100030101010000000000000000000000010203040506FFC4002D
            1101000103030303020505000000000000000102031112213104417113325105
            611491B1E1F022234281A1FFDA000C03010002110311003F00FB8A2220222202
            2220222F0A0F517071DCB2A7A4CE0E39EE1ADADB59A7739C7403C9A4F22A6D4F
            94BAA9C914B0868F6B34BBFA9DA3B14C46513387D41785D65F237D662137E76A
            5CC07635E47632C123C05CFF004E49A4EB3DE4AB689566B87D525C4A267A52C4
            DF7A468EF2B564CA6A46EBA983A2569EE2A870E490FBA79E7D1F25BF0E4AFECD
            BD2FFAA6946B8599D963463F4ED3CCD90F73544ECB8A4D8F79E6865FC2B931E4
            B7EA43D3A7C16C332679211FC3F451884EAFB370E5D52EF94FF25FF25E7E5D53
            6E9BFE172C19939FBAF87E8A4FC9CD1FA2F87E89884E67E1E7E5DD2FEDBFE17A
            C865D526D74A39E097F0A81F939FBAF87E8A07E4CF245D5F44C42354FC3A4DCB
            5A23FA6039E39477B54F0E54D1BF554C1D323477D95765C983EC47D0EB2D49B2
            63F67D4EFAA9D26BFB2F50D744FF004248DDEEBDA7B8A9D7CB67C9703F46F6F2
            E683DB650368A68BF33512C7C81EF6F603E09A0F521F5A45F2C8F29B1287D713
            8DCE0D71EE0575B0CF2A00B847510963B6E6120FC2EF9A89A66168AA2785F516
            AE1F89473B38489C1C351D85A77107482B695522222022220222202222022220
            22220222202F0AF5107C8F1CC9F31CAC6D48D01EF73093C49C9DB7DA76D8E9E7
            0BAF8661B1B80CE78F71BA2C377FE2EB794CC29D3D2B1CCB67472076936BB4B4
            B48EB2151A9217B036F9EC361AF51E5B1B82B5A67665553132BEC1451B7531A3
            9C5CF595B4D54FA6A99C5B364EB07C0DBB16FC788D50D91BFA5BE2029CA34616
            66A95AABADC6AA06BA727DDFA12B219525BE953C83E2F16AAA712B335661569B
            96910D71C83ABC548DCB783D993FA3F12ACAF0B3314A752AD372E29B74BF0B3F
            12CCE5DD37ED7E167E2509771EA32B84ECB8A7DD2F533F1289D96F06C6C87E0F
            9A12EF3942E5C2765AC7B2279E770F00A17E5638FA301E92EF90578530EF1514
            AC0758079C02ABEFCA49CEA8DADE7FA95A93633507D66B79BE814ABA65DCA9C2
            E2209B6672836FA2AB639411105AE7B5C3D570D05AEE43BF90286AAAE477A4F2
            798789B951E1584CB2D4C00020E7B1D792FE8B4824E9D27529CA344472BF6476
            032401F2C9C5320600CBE9006A2EE5E4566408B16E2222022220222202222022
            220222202222022220E7650C39D4D30FD5BF51BAAB61DC689A0E9D62C790ABA5
            5479CC7B77B5C3AC1549C24F15CDDCE2B4A786173DD12D9FF4F8CFAA07BBA3B9
            48CA103513D8A46A95AA4892382DB546FA675CDADACADA6A6D50B665CF750BF7
            5FA4289D86487D427E1F9AED314F1A272AD3B0897EE8F50581C166FBA775056D
            0148A32B2967049BEE9DFD3F3589C067FBB3D2E67CD5CCAC4A6512A7C79393DC
            5C3469DAF1E0B7464E49B5CC1F11F05DF1AC2CCA4CA32AF8C9AF6A4F859F32B3
            6E4E4235E7BB9DD6EE0BB0E51B959196A4187451E9646C69DF617EB3A54185B7
            3EBDEEF61A0760FAAE815A992CCCE96A64DEE20759F9A4F12CF99859D11164E9
            111101111011110111101111011110111101111078A910479934ECDCE3DE7E6A
            EEAA188C79B5727EB0BF58055E86573B256A95AA26A95AACA4266AF4EB5E357A
            542C918A78D40C53C68266ACD60D5938D85CEA0093CC35AAAEF0858382F90E37
            9432D5C8E7B9CE0CBFD9C61C4358DD9A369B6B25587C9EE2F2195D4AE739EC2C
            739A1C49E0DCCB6ABEA06F6B732EBABA5AA9A3565E6D3F50A2BBB16E239DB2BD
            0D6B22BC6EB5E95CAF43B22728DCA4728DCAC8472BAC09DC09EA0992315A273B
            793DFF00450E20EB4521FD523AF478AE8E4FC59B031455C228F73A6888B36E22
            220222202222022220222202222022220222202AC651476A88DDBC0EF2159D70
            32A63FCD3F7123B8F82B53CA95C6CD36A95AA26A95AAEC933567A34ED36E2DC9
            02FCA4027B160D593B62859CBABCA5653FFB986A616DFF003818D9623FCC8CE8
            E900F229A972CA85FAAA621EF87B3FB82E9306B1AF6380B1B5C6A70E63A8AE2E
            2390949517708CC2FF006A0E28E72CF44F505A53A27DD96757A91EDC7FB7661C
            669DDA5B514E79A78FE6B67CFA23A38488FF00319A7B57CD710F26550CB985D1
            D40DC6CC7F53B8A7AD57EAB08960369A17C5EFC761F15ADDABA29E9E8AFDB5B8
            EE75976DFBA8FE7E4B0E2B916E648EE02581F19376E74F1B5CC04FA26E74DB78
            5DFC99C3E9A8439F2D4D3BA578B1CD95A4319ACB06D37205CAF9D068DC3A82CC
            05DB366AAE9D3356DE1E37E2EDDAAFD4A68DFCFECFB5412B5E03DA439AE00B5C
            D370E07510566553BC9EE3170EA479D22EF87DDF5D9FE5D255C4AF26EDB9B75C
            D32FA2E9EFC5FB515C7F2513946E523946E546ED0C5CFD9DBDA7347FDEA561A1
            65A360E455EAF17742DDEEBF55959A316006E014549A2379966888A8D4444404
            44404444044440444404444044440444405CACA38AF0DF739A7AF478AEAAD4C5
            63CE8641C97EAD3E0A63944F0AE40FB80B61AB5A08AED046B17E953C6FDEB496
            10D86AE1654658C5460C6DCD967D41834B63246874A766FCDD679174B10C561A
            663649DE58D7383010C73B8C5A5DA43468160B858E607498A5A582A60136819C
            D702246EC0F65C3AE37817D8B4B74C6735E70A5CAA718A3197CEE2C4A6123A71
            2C8D91C4B9EF6BDCD739C4DC9246B5D88F2B6B1EE8F3A574A5AE698C3B3AF9F7
            D1A184671BEFBAEDC1E4A241F9DA86B7DC85EEED716AEFE49E45B68E49257BD9
            33B8A2170610631A738D8EA2740B83BD77577ACE36DE5C14D8BD9F88583077CE
            E858EA96C6D94E97363040603A9A6E4F1B7D96F9D56D6371D5D4A30A45E5CCE6
            5EB446230A0F940C0238DB1D4C4C6B2EECC943000D37176BAC340D208EA54A0B
            EC58FD070F4D3C2349734967BEDE337B476AF9752E4ED549E853CC6FB4B081D6
            EB2F5BA4BD1A3154F0F98FAA74D545D89A29E63B477458754BA27B6561B398E6
            96F38D8793674AFACD0D736789933353C5EDECBBD66F41B85408B23A660BCEF8
            29C7ED656DFA85FBD59B2423898D9A28AA3CE2C5AE36616B584DC7149D77B762
            CBAB9A2B8D54F30D7E97176D5734571889F9F9F1CBB8E51B948E51B979EFA06A
            86E75446370EF2AC6B8387373AA5C77003B177D56A5A8EE2222AB41111011110
            1111011110111101111011110111101612B2ED237823AC2CD78505568F402371
            5B0E8AFCFDEB02CCD9246F29EF5305A39D5FCB17F074CC98DFEC6A2964FE10F2
            D3D8E5CFCB2AFC36AA9DB253F9B9944D06780C0C97832FB3DA4101DA8AEEE575
            3F0987D6B76F045C39D8E6BFFC570B2B328686AB0F716F062A408080F88B643C
            76E706B88D208BEA3A974DADF4F3CF66177119E38EEDCCA8C9A8E8A95D53473D
            54443E301ACA9798ECF9034E827977ADAC7682B28A9E5A96E212C82300864B0C
            4ECEBB80B671E7DCB9D95B92F471511A8A5CE6F1E0168E77BA3E348D078B9C46
            DD1CAA7CB1C9F960A479F3DAA998E744CE0A62C7039D2002EEB03A35F429A662
            74E67BF78F0AD7131AB11DBB4F9F0DFAE8F11869DF52EAB81C19197969A46827
            8B7CDB83AF62B0E1733DF0412496CF7471B9F61619CE6826C366B553CADC36AE
            2A47892B4CCC798E3E0CD3C6D2ECF7800673757D15D18CCD6868F5401D005BC1
            635E34C4EDCF686B6B3AE637E2399CFCFDDAD88D570514B37B0C7BBA434DBB6C
            BE4D3E3F5326892799DBC67903A82BFE5ED5E6513DBB64731839AF9CEEC676AF
            9885DDD15B8D3354C3C3FACDFAA2B8A299ECD98F4824E937D675F5AB9793C6E8
            AA3FB91FDE55363F47AD5E3C9EB3EC6A1DBE460EA65FFC96DD5CE2D4B8FE9919
            EA69F13FA2CCE51B948E51B8AF21F5AF7036DDF23B94F7AECAE66071D984EFFF
            00BE2BA6B3AB96B4702222858444404444044440444404444044440444404444
            044441C0AF65A7772D8F58F985E354F8CB7ED1AEE4EE3F550057633CBCAA8384
            8A58CFAF1CADF89842A4D4652D34B830A69339B3B606B633244EE3B9845B8392
            D63E8DB5ABEC274B79C752A2D363914586D661D33646B9AEAC8E37989C632FCF
            716B73C680EB91AEDAD6F677EDDE185EDBBF697B945835079832A699B1365269
            83B8190EB739A1E0B03AD7D276682B7B2B325F808E9C32A6B1C24A88230C965C
            F6B4B8939E011AC5AE172715A6C3DF86412C229FCE079A365E0DCD120712C120
            7341D7AEE6CBAB941929145361F143254B44D516FF0070F76606B4BB3E3CEBE6
            B86F5B44E31BCF33CC30AA9CC4E22388E3EED8C73069A39A82292AE6A96C9531
            F1256C600E0F8C5D768BFF00EAB992A9FF00E94E8B14A389D5151501B1CF37DB
            B81CCD1982D603593D8AE0B9EE4ED4F875588DEA9C637F3C4283E52EAF8F4F08
            D8D7C8EFE239ADFED72AFE4D60E6AA76C7A73071A523646358E73ABA54D96757
            C2D74E7630B631CCC163FD59CAEF9258279AD38CE16924B3E4DEDD1C58FA0769
            2BBE6BF46C44779783E8FE2FACAA67DB13FA2A39594021AA78680D6B835EC035
            00E1A40E6702ACB904DB523CEF99FD8C605ADE50A8AF1C338F54963B99DA5BDA
            0F5ADEC8865A89877C929ED03C16772BD5D3C79C35B167D3EBEA8ED8CFE6ED39
            415078AEE62A77282A355B7901703DD74B0D8ED1B56DAC226D9A06E0166B396B
            0222224444404444044440444404444044440444404444044441CDC659A18794
            8EB17F05A2D2BA98A36F19E42D3DB6F15CA06C34AB470CAAE5285536E34CA693
            19A592399CD92591C1F1C65EC619A1160FB696DC9D7C8ACA6A770EB5C8754494
            B57555069E79A1A88600E740C0FCC963696BB3D80DC68B6C5B5BEF0CAE44E227
            F9C2AD53350C9855286F9BF9D30D3B25B068940CF01F73A0919BACEE2BB789E4
            B528AEC3E0A72F6365F3873CC53BC96863016961B9CDD3B97026AFA438553D33
            B821551CB1B5E1F1E6C823E1C93C6205C661D3A57767C9EA17E254F040182274
            12C8F304C402FCEB36CE6BB41E40BAA76F9FF27263311B44FB5BF8351360C4AA
            C70934A228226674CF2F7074AE0ECD04ECD1DEACAEC51801769E28738DC68B35
            A5C7B02AC64AD0B58EC473338B05488985EE2E25B130DF8C749D2F5BD8F31DE6
            D2B23177CB990C7CAE95D63D01A1C4F205CB5EF5C47874DB9D36A671F32AA647
            E1C2A2A1D5737A0C7171BDCE7CEE39CD6F2817CE3D1BD7D13CED87D61D27E6B9
            74586B218A3819A430693EDBCFA4F3CE7B0059BA0097AEFA9567B76474B63D1A
            313CCEF2D8C7A8B87A59E21A49612DB7B6CE337BADD2B53241B6A1A7E5121EB9
            1DF25B8C6E6D88D96ECD8BC858216B226696341B68DEF73ADD4EB742AC57FD1A
            7EF95A6D7F762E7DB1FF0063F76CB9445B773072AF5B383C857AD1C76F38EF0A
            AD5D85EA22CDB088880888808888088880888808888088880888808888088882
            0AC65E378E43D9A55703F3C93B2E6CACD3C79CD7377823AC595330AC41AF8C1D
            A38B20DAC95BA1CD3D214C2B30E9B548D3B544D75F52CC15230A801F76C8D6C8
            3748C6BC7F502B41F93146ED74B00BED635CCFEC216FBF595934A98AA6389566
            889E61861F87C7047C142CCC66739D6CE71BB9D6B9BB893B0752D9BF20BDEE0E
            D6920836E82474958B4AF4A899CEF2988888C4312B1B2CC85881A47428139589
            5910BC4113D8A6A2D2F603AFC05D4523C0D6A3C26A04956F6B748863024B6A12
            48410CE701A49E70A5110B1A222AB41111011110111101111011110111101111
            011110111101111017CEF2A327E6A5A892B69EE6390E74A00BE638EBCE1B5A4D
            CDF612752FA22F0841F3CA0C7DAEB6782C3BC5CB4F88E95D986AC385C16B86F0
            41EE5BB5F9210C84BE3FB171F647149E56ECE8B2E63F266561BE6B5FCAD3A7C0
            AB6C8C368BEE6EB2695A4607B35991BEF69FEE0B0356F1B5A79DBF2288755A56
            61720628E1EAB4F4B821C708F507C47E4981D52BC6EB0B8CFC7DDB18C1CE5CB5
            25C7653A8B1BCCD1E3753816774DB82D1ADC5991FA6F03906977505C46C1553E
            8026783CE1BE017530DC8624874EE007B11EB3C85DB3A1460C39A2BAA2B1E61A
            4698C7AF2BBD5076DC7A3D172AE193F80B28E2E099771273A47BB5BDE7593BB9
            96ED251B2268646D0C68D8D1DBCA54EAA9C08888911110111101111011110111
            10111101111011110111101111011110111100850BE91875B1879DA17A882138
            5427F46CF8427FA443F751FC2178883218643F7517C0DF92CE3A28DBA5B1B1BE
            EB1A3B82F5104C8888088880888808888088880888808888088883FFD9}
          Stretch = True
          OnDragDrop = Image1DragDrop
          OnDragOver = Image1DragOver
        end
      end
      object Button31: TButton
        Left = 336
        Top = 152
        Width = 75
        Height = 25
        Caption = 'Button31'
        TabOrder = 4
      end
    end
    object TabSheet3: TTabSheet
      Caption = 'RAPORLAR'
      ImageIndex = 2
      object GroupBox5: TGroupBox
        Left = 8
        Top = 0
        Width = 785
        Height = 521
        TabOrder = 0
        object GroupBox6: TGroupBox
          Left = 24
          Top = 16
          Width = 281
          Height = 169
          Caption = '                  RAPOR DEFTER'#304'                          '
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clWindowText
          Font.Height = -12
          Font.Name = 'MS Sans Serif'
          Font.Style = [fsBold]
          ParentFont = False
          TabOrder = 0
          object Label15: TLabel
            Left = 8
            Top = 56
            Width = 101
            Height = 13
            Caption = 'RAPOR DEFTER'#304
          end
          object Label16: TLabel
            Left = 8
            Top = 96
            Width = 108
            Height = 13
            Caption = 'ALINACAK RAPOR'
          end
          object ComboBox2: TComboBox
            Left = 120
            Top = 48
            Width = 161
            Height = 21
            Cursor = crHandPoint
            ItemHeight = 0
            TabOrder = 0
            OnChange = ComboBox2Change
          end
          object raporturu: TComboBox
            Left = 120
            Top = 88
            Width = 161
            Height = 21
            Cursor = crHandPoint
            ItemHeight = 13
            TabOrder = 1
            Text = 'RAPOR T'#220'R'#220'N'#220' SE'#199
            OnChange = raporturuChange
            Items.Strings = (
              'A'#199'IK '#304'LAMLAR'
              'KAPALI '#304'LAMLAR'
              #304#350'LEMS'#304'Z '#304'LAMLAR'
              'HATALI '#304'LAMLAR')
          end
        end
        object yazialani: TMemo
          Left = 24
          Top = 192
          Width = 745
          Height = 305
          Cursor = crSizeNS
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clWindowText
          Font.Height = -12
          Font.Name = 'MS Sans Serif'
          Font.Pitch = fpFixed
          Font.Style = [fsBold]
          ParentFont = False
          ReadOnly = True
          TabOrder = 1
        end
        object GroupBox7: TGroupBox
          Left = 536
          Top = 104
          Width = 233
          Height = 81
          Caption = '   KAYDETME VE YAZDIRMA ALANI    '
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clWindowText
          Font.Height = -12
          Font.Name = 'MS Sans Serif'
          Font.Style = [fsBold]
          ParentFont = False
          TabOrder = 2
          DesignSize = (
            233
            81)
          object Label17: TLabel
            Left = 40
            Top = 64
            Width = 86
            Height = 13
            Caption = 'UZANTI T'#220'R'#220
          end
          object Button3: TButton
            Left = 40
            Top = 24
            Width = 75
            Height = 25
            Cursor = crHandPoint
            Caption = 'YAZDIR'
            TabOrder = 0
            OnClick = Button3Click
          end
          object Button4: TButton
            Left = 136
            Top = 24
            Width = 75
            Height = 25
            Cursor = crHandPoint
            Caption = 'KAYDET'
            TabOrder = 1
            OnClick = Button4Click
          end
          object uzanti: TComboBox
            Left = 136
            Top = 56
            Width = 73
            Height = 21
            Cursor = crHandPoint
            Anchors = [akLeft, akTop, akRight, akBottom]
            ItemHeight = 13
            ItemIndex = 1
            TabOrder = 2
            Text = 'rtf'
            Items.Strings = (
              'txt'
              'rtf')
          end
        end
        object GroupBox8: TGroupBox
          Left = 304
          Top = 24
          Width = 233
          Height = 81
          Caption = '   YAZDIRMA ALANI SUTUN SAYISI     '
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clWindowText
          Font.Height = -12
          Font.Name = 'MS Sans Serif'
          Font.Style = [fsBold]
          ParentFont = False
          TabOrder = 3
          object satirsayisi: TLabel
            Left = 80
            Top = 56
            Width = 8
            Height = 13
            Caption = '8'
          end
          object Label14: TLabel
            Left = 104
            Top = 56
            Width = 44
            Height = 13
            Caption = 'SUTUN'
          end
          object satirayari: TTrackBar
            Tag = 1
            Left = 32
            Top = 24
            Width = 177
            Height = 33
            Cursor = crHSplit
            Max = 16
            Orientation = trHorizontal
            Frequency = 1
            Position = 8
            SelEnd = 0
            SelStart = 0
            TabOrder = 0
            TickMarks = tmBottomRight
            TickStyle = tsAuto
            OnChange = satirayariChange
          end
        end
        object GroupBox25: TGroupBox
          Left = 304
          Top = 104
          Width = 233
          Height = 81
          Caption = '   '#304'LAMLAR ARASI BO'#350'LUK AYARI'
          TabOrder = 4
          object Label49: TLabel
            Left = 40
            Top = 64
            Width = 142
            Height = 13
            Caption = '2 '#304'LAM ARASI BO'#350'LUK='
          end
          object Label50: TLabel
            Left = 184
            Top = 64
            Width = 8
            Height = 13
            Caption = '6'
          end
          object boslukayari: TTrackBar
            Left = 32
            Top = 16
            Width = 177
            Height = 45
            Cursor = crHSplit
            Max = 50
            Orientation = trHorizontal
            Frequency = 1
            Position = 6
            SelEnd = 0
            SelStart = 0
            TabOrder = 0
            TickMarks = tmBottomRight
            TickStyle = tsAuto
            OnChange = boslukayariChange
          end
        end
      end
      object Button5: TButton
        Left = 192
        Top = 144
        Width = 115
        Height = 25
        Cursor = crHandPoint
        Caption = 'RAPOR HAZIRLA'
        Font.Charset = DEFAULT_CHARSET
        Font.Color = clWindowText
        Font.Height = -11
        Font.Name = 'MS Sans Serif'
        Font.Style = [fsBold]
        ParentFont = False
        TabOrder = 1
        OnClick = Button5Click
      end
    end
    object TabSheet4: TTabSheet
      Caption = 'AYARLAR'
      ImageIndex = 3
      object TabSheet5: TGroupBox
        Left = 48
        Top = 24
        Width = 281
        Height = 105
        Caption = '           '#304'LAMAT DEFTER'#304' S'#304'L                          '
        Font.Charset = DEFAULT_CHARSET
        Font.Color = clWindowText
        Font.Height = -12
        Font.Name = 'MS Sans Serif'
        Font.Style = [fsBold]
        ParentFont = False
        TabOrder = 0
        object silinecekdeftersirasi: TLabel
          Left = 8
          Top = 88
          Width = 102
          Height = 13
          Caption = 'silinecekilamsirasi'
          Visible = False
        end
        object deftersil: TComboBox
          Left = 48
          Top = 24
          Width = 145
          Height = 21
          Cursor = crHandPoint
          ItemHeight = 0
          TabOrder = 0
          Text = 'DEFTER SE'#199
          OnChange = deftersilChange
        end
        object silbutonu: TButton
          Left = 120
          Top = 56
          Width = 75
          Height = 25
          Cursor = crHandPoint
          Caption = 'S'#304'L'
          TabOrder = 1
          OnClick = silbutonuClick
        end
      end
      object GroupBox9: TGroupBox
        Left = 48
        Top = 152
        Width = 281
        Height = 105
        Caption = '    '#304'LAMAT NUMARASI EKLEME '#304#350'LEMLER'#304
        Font.Charset = DEFAULT_CHARSET
        Font.Color = clWindowText
        Font.Height = -12
        Font.Name = 'MS Sans Serif'
        Font.Style = [fsBold]
        ParentFont = False
        TabOrder = 1
        object Label18: TLabel
          Left = 24
          Top = 40
          Width = 105
          Height = 13
          Caption = 'SON '#304'LAMAT NO='
          Visible = False
        end
        object sonilamno1: TLabel
          Left = 128
          Top = 40
          Width = 64
          Height = 13
          Caption = 'sonilamno1'
          Visible = False
        end
        object Label20: TLabel
          Left = 24
          Top = 64
          Width = 139
          Height = 13
          Caption = 'YEN'#304' '#304'LAMAT ARALI'#286'I='
          Visible = False
        end
        object Edit3: TEdit
          Left = 200
          Top = 56
          Width = 65
          Height = 21
          Cursor = crHandPoint
          TabOrder = 0
          Visible = False
        end
        object Button7: TButton
          Left = 192
          Top = 80
          Width = 75
          Height = 25
          Cursor = crHandPoint
          Caption = 'ONAYLA'
          TabOrder = 1
          Visible = False
          OnClick = Button7Click
        end
        object Button8: TButton
          Left = 80
          Top = 80
          Width = 75
          Height = 25
          Cursor = crHandPoint
          Caption = 'VAZGE'#199
          TabOrder = 2
          Visible = False
          OnClick = Button8Click
        end
        object RadioButton1: TRadioButton
          Left = 24
          Top = 16
          Width = 193
          Height = 17
          Cursor = crHandPoint
          Caption = #304'LAMAT NUMARASI EKLE'
          TabOrder = 3
          OnClick = RadioButton1Click
        end
      end
      object GroupBox10: TGroupBox
        Left = 48
        Top = 264
        Width = 281
        Height = 121
        Caption = '               '#304#350'LEMS'#304'Z NUMARA ARALI'#286'I           '
        Font.Charset = DEFAULT_CHARSET
        Font.Color = clWindowText
        Font.Height = -12
        Font.Name = 'MS Sans Serif'
        Font.Style = [fsBold]
        ParentFont = False
        TabOrder = 2
        object Label21: TLabel
          Left = 32
          Top = 24
          Width = 70
          Height = 13
          Caption = 'BA'#350'LANGI'#199
        end
        object Label22: TLabel
          Left = 64
          Top = 48
          Width = 33
          Height = 13
          Caption = 'B'#304'T'#304#350
        end
        object sonilamno2: TLabel
          Left = 120
          Top = 104
          Width = 64
          Height = 13
          Caption = 'sonilamno2'
        end
        object Label19: TLabel
          Left = 8
          Top = 104
          Width = 105
          Height = 13
          Caption = 'SON '#304'LAMAT NO='
        end
        object Edit4: TEdit
          Left = 112
          Top = 16
          Width = 121
          Height = 21
          Cursor = crHandPoint
          TabOrder = 0
        end
        object Edit5: TEdit
          Left = 112
          Top = 48
          Width = 121
          Height = 21
          Cursor = crHandPoint
          TabOrder = 1
        end
        object Button9: TButton
          Left = 160
          Top = 72
          Width = 75
          Height = 25
          Cursor = crHandPoint
          Caption = 'ONAYLA'
          TabOrder = 2
          OnClick = Button9Click
        end
      end
      object GroupBox11: TGroupBox
        Left = 376
        Top = 336
        Width = 185
        Height = 105
        Caption = '     KISAYOL TU'#350' AYARLARI'
        Font.Charset = DEFAULT_CHARSET
        Font.Color = clWindowText
        Font.Height = -12
        Font.Name = 'MS Sans Serif'
        Font.Style = [fsBold]
        ParentFont = False
        TabOrder = 3
        object Label24: TLabel
          Left = 16
          Top = 32
          Width = 29
          Height = 13
          Caption = 'A'#199'IK'
        end
        object Label25: TLabel
          Left = 120
          Top = 32
          Width = 44
          Height = 13
          Caption = 'KAPALI'
        end
        object kisayolacik: TComboBox
          Left = 8
          Top = 56
          Width = 65
          Height = 21
          Cursor = crHandPoint
          ItemHeight = 0
          TabOrder = 0
          OnChange = kisayolacikChange
        end
        object kisayolkapali: TComboBox
          Left = 96
          Top = 56
          Width = 73
          Height = 21
          Cursor = crHandPoint
          ItemHeight = 0
          TabOrder = 1
          OnChange = kisayolkapaliChange
        end
      end
      object GroupBox12: TGroupBox
        Left = 376
        Top = 64
        Width = 185
        Height = 249
        Caption = '     RAKAMLARI SIRALA'
        Font.Charset = DEFAULT_CHARSET
        Font.Color = clWindowText
        Font.Height = -12
        Font.Name = 'MS Sans Serif'
        Font.Style = [fsBold]
        ParentFont = False
        TabOrder = 4
        object RadioButton2: TRadioButton
          Left = 8
          Top = 32
          Width = 113
          Height = 17
          Cursor = crHandPoint
          Caption = 'A'#199'IK L'#304'STES'#304
          TabOrder = 0
          OnClick = RadioButton2Click
        end
        object RadioButton3: TRadioButton
          Left = 8
          Top = 72
          Width = 113
          Height = 17
          Cursor = crHandPoint
          Caption = 'KAPALI L'#304'STES'#304
          TabOrder = 1
          OnClick = RadioButton3Click
        end
        object RadioButton4: TRadioButton
          Left = 8
          Top = 112
          Width = 113
          Height = 17
          Cursor = crHandPoint
          Caption = #304#350'LEMS'#304'Z L'#304'STES'#304
          TabOrder = 2
          OnClick = RadioButton4Click
        end
        object RadioButton5: TRadioButton
          Left = 8
          Top = 152
          Width = 113
          Height = 17
          Cursor = crHandPoint
          Caption = 'HATALI L'#304'STES'#304
          TabOrder = 3
          OnClick = RadioButton5Click
        end
        object RadioButton6: TRadioButton
          Left = 8
          Top = 200
          Width = 129
          Height = 17
          Cursor = crHandPoint
          Caption = 'HEPS'#304'N'#304' SIRALA'
          TabOrder = 4
          OnClick = RadioButton6Click
        end
      end
      object GroupBox13: TGroupBox
        Left = 648
        Top = 16
        Width = 249
        Height = 409
        Caption = 'B'#304'RDEN FAZLA DEFTER'#304' B'#304'RLE'#350'T'#304'RME'
        Font.Charset = DEFAULT_CHARSET
        Font.Color = clWindowText
        Font.Height = -12
        Font.Name = 'MS Sans Serif'
        Font.Style = [fsBold]
        ParentFont = False
        TabOrder = 5
        object Label26: TLabel
          Left = 40
          Top = 56
          Width = 78
          Height = 13
          Caption = 'DEFTER SE'#199
        end
        object Label27: TLabel
          Left = 24
          Top = 120
          Width = 154
          Height = 13
          Caption = 'B'#304'RLE'#350'ECEK DEFTERLER'
        end
        object Label28: TLabel
          Left = 56
          Top = 312
          Width = 95
          Height = 13
          Caption = 'YEN'#304' KAYIT ADI'
        end
        object ComboBox5: TComboBox
          Left = 24
          Top = 72
          Width = 145
          Height = 21
          Cursor = crHandPoint
          ItemHeight = 0
          TabOrder = 0
          Text = 'DEFTER SE'#199
          OnChange = ComboBox5Change
        end
        object ListBox1: TListBox
          Left = 24
          Top = 136
          Width = 137
          Height = 97
          ItemHeight = 13
          TabOrder = 1
        end
        object Edit6: TEdit
          Left = 24
          Top = 328
          Width = 153
          Height = 21
          Cursor = crHandPoint
          TabOrder = 2
        end
        object birlestirbutonu: TButton
          Left = 104
          Top = 360
          Width = 75
          Height = 25
          Cursor = crHandPoint
          Caption = 'B'#304'RLE'#350'T'#304'R'
          TabOrder = 3
          OnClick = birlestirbutonuClick
        end
        object Button11: TButton
          Left = 88
          Top = 256
          Width = 75
          Height = 25
          Cursor = crHandPoint
          Caption = #199'IKART'
          TabOrder = 4
        end
      end
      object GroupBox29: TGroupBox
        Left = 48
        Top = 424
        Width = 281
        Height = 73
        Caption = '          FABR'#304'KA AYARLARINA D'#214'N                     '
        TabOrder = 6
        object Button26: TButton
          Left = 48
          Top = 24
          Width = 169
          Height = 25
          Caption = 'FABR'#304'KA AYARLARI'
          TabOrder = 0
          OnClick = Button26Click
        end
      end
      object GroupBox30: TGroupBox
        Left = 376
        Top = 440
        Width = 185
        Height = 97
        TabOrder = 7
        object Label48: TLabel
          Left = 24
          Top = 8
          Width = 134
          Height = 26
          Caption = #304#351'lemsiz listesine elden ilam ekleme'
          WordWrap = True
        end
        object Edit9: TEdit
          Left = 24
          Top = 40
          Width = 121
          Height = 21
          TabOrder = 0
        end
        object Button27: TButton
          Left = 72
          Top = 72
          Width = 75
          Height = 25
          Caption = 'ekle'
          TabOrder = 1
          OnClick = Button27Click
        end
      end
      object GroupBox31: TGroupBox
        Left = 648
        Top = 432
        Width = 257
        Height = 105
        TabOrder = 8
        object Label51: TLabel
          Left = 8
          Top = 48
          Width = 96
          Height = 13
          Caption = #246'rnek:2010/2-45'
        end
        object Label52: TLabel
          Left = 56
          Top = 8
          Width = 129
          Height = 26
          Caption = #304'LAMAT DEFTER'#304'N'#304'N T'#304'RES'#304'N'#304' BEL'#304'RLEME'
          WordWrap = True
        end
        object tire: TEdit
          Left = 136
          Top = 40
          Width = 33
          Height = 21
          TabOrder = 0
          Text = '/2-'
        end
        object Button28: TButton
          Left = 96
          Top = 72
          Width = 75
          Height = 25
          Caption = 'De'#287'i'#351'tir'
          TabOrder = 1
          OnClick = Button28Click
        end
      end
    end
    object TabSheet6: TTabSheet
      Caption = 'RAKAM AYRI'#350'TIRMA'
      ImageIndex = 4
      object GroupBox14: TGroupBox
        Left = 0
        Top = 24
        Width = 321
        Height = 201
        Caption = '                    UYAP RAKAM AYRI'#350'TIRMA'
        Font.Charset = DEFAULT_CHARSET
        Font.Color = clWindowText
        Font.Height = -12
        Font.Name = 'MS Sans Serif'
        Font.Style = [fsBold]
        ParentFont = False
        TabOrder = 0
        object Label29: TLabel
          Left = 24
          Top = 80
          Width = 216
          Height = 52
          Caption = 
            'program klasoru i'#231'erisinde bulunan y'#252'kle.txt i'#231'erisindeki rakaml' +
            'ar'#305' tesbit edip kalsor i'#231'erisinde bulunan  sonu'#231' listesine aktar' +
            'ma i'#351'lemi yapar'
          WordWrap = True
        end
        object Button6: TButton
          Left = 16
          Top = 24
          Width = 209
          Height = 25
          Cursor = crHandPoint
          Caption = 'OTOMAT'#304'K RAKAM AYRI'#350'TIRMA'
          TabOrder = 0
          OnClick = Button6Click
        end
        object RadioButton10: TRadioButton
          Left = 24
          Top = 160
          Width = 113
          Height = 17
          Cursor = crHandPoint
          Caption = 'A'#199'IK L'#304'STES'#304'NE AKTAR'
          TabOrder = 1
          Visible = False
          OnClick = RadioButton10Click
        end
        object RadioButton11: TRadioButton
          Left = 24
          Top = 176
          Width = 113
          Height = 17
          Cursor = crHandPoint
          Caption = 'KAPALI L'#304'STES'#304'NE AKTAR'
          TabOrder = 2
          Visible = False
          OnClick = RadioButton11Click
        end
      end
      object GroupBox15: TGroupBox
        Left = 328
        Top = 344
        Width = 289
        Height = 97
        Caption = 'AYRI'#350'TIRILAN DEFTER'#304' S'#304'STEME KAYDET'
        Font.Charset = DEFAULT_CHARSET
        Font.Color = clWindowText
        Font.Height = -12
        Font.Name = 'MS Sans Serif'
        Font.Style = [fsBold]
        ParentFont = False
        TabOrder = 1
        object Label31: TLabel
          Left = 56
          Top = 96
          Width = 5
          Height = 13
          WordWrap = True
        end
        object Button10: TButton
          Left = 120
          Top = 56
          Width = 73
          Height = 25
          Cursor = crHandPoint
          Caption = 'KAYDET'
          TabOrder = 0
          OnClick = Button10Click
        end
        object Edit7: TEdit
          Left = 72
          Top = 24
          Width = 121
          Height = 21
          Cursor = crHandPoint
          TabOrder = 1
        end
      end
      object GroupBox16: TGroupBox
        Left = 0
        Top = 264
        Width = 321
        Height = 185
        Caption = 'BEL'#304'RL'#304' ARALIKTAK'#304' RAKAMLARI AYRI'#350'TIRMA'
        Font.Charset = DEFAULT_CHARSET
        Font.Color = clWindowText
        Font.Height = -12
        Font.Name = 'MS Sans Serif'
        Font.Style = [fsBold]
        ParentFont = False
        TabOrder = 2
        object Label30: TLabel
          Left = 24
          Top = 64
          Width = 239
          Height = 65
          Caption = 
            'program klasoru i'#231'erisinde bulunan y'#252'kle.txt i'#231'erisindeki rakaml' +
            'ar'#305' tesbit edip bu rakalmlardan belirli aral'#305'kta olanlar'#305' klasor' +
            ' i'#231'erisinde bulunan  sonu'#231' listesine aktarma i'#351'lemi yapar'
          WordWrap = True
        end
        object Button12: TButton
          Left = 8
          Top = 24
          Width = 305
          Height = 25
          Cursor = crHandPoint
          Caption = 'L'#304'STEDEN BEL'#304'RL'#304' ARALIKTAK'#304' RAKAMLARI AYIR'
          TabOrder = 0
          OnClick = Button12Click
        end
        object RadioButton12: TRadioButton
          Left = 16
          Top = 144
          Width = 177
          Height = 17
          Cursor = crHandPoint
          Caption = 'A'#199'IK L'#304'STES'#304'NE AKTAR'
          TabOrder = 1
          Visible = False
          OnClick = RadioButton12Click
        end
        object RadioButton13: TRadioButton
          Left = 16
          Top = 160
          Width = 193
          Height = 17
          Cursor = crHandPoint
          Caption = 'KAPALI L'#304'STES'#304'NE AKTAR'
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clWindowText
          Font.Height = -12
          Font.Name = 'MS Sans Serif'
          Font.Style = [fsBold]
          ParentFont = False
          TabOrder = 2
          Visible = False
          OnClick = RadioButton13Click
        end
      end
      object GroupBox17: TGroupBox
        Left = 336
        Top = 168
        Width = 273
        Height = 105
        Caption = '         S'#304'STEMDEN S'#304'L'
        Font.Charset = DEFAULT_CHARSET
        Font.Color = clWindowText
        Font.Height = -12
        Font.Name = 'MS Sans Serif'
        Font.Style = [fsBold]
        ParentFont = False
        TabOrder = 3
        object ComboBox6: TComboBox
          Left = 40
          Top = 24
          Width = 145
          Height = 21
          Cursor = crHandPoint
          ItemHeight = 0
          TabOrder = 0
          Text = 'DEFTER SE'#199
        end
        object Button13: TButton
          Left = 112
          Top = 56
          Width = 75
          Height = 25
          Cursor = crHandPoint
          Caption = 'S'#304'L'
          TabOrder = 1
          OnClick = Button13Click
        end
      end
      object GroupBox18: TGroupBox
        Left = 336
        Top = 24
        Width = 273
        Height = 105
        Caption = '        S'#304'STEME Y'#220'KLE'
        Font.Charset = DEFAULT_CHARSET
        Font.Color = clWindowText
        Font.Height = -12
        Font.Name = 'MS Sans Serif'
        Font.Style = [fsBold]
        ParentFont = False
        TabOrder = 4
        object ComboBox3: TComboBox
          Left = 40
          Top = 32
          Width = 145
          Height = 21
          Cursor = crHandPoint
          ItemHeight = 0
          TabOrder = 0
          Text = 'DEFTER SE'#199
          OnChange = ComboBox3Change
        end
        object RadioButton14: TRadioButton
          Left = 32
          Top = 64
          Width = 177
          Height = 17
          Cursor = crHandPoint
          Caption = 'A'#199'IK L'#304'STES'#304'NE Y'#220'KLE'
          TabOrder = 1
          OnClick = RadioButton14Click
        end
        object RadioButton15: TRadioButton
          Left = 32
          Top = 80
          Width = 177
          Height = 17
          Cursor = crHandPoint
          Caption = 'KAPALI L'#304'STES'#304'NE Y'#220'KLE'
          TabOrder = 2
          OnClick = RadioButton15Click
        end
      end
      object GroupBox23: TGroupBox
        Left = 680
        Top = 24
        Width = 201
        Height = 481
        Caption = 'S'#304'STEME Y'#220'KLENEN '#304'LAMLAR'
        TabOrder = 5
        object Label23: TLabel
          Left = 58
          Top = 24
          Width = 95
          Height = 26
          Caption = '     AYRI'#350'AN  RAKAM L'#304'STES'#304
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clWindowText
          Font.Height = -12
          Font.Name = 'MS Sans Serif'
          Font.Style = [fsBold]
          ParentFont = False
          WordWrap = True
        end
        object Label53: TLabel
          Left = 96
          Top = 456
          Width = 8
          Height = 13
          Caption = '0'
        end
        object Label58: TLabel
          Left = 136
          Top = 456
          Width = 34
          Height = 13
          Caption = 'ADET'
        end
        object ListBox8: TListBox
          Left = 48
          Top = 56
          Width = 121
          Height = 393
          ItemHeight = 13
          TabOrder = 0
        end
      end
    end
    object TabSheet7: TTabSheet
      Caption = 'B'#304'RLE'#350'T'#304'RME'
      ImageIndex = 5
      object GroupBox19: TGroupBox
        Left = 64
        Top = 392
        Width = 217
        Height = 105
        Caption = '     AKTARILACAK L'#304'STEY'#304' SE'#199'      '
        Font.Charset = DEFAULT_CHARSET
        Font.Color = clWindowText
        Font.Height = -12
        Font.Name = 'MS Sans Serif'
        Font.Style = [fsBold]
        ParentFont = False
        TabOrder = 0
        object RadioButton8: TRadioButton
          Left = 32
          Top = 32
          Width = 113
          Height = 17
          Cursor = crHandPoint
          Caption = 'A'#199'IK L'#304'STES'#304
          TabOrder = 0
          OnClick = RadioButton8Click
        end
        object RadioButton9: TRadioButton
          Left = 32
          Top = 64
          Width = 113
          Height = 17
          Cursor = crHandPoint
          Caption = 'KAPALI L'#304'STES'#304
          TabOrder = 1
          OnClick = RadioButton9Click
        end
      end
      object GroupBox20: TGroupBox
        Left = 336
        Top = 392
        Width = 113
        Height = 105
        Caption = 'kontrol'
        Font.Charset = DEFAULT_CHARSET
        Font.Color = clWindowText
        Font.Height = -12
        Font.Name = 'MS Sans Serif'
        Font.Style = [fsBold]
        ParentFont = False
        TabOrder = 1
        Visible = False
        object CheckBox1: TCheckBox
          Left = 24
          Top = 24
          Width = 97
          Height = 17
          Cursor = crHandPoint
          Caption = '1.kontrol'
          TabOrder = 0
          OnClick = CheckBox1Click
        end
        object CheckBox2: TCheckBox
          Left = 24
          Top = 48
          Width = 97
          Height = 17
          Cursor = crHandPoint
          Caption = '2.kontrol'
          TabOrder = 1
          OnClick = CheckBox2Click
        end
        object CheckBox3: TCheckBox
          Left = 24
          Top = 72
          Width = 97
          Height = 17
          Cursor = crHandPoint
          Caption = '3.kontrol'
          TabOrder = 2
          OnClick = CheckBox3Click
        end
      end
      object GroupBox21: TGroupBox
        Left = 72
        Top = 16
        Width = 793
        Height = 345
        Caption = 
          '                                                                ' +
          '              AKTARMA  '#304#350'LEMLER'#304'                                ' +
          '                                                      '
        Font.Charset = DEFAULT_CHARSET
        Font.Color = clWindowText
        Font.Height = -12
        Font.Name = 'MS Sans Serif'
        Font.Style = [fsBold]
        ParentFont = False
        TabOrder = 2
        object Label32: TLabel
          Left = 56
          Top = 312
          Width = 36
          Height = 13
          Caption = '11111'
        end
        object Label33: TLabel
          Left = 272
          Top = 312
          Width = 36
          Height = 13
          Caption = '11111'
        end
        object Label34: TLabel
          Left = 392
          Top = 312
          Width = 36
          Height = 13
          Caption = '11111'
        end
        object Label35: TLabel
          Left = 512
          Top = 312
          Width = 36
          Height = 13
          Caption = '11111'
        end
        object Label36: TLabel
          Left = 648
          Top = 312
          Width = 36
          Height = 13
          Caption = '11111'
        end
        object Label37: TLabel
          Left = 16
          Top = 24
          Width = 139
          Height = 13
          Caption = 'Y'#220'KLENECEK '#304'LAMLAR'
        end
        object Label38: TLabel
          Left = 200
          Top = 24
          Width = 166
          Height = 13
          Caption = 'AKTARILACAK NUMARALAR'
        end
        object Label39: TLabel
          Left = 368
          Top = 24
          Width = 105
          Height = 13
          Caption = 'KAYITLI '#304'LAMLAR'
        end
        object Label40: TLabel
          Left = 496
          Top = 24
          Width = 102
          Height = 13
          Caption = #304'LAM KONTROLU'
        end
        object Label41: TLabel
          Left = 624
          Top = 24
          Width = 98
          Height = 13
          Caption = 'KALAN '#304'LAMLAR'
        end
        object Label42: TLabel
          Left = 696
          Top = 312
          Width = 34
          Height = 13
          Caption = 'ADET'
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clWindowText
          Font.Height = -12
          Font.Name = 'MS Sans Serif'
          Font.Style = [fsBold]
          ParentFont = False
        end
        object Label43: TLabel
          Left = 560
          Top = 312
          Width = 34
          Height = 13
          Caption = 'ADET'
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clWindowText
          Font.Height = -12
          Font.Name = 'MS Sans Serif'
          Font.Style = [fsBold]
          ParentFont = False
        end
        object Label44: TLabel
          Left = 432
          Top = 312
          Width = 34
          Height = 13
          Caption = 'ADET'
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clWindowText
          Font.Height = -12
          Font.Name = 'MS Sans Serif'
          Font.Style = [fsBold]
          ParentFont = False
        end
        object Label45: TLabel
          Left = 312
          Top = 312
          Width = 34
          Height = 13
          Caption = 'ADET'
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clWindowText
          Font.Height = -12
          Font.Name = 'MS Sans Serif'
          Font.Style = [fsBold]
          ParentFont = False
        end
        object Label46: TLabel
          Left = 96
          Top = 312
          Width = 34
          Height = 13
          Caption = 'ADET'
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clWindowText
          Font.Height = -12
          Font.Name = 'MS Sans Serif'
          Font.Style = [fsBold]
          ParentFont = False
        end
        object ListBox2: TListBox
          Left = 16
          Top = 40
          Width = 121
          Height = 270
          ItemHeight = 13
          TabOrder = 0
        end
        object Button14: TButton
          Left = 144
          Top = 144
          Width = 75
          Height = 25
          Cursor = crHandPoint
          Caption = 'AKTAR>>'
          TabOrder = 1
          OnClick = Button14Click
        end
        object ListBox3: TListBox
          Left = 224
          Top = 40
          Width = 121
          Height = 270
          ItemHeight = 13
          TabOrder = 2
        end
        object ListBox4: TListBox
          Left = 352
          Top = 40
          Width = 121
          Height = 270
          ItemHeight = 13
          TabOrder = 3
        end
        object ListBox5: TListBox
          Left = 480
          Top = 40
          Width = 121
          Height = 270
          ItemHeight = 13
          TabOrder = 4
        end
        object ListBox6: TListBox
          Left = 608
          Top = 40
          Width = 121
          Height = 270
          ItemHeight = 13
          TabOrder = 5
        end
      end
    end
    object TabSheet8: TTabSheet
      Caption = 'HATA KONTROLU'
      ImageIndex = 6
      object Label59: TLabel
        Left = 936
        Top = 368
        Width = 46
        Height = 13
        Caption = 'Label59'
      end
      object Label60: TLabel
        Left = 1024
        Top = 384
        Width = 46
        Height = 13
        Caption = 'Label60'
      end
      object Memo4: TMemo
        Left = 104
        Top = 48
        Width = 713
        Height = 369
        TabOrder = 0
      end
      object Button15: TButton
        Left = 616
        Top = 432
        Width = 115
        Height = 25
        Cursor = crHandPoint
        Caption = 'HATALARI BUL'
        TabOrder = 1
        OnClick = Button15Click
      end
      object Button16: TButton
        Left = 744
        Top = 432
        Width = 75
        Height = 25
        Cursor = crHandPoint
        Caption = 'YAZDIR'
        TabOrder = 2
        OnClick = Button16Click
      end
      object Button20: TButton
        Left = 0
        Top = 432
        Width = 209
        Height = 25
        Caption = 'B'#304'RDEN FAZLA KAYIT VARMI'
        TabOrder = 3
        Visible = False
        OnClick = Button20Click
      end
      object Button21: TButton
        Left = 0
        Top = 472
        Width = 209
        Height = 25
        Caption = 'D'#304#286'ER L'#304'STEDEDE VARMI'
        TabOrder = 4
        Visible = False
        OnClick = Button21Click
      end
      object Button22: TButton
        Left = 0
        Top = 512
        Width = 249
        Height = 25
        Caption = 'OLMASI GEREKEN '#304'LAMAT NUMARASI'
        TabOrder = 5
        Visible = False
        OnClick = Button22Click
      end
      object Button18: TButton
        Left = 216
        Top = 432
        Width = 281
        Height = 25
        Caption = 'L'#304'STEDE OLMAMASI GEREKEN '#304'LAMLAR'
        TabOrder = 6
        Visible = False
        OnClick = Button18Click
      end
      object Button30: TButton
        Left = 928
        Top = 408
        Width = 75
        Height = 25
        Caption = 'Button30'
        TabOrder = 7
        OnClick = Button30Click
      end
      object fazlakayitsil: TListBox
        Left = 896
        Top = 264
        Width = 121
        Height = 97
        ItemHeight = 13
        TabOrder = 8
      end
    end
    object TabSheet9: TTabSheet
      Caption = 'D'#304'PNOTLAR'
      ImageIndex = 7
      object Button19: TButton
        Left = 624
        Top = 440
        Width = 179
        Height = 25
        Cursor = crHandPoint
        Caption = 'L'#304'STEDEN '#199'IKAR'
        Font.Charset = DEFAULT_CHARSET
        Font.Color = clWindowText
        Font.Height = -11
        Font.Name = 'MS Sans Serif'
        Font.Style = [fsBold]
        ParentFont = False
        TabOrder = 0
        OnClick = Button19Click
      end
      object ListBox7: TListBox
        Left = 104
        Top = 104
        Width = 697
        Height = 321
        Cursor = crSizeNS
        ItemHeight = 13
        TabOrder = 1
      end
      object GroupBox22: TGroupBox
        Left = 400
        Top = 8
        Width = 401
        Height = 89
        Caption = 
          '                                                    KAYIT G'#304'R'#304'N'#304 +
          'Z                                                            '
        Font.Charset = DEFAULT_CHARSET
        Font.Color = clWindowText
        Font.Height = -11
        Font.Name = 'MS Sans Serif'
        Font.Style = [fsBold]
        ParentFont = False
        TabOrder = 2
        object Edit8: TEdit
          Left = 48
          Top = 32
          Width = 345
          Height = 21
          Cursor = crHandPoint
          TabOrder = 0
        end
        object Button17: TButton
          Left = 270
          Top = 64
          Width = 123
          Height = 25
          Cursor = crHandPoint
          Caption = 'L'#304'STEYE EKLE'
          TabOrder = 1
          OnClick = Button17Click
        end
      end
    end
    object TabSheet10: TTabSheet
      Caption = 'L'#304'STE KAR'#350'ILA'#350'TIRMA'
      ImageIndex = 8
      object GroupBox24: TGroupBox
        Left = 8
        Top = 16
        Width = 393
        Height = 505
        TabOrder = 0
        object Label54: TLabel
          Left = 80
          Top = 456
          Width = 8
          Height = 13
          Caption = '0'
        end
        object Label55: TLabel
          Left = 136
          Top = 456
          Width = 34
          Height = 13
          Caption = 'ADET'
        end
        object Label56: TLabel
          Left = 296
          Top = 456
          Width = 8
          Height = 13
          Caption = '0'
        end
        object Label57: TLabel
          Left = 336
          Top = 456
          Width = 34
          Height = 13
          Caption = 'ADET'
        end
        object defterkarsilastir: TListBox
          Left = 32
          Top = 136
          Width = 145
          Height = 313
          ItemHeight = 13
          TabOrder = 0
        end
        object uyapkarsilastir: TListBox
          Left = 240
          Top = 136
          Width = 129
          Height = 313
          ItemHeight = 13
          TabOrder = 1
        end
        object Button23: TButton
          Left = 248
          Top = 480
          Width = 121
          Height = 25
          Cursor = crHandPoint
          Caption = 'KAR'#350'ILA'#350'TIR'
          TabOrder = 2
          OnClick = Button23Click
        end
        object GroupBox26: TGroupBox
          Left = 8
          Top = 48
          Width = 185
          Height = 81
          Caption = 'KAR'#350'ILA'#350'TIRILACAK DEFTER'
          TabOrder = 3
          object ComboBox4: TComboBox
            Left = 16
            Top = 24
            Width = 161
            Height = 21
            Cursor = crHandPoint
            ItemHeight = 0
            TabOrder = 0
            Text = 'DEFTER YILI'
            OnChange = ComboBox4Change
          end
          object ComboBox8: TComboBox
            Left = 16
            Top = 56
            Width = 161
            Height = 21
            ItemHeight = 13
            TabOrder = 1
            Text = 'L'#304'STE T'#220'R'#220
            Visible = False
            OnChange = ComboBox8Change
            Items.Strings = (
              'A'#199'IK L'#304'STES'#304
              'KAPALI L'#304'STES'#304
              #304#350'LEM YAPILACAK'
              'HATALI L'#304'STES'#304)
          end
        end
        object GroupBox27: TGroupBox
          Left = 224
          Top = 56
          Width = 161
          Height = 65
          Caption = '    UYAP DEFTER'#304
          TabOrder = 4
          object ComboBox7: TComboBox
            Left = 24
            Top = 20
            Width = 129
            Height = 21
            Cursor = crHandPoint
            ItemHeight = 0
            TabOrder = 0
            Text = 'DEFTER SE'#199
            OnChange = ComboBox7Change
          end
        end
        object Button29: TButton
          Left = 0
          Top = 480
          Width = 233
          Height = 25
          Caption = 'B'#304'RDEN FAZLA KAYIT VARSA S'#304'L'
          TabOrder = 5
        end
      end
      object Memo1: TMemo
        Left = 408
        Top = 48
        Width = 553
        Height = 465
        Cursor = crSizeNS
        TabOrder = 1
      end
      object Button24: TButton
        Left = 408
        Top = 512
        Width = 227
        Height = 25
        Caption = 'birden fazla kay'#305't varm'#305
        TabOrder = 2
        Visible = False
        OnClick = Button24Click
      end
      object Button25: TButton
        Left = 888
        Top = 512
        Width = 75
        Height = 25
        Caption = 'YAZDIR'
        TabOrder = 3
        OnClick = Button25Click
      end
    end
    object TabSheet11: TTabSheet
      Caption = 'DETAYLAR'
      ImageIndex = 9
      object GroupBox32: TGroupBox
        Left = -8
        Top = 8
        Width = 553
        Height = 249
        Caption = 'DEFTERDE Y'#220'KL'#220' '#304'LAMLARIN TOPLAM '#304'LAMAT SAYISI'
        TabOrder = 0
        object Label62: TLabel
          Left = 368
          Top = 32
          Width = 44
          Height = 13
          Caption = 'YILLAR'
          Visible = False
        end
        object Label61: TLabel
          Left = 488
          Top = 32
          Width = 34
          Height = 13
          Caption = 'ADET'
          Visible = False
        end
        object Label63: TLabel
          Left = 392
          Top = 192
          Width = 8
          Height = 13
          Caption = '0'
          Visible = False
        end
        object Label64: TLabel
          Left = 496
          Top = 192
          Width = 8
          Height = 13
          Caption = '0'
          Visible = False
        end
        object Label65: TLabel
          Left = 32
          Top = 152
          Width = 107
          Height = 13
          Caption = 'ba'#287'c'#305'lar ilam say'#305's'#305
        end
        object Label66: TLabel
          Left = 32
          Top = 168
          Width = 127
          Height = 13
          Caption = 'zeytinburnu ilam say'#305's'#305
        end
        object ListBox9: TListBox
          Left = 360
          Top = 48
          Width = 65
          Height = 137
          ItemHeight = 13
          TabOrder = 0
          Visible = False
        end
        object ListBox10: TListBox
          Left = 472
          Top = 48
          Width = 57
          Height = 137
          ItemHeight = 13
          TabOrder = 1
          Visible = False
        end
        object ListBox11: TListBox
          Left = 432
          Top = 48
          Width = 33
          Height = 137
          ItemHeight = 13
          TabOrder = 2
          Visible = False
        end
        object Button32: TButton
          Left = 256
          Top = 184
          Width = 75
          Height = 25
          Caption = 'KONTROL'
          TabOrder = 3
          OnClick = Button32Click
        end
        object ListBox12: TListBox
          Left = 16
          Top = 40
          Width = 305
          Height = 97
          ItemHeight = 13
          TabOrder = 4
        end
        object Edit10: TEdit
          Left = 184
          Top = 144
          Width = 49
          Height = 21
          TabOrder = 5
          Text = '0'
        end
        object Edit11: TEdit
          Left = 184
          Top = 168
          Width = 49
          Height = 21
          TabOrder = 6
          Text = '0'
        end
        object Button33: TButton
          Left = 184
          Top = 184
          Width = 51
          Height = 25
          Caption = 'kaydet'
          TabOrder = 7
          OnClick = Button33Click
        end
      end
    end
  end
end
