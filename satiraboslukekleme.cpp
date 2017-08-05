//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "rakambulma.h"
#include "satiraboslukekleme.h"
#include "prantez.h"
#include "devir.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
Tsatirabaslukekleme *satirabaslukekleme;
//---------------------------------------------------------------------------
__fastcall Tsatirabaslukekleme::Tsatirabaslukekleme(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------

void __fastcall Tsatirabaslukekleme::Button1Click(TObject *Sender)
{
ListBox1->Items->Clear();
ListBox1->Items->LoadFromFile("sonuc.txt");
}
//---------------------------------------------------------------------------

void __fastcall Tsatirabaslukekleme::Button2Click(TObject *Sender)
{
int i,j;

j=ListBox1->Count;
//Form1->ProgressBar1->Position=0;
//Form1->ProgressBar1->Max=satirabaslukekleme->ListBox1->Count;

for(i=0;i<=ListBox1->Count-1;i++)
{
ilamatkontrol->Caption=ListBox1->Count-i;

ListBox1->Items->Strings[i]=" "+ListBox1->Items->Strings[i]+" ";
ilamatkontrol->Caption=j;
j=j-1;
satirabaslukekleme->Caption=ListBox1->Count-i;
Application->ProcessMessages();
}
ListBox1->Items->Add(" ");
ListBox1->Items->SaveToFile("sonuc.txt");
satirabaslukekleme->Close();
}
//---------------------------------------------------------------------------

void __fastcall Tsatirabaslukekleme::Button4Click(TObject *Sender)
{
Button1Click(Sender);
Button2Click(Sender);
}
//---------------------------------------------------------------------------

