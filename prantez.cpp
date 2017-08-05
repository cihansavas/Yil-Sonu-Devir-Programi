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
Tparantezdenayirma *parantezdenayirma;
//---------------------------------------------------------------------------
__fastcall Tparantezdenayirma::Tparantezdenayirma(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------

void __fastcall Tparantezdenayirma::Button1Click(TObject *Sender)
{
ListBox1->Items->Clear();
ListBox2->Items->Clear();
ListBox1->Items->LoadFromFile("sonuc.txt");
}
//---------------------------------------------------------------------------

void __fastcall Tparantezdenayirma::Button2Click(TObject *Sender)
{
int i;
String a;
for(i=0;i<=ListBox1->Count-1;i++)
{
ilamatkontrol->Caption=ListBox1->Count-i;

if(ListBox1->Items->Strings[i].SubString(1,1)=="(")
{
ListBox1->Items->Strings[i]="sil";
}
else
{
ListBox2->Items->Add(ListBox1->Items->Strings[i]);
}
Application->ProcessMessages();
}
ilamatkontrol->Caption=ListBox2->Count;

}
//---------------------------------------------------------------------------

void __fastcall Tparantezdenayirma::Button3Click(TObject *Sender)
{
ListBox2->Items->SaveToFile("sonuc.txt");
}
//---------------------------------------------------------------------------
void __fastcall Tparantezdenayirma::Button4Click(TObject *Sender)
{
Memo1->Lines->Clear();
Memo1->Lines->LoadFromFile("yukle.txt");
Memo1->Lines->SaveToFile("sonuc.txt");
satirabaslukekleme->Button4Click(Sender);
Memo1->Lines->Clear();
Memo1->Lines->LoadFromFile("sonuc.txt");
Button5Click(Sender);
Button1Click(Sender);
Button2Click(Sender);
Button3Click(Sender);



}
//---------------------------------------------------------------------------



void __fastcall Tparantezdenayirma::Button5Click(TObject *Sender)
{
ListBox1->Items->Clear();
ListBox2->Items->Clear();
int j,i,metinboyu;
String metin,sayi="";
metin=Memo1->Text;
metinboyu=metin.Length();

for(i=1;i<=metinboyu;i++)
{
if(metin.SubString(i,1)!=" ")
{
if(metin.SubString(i,1)=="("||metin.SubString(i,1)==")"||metin.SubString(i,1)==0||metin.SubString(i,1)==1||metin.SubString(i,1)==2||metin.SubString(i,1)==3||metin.SubString(i,1)==4||metin.SubString(i,1)==5||metin.SubString(i,1)==6||metin.SubString(i,1)==7||metin.SubString(i,1)==8||metin.SubString(i,1)==9||metin.SubString(i,1)=="/"||metin.SubString(i,1)=="-")
{
sayi=sayi+metin.SubString(i,1);
}
}
if(metin.SubString(i,1)==" ")
{
if(sayi!="")
{
ListBox2->Items->Add(sayi);
sayi="";
}
}
Application->ProcessMessages();
}
ListBox2->Items->SaveToFile("sonuc.txt");
}
//---------------------------------------------------------------------------

