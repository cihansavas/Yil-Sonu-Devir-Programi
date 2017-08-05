//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop
#include "devir.h"
#include "rakamlarisiralama.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
Trakamlarisirala *rakamlarisirala;
//---------------------------------------------------------------------------
__fastcall Trakamlarisirala::Trakamlarisirala(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------

void __fastcall Trakamlarisirala::Button1Click(TObject *Sender)
{

DynamicArray<int>dizi;//dizi tan�m�
int i,j,adet,deger; //de�i�ken ran�m�
adet=ListBox1->Count;//dizinin eleman say�s�
dizi.Length=adet;//dizi boyutland�rma
for(i=0;i<=adet-1;i++)
dizi[i]=StrToInt(ListBox1->Items->Strings[i]);//random say�lar diziye aktar�l�yor
for(i=0;i<=adet-2;i++)
{
ilamatkontrol->Caption=adet-i;
for(j=i+1;j<=adet-1;j++)
{
if(dizi[i]>dizi[j])//dizi i�inde yer de�i�tirme i�lemleri ger�ekle�iyor
{
deger=dizi[j];
dizi[j]=dizi[i];
dizi[i]=deger;
}
Application->ProcessMessages();
}
Application->ProcessMessages();
}
ListBox1->Items->Clear();
for(i=0;i<=adet-1;i++) //dizi  listeye yaz�l�yor
{
ilamatkontrol->Caption=adet-i;

ListBox1->Items->Add(dizi[i]);
Application->ProcessMessages();
}

}
//---------------------------------------------------------------------------

void __fastcall Trakamlarisirala::Button2Click(TObject *Sender)
{
int sira=-1,i,ekle; //de�i�ken ran�m�
ekle=StrToInt(Edit1->Text);
for(i=0;i<=ListBox1->Count-1;i++)
{
if(StrToInt(ListBox1->Items->Strings[i])>ekle)
{
sira=i;
i=30000;
}
}
if(sira==-1)
{
ListBox1->Items->Insert(ListBox1->Count,ekle);
}
if(sira!=-1)
{
ListBox1->Items->Insert(sira,ekle);
}
}
//---------------------------------------------------------------------------
