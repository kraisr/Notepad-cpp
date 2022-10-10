//---------------------------------------------------------------------------

#ifndef Unit1H
#define Unit1H
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <Menus.hpp>
#include <Dialogs.hpp>
//---------------------------------------------------------------------------
class TForm1 : public TForm
{
__published:	// IDE-managed Components
        TMainMenu *MainMenu1;
        TMenuItem *Plik1;
        TMenuItem *Edycja1;
        TMenuItem *Format1;
        TMenuItem *Widok1;
        TMenuItem *Pomoc1;
        TMenuItem *Nowy1;
        TMenuItem *OtwrzCtrlO1;
        TMenuItem *ZapiszCtrlS1;
        TMenuItem *Zapiszjako1;
        TMenuItem *N1;
        TMenuItem *Zakocz1;
        TMenuItem *CofnijCtrZ1;
        TMenuItem *N2;
        TMenuItem *WytnijCtrlX1;
        TMenuItem *KopiujCtrlC1;
        TMenuItem *WklejCtrlV1;
        TMenuItem *UsuDEL1;
        TMenuItem *N3;
        TMenuItem *ZnajdCtrlF1;
        TMenuItem *ZaznaczwszystkoCtrlA1;
        TMenuItem *Wy1;
        TMenuItem *OProgramie1;
        TMemo *tresc;
        TOpenDialog *OpenDialog1;
        TSaveDialog *SaveDialog1;
        TFindDialog *FindDialog1;
        TMenuItem *Czcionka1;
        TFontDialog *FontDialog1;
        void __fastcall OtwrzCtrlO1Click(TObject *Sender);
        void __fastcall ZnajdCtrlF1Click(TObject *Sender);
        void __fastcall Czcionka1Click(TObject *Sender);
        void __fastcall Zapiszjako1Click(TObject *Sender);
        void __fastcall ZapiszCtrlS1Click(TObject *Sender);
        void __fastcall Nowy1Click(TObject *Sender);
private:	// User declarations
public:		// User declarations
        __fastcall TForm1(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm1 *Form1;
//---------------------------------------------------------------------------
#endif
