object Form1: TForm1
  Left = 0
  Top = 0
  Caption = 'Form1'
  ClientHeight = 300
  ClientWidth = 635
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'Tahoma'
  Font.Style = []
  OldCreateOrder = False
  PixelsPerInch = 96
  TextHeight = 13
  object Label1: TLabel
    Left = 46
    Top = 95
    Width = 155
    Height = 13
    Caption = 'R'#233'cup'#233'rer les infos des comptes'
  end
  object Label2: TLabel
    Left = 256
    Top = 95
    Width = 140
    Height = 13
    Caption = 'R'#233'cup'#233'rer Position et vitesse'
  end
  object Label3: TLabel
    Left = 464
    Top = 95
    Width = 127
    Height = 13
    Caption = 'Envoie une trame '#224' la BDD'
  end
  object Button1: TButton
    Left = 72
    Top = 242
    Width = 75
    Height = 25
    Caption = 'Button1'
    TabOrder = 0
    OnClick = Button1Click
  end
  object Memo1: TMemo
    Left = 32
    Top = 128
    Width = 169
    Height = 89
    Lines.Strings = (
      'Memo1')
    TabOrder = 1
  end
  object Memo2: TMemo
    Left = 232
    Top = 128
    Width = 177
    Height = 89
    Lines.Strings = (
      'Memo2')
    TabOrder = 2
  end
  object Button2: TButton
    Left = 272
    Top = 242
    Width = 81
    Height = 25
    Caption = 'Button2'
    TabOrder = 3
    OnClick = Button2Click
  end
  object Button3: TButton
    Left = 486
    Top = 242
    Width = 89
    Height = 25
    Caption = 'Button3'
    TabOrder = 4
    OnClick = Button3Click
  end
  object Memo3: TMemo
    Left = 440
    Top = 128
    Width = 161
    Height = 89
    Lines.Strings = (
      'Memo3')
    TabOrder = 5
  end
end
