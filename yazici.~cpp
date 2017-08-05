//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop
#include "yazici.h"
#include "Printers.hpp"
#include "devir.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
Tyazicii *yazicii;
//---------------------------------------------------------------------------
__fastcall Tyazicii::Tyazicii(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------

void __fastcall Tyazicii::Button1Click(TObject *Sender)
{
if(PrinterSetupDialog1->Execute())
;        
}
//---------------------------------------------------------------------------

void __fastcall Tyazicii::Button2Click(TObject *Sender)
{

if(PrintDialog1->Execute())
{
  int tur=0;
  TPrinter *Prntr = Printer();
  int toplamsatir=ilamatkontrol->yazialani->Lines->Count;
  while(toplamsatir>0)
  {
  Prntr->BeginDoc();
  for( int i = 0; i < 87; i++)
  {
  Prntr->Canvas->TextOut(300,300 + (i *Prntr->Canvas->TextHeight(ilamatkontrol->yazialani->Lines->Strings[i+(87*tur)])),ilamatkontrol->yazialani->Lines->Strings[i+(87*tur)]);
  }
  Prntr->EndDoc();
  toplamsatir-=86;
  tur++;
  }
}
}
//---------------------------------------------------------------------------
void __fastcall Tyazicii::FormCreate(TObject *Sender)
{
PrintDialog1->FromPage=1;
PrintDialog1->MinPage=1;
PrintDialog1->MaxPage=2500;
PrintDialog1->ToPage=PrintDialog1->MaxPage;
}
//---------------------------------------------------------------------------
