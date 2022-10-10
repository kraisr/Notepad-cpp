//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit1.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;

AnsiString nazwapliku="";

//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------


void __fastcall TForm1::OtwrzCtrlO1Click(TObject *Sender)
{
        if (OpenDialog1->Execute())
        {
           try
           {
                tresc->Lines->LoadFromFile(OpenDialog1->FileName);
                nazwapliku=OpenDialog1->FileName;
           }
           catch (...)
           {
                ShowMessage("B³¹d otwarcia pliku. Upewnij sie ze plik istnieje na dysku");
           }
        }
}
//---------------------------------------------------------------------------
void __fastcall TForm1::ZnajdCtrlF1Click(TObject *Sender)
{
        if(FindDialog1->Execute())
        {
        }
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Czcionka1Click(TObject *Sender)
{
        if(FontDialog1->Execute())
        {
           
        }
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Zapiszjako1Click(TObject *Sender)
{
        if(SaveDialog1->Execute())
        {
           try
           {
                tresc->Lines->SaveToFile(SaveDialog1->FileName);
                nazwapliku=SaveDialog1->FileName;
           }
           catch(...)
           {
                ShowMessage("Nie uda³o siê zapisaæ pliku");
           }
        }
}
//---------------------------------------------------------------------------
void __fastcall TForm1::ZapiszCtrlS1Click(TObject *Sender)
{
        if(nazwapliku!="")
        {
           tresc->Lines->SaveToFile(nazwapliku);
        }
        else
        {
           Form1->Zapiszjako1Click(MainMenu1);
        }
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Nowy1Click(TObject *Sender)
{
        if(Application->MessageBox("Czy na pewno utworzyæ nowy plik?","PotwierdŸ",
        MB_YESNOCANCEL | MB_ICONQUESTION)==IDYES)
        {
           tresc->Lines->Clear();
           nazwapliku="";
        }
}
//---------------------------------------------------------------------------
