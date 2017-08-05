//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop
#include "yazici.h"
#include "devir.h"
#include "rakambulma.h"
#include "satiraboslukekleme.h"
#include "prantez.h"
#include "rakamlarisiralama.h"
#include "tiredenayirma.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
Ttiredenayir *tiredenayir;
//---------------------------------------------------------------------------
__fastcall Ttiredenayir::Ttiredenayir(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------

void __fastcall Ttiredenayir::Button1Click(TObject *Sender)
{
ListBox1->Items->Clear();
ListBox2->Items->Clear();
ListBox1->Items->LoadFromFile("sonuc.txt");
int i,boyut;
String a;
for(i=0;i<=ListBox1->Count-1;i++)
{
ilamatkontrol->Caption=ListBox1->Count-i;

boyut=ListBox1->Items->Strings[i].Length();
if(ListBox1->Items->Strings[i].SubString(5,1)=="/")
{
if(ListBox1->Items->Strings[i].SubString(7,1)=="-")
{
ListBox2->Items->Add(ListBox1->Items->Strings[i].SubString(8,boyut-7));
}
Application->ProcessMessages();
}
else
ListBox2->Items->Add(ListBox1->Items->Strings[i]);
}
ListBox2->Items->SaveToFile("sonuc.txt");

}
//---------------------------------------------------------------------------
