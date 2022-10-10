object Form1: TForm1
  Left = 249
  Top = 202
  Width = 1305
  Height = 675
  Caption = 'Form1'
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'MS Sans Serif'
  Font.Style = []
  Menu = MainMenu1
  OldCreateOrder = False
  PixelsPerInch = 96
  TextHeight = 13
  object tresc: TMemo
    Left = 0
    Top = 0
    Width = 1289
    Height = 616
    Align = alClient
    Font.Charset = OEM_CHARSET
    Font.Color = clWindowText
    Font.Height = -19
    Font.Name = 'Terminal'
    Font.Style = [fsBold]
    Lines.Strings = (
      '')
    ParentFont = False
    TabOrder = 0
  end
  object MainMenu1: TMainMenu
    Left = 1256
    Top = 16
    object Plik1: TMenuItem
      Caption = '&Plik'
      object Nowy1: TMenuItem
        Caption = '&Nowy      Ctrl+N'
        OnClick = Nowy1Click
      end
      object OtwrzCtrlO1: TMenuItem
        Caption = '&Otw'#243'rz    Ctrl+O'
        OnClick = OtwrzCtrlO1Click
      end
      object ZapiszCtrlS1: TMenuItem
        Caption = '&Zapisz      Ctrl+S'
        OnClick = ZapiszCtrlS1Click
      end
      object Zapiszjako1: TMenuItem
        Caption = 'Z&apisz jako'
        OnClick = Zapiszjako1Click
      end
      object N1: TMenuItem
        Caption = '-'
      end
      object Zakocz1: TMenuItem
        Caption = 'Za&ko'#324'cz'
      end
    end
    object Edycja1: TMenuItem
      Caption = '&Edycja'
      object CofnijCtrZ1: TMenuItem
        Caption = '&Cofnij     Ctr+Z'
      end
      object N2: TMenuItem
        Caption = '-'
      end
      object WytnijCtrlX1: TMenuItem
        Caption = '&Wytnij     Ctrl+X'
      end
      object KopiujCtrlC1: TMenuItem
        Caption = '&Kopiuj     Ctrl+C'
      end
      object WklejCtrlV1: TMenuItem
        Caption = 'Wk&lej       Ctrl+V'
      end
      object UsuDEL1: TMenuItem
        Caption = '&Usu'#324'        DEL'
      end
      object N3: TMenuItem
        Caption = '-'
      end
      object ZnajdCtrlF1: TMenuItem
        Caption = 'Z&najd'#378'      Ctrl+F'
        OnClick = ZnajdCtrlF1Click
      end
      object ZaznaczwszystkoCtrlA1: TMenuItem
        Caption = 'Zaznacz wszystko    Ctrl+A'
      end
    end
    object Format1: TMenuItem
      Caption = '&Format'
      object Czcionka1: TMenuItem
        Caption = 'Czcionka'
        OnClick = Czcionka1Click
      end
    end
    object Widok1: TMenuItem
      Caption = '&Widok'
    end
    object Pomoc1: TMenuItem
      Caption = 'P&omoc'
      object Wy1: TMenuItem
        Caption = 'W&y'#347'wietl Pomoc'
        object OProgramie1: TMenuItem
          Caption = 'O Pr&ogramie'
        end
      end
    end
  end
  object OpenDialog1: TOpenDialog
    Filter = 'Plikit tekstowe (.txt)|*.txt|Wszystkie pliki|*.*'
    Left = 1224
    Top = 16
  end
  object SaveDialog1: TSaveDialog
    DefaultExt = 'txt'
    Filter = 'Dokument tekstowy|*.txt'
    Options = [ofOverwritePrompt, ofHideReadOnly, ofEnableSizing]
    Left = 1192
    Top = 16
  end
  object FindDialog1: TFindDialog
    Left = 1160
    Top = 16
  end
  object FontDialog1: TFontDialog
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -11
    Font.Name = 'MS Sans Serif'
    Font.Style = []
    MinFontSize = 0
    MaxFontSize = 0
    Left = 1128
    Top = 16
  end
end
