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
Trakambulma *rakambulma;
//---------------------------------------------------------------------------
__fastcall Trakambulma::Trakambulma(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------

void __fastcall Trakambulma::Button1Click(TObject *Sender)
{
ListBox1->Items->Clear();
ListBox2->Items->Clear();

Memo1->Lines->Clear();
Memo1->Lines->LoadFromFile("sonuc.txt");
Button2Click(Sender);

}
//---------------------------------------------------------------------------
void __fastcall Trakambulma::Button2Click(TObject *Sender)
{

ListBox1->Items->Clear();
int j,i,metinboyu;
String metin,sayi="";
metin=Memo1->Text;
metinboyu=metin.Length();
//Form1->ProgressBar1->Position=0;
//Form1->ProgressBar1->Max=metinboyu;
ProgressBar3->Position=ProgressBar3->Position+1;

for(i=1;i<=metinboyu;i++)
{
ilamatkontrol->Caption=metinboyu-i;

if(metin.SubString(i,1)!=" ")
{
if(metin.SubString(i,1)==0||metin.SubString(i,1)==1||metin.SubString(i,1)==2||metin.SubString(i,1)==3||metin.SubString(i,1)==4||metin.SubString(i,1)==5||metin.SubString(i,1)==6||metin.SubString(i,1)==7||metin.SubString(i,1)==8||metin.SubString(i,1)==9)
{
sayi=sayi+metin.SubString(i,1);
}
}
if(metin.SubString(i,1)==" ")
{
if(sayi!="")
{
ListBox1->Items->Add(sayi);
sayi="";
}
}
Application->ProcessMessages();
}
Label11->Caption=IntToStr(ListBox1->Count)+" ADET";
Button3Click(Sender);

}
//---------------------------------------------------------------------------
void __fastcall Trakambulma::Button3Click(TObject *Sender)
{
/*
float adet;
int a=0,b=0,c=0,i,j;
ProgressBar3->Max=ListBox1->Count;
adet=StrToInt(ListBox2->Count)*StrToInt(ListBox2->Count);
for(j=0;j<=ListBox2->Count-1;j++)
{
ProgressBar3->Position=1;
for(i=0;i<ListBox2->Count-1;i++)
{
adet=adet-1;
Form1->Caption=adet;
a=StrToInt(ListBox2->Items->Strings[i]);
b=StrToInt(ListBox2->Items->Strings[i+1]);
if(a>b)
{
c=b;
b=a;
a=c;
ListBox2->Items->Strings[i]=a;
ListBox2->Items->Strings[i+1]=b;
}
}
}
Form1->Caption="SIRALAMA TAMAMLANDI";
*/
}
//---------------------------------------------------------------------------
void __fastcall Trakambulma::RadioButton1Click(TObject *Sender)
{
ListBox1->Items->SaveToFile("sonuc.txt");
ListBox2->Items->LoadFromFile("sonuc.txt");


RadioButton2->Checked=false;
Label12->Caption=IntToStr(ListBox2->Count)+" ADET";
}
//---------------------------------------------------------------------------
void __fastcall Trakambulma::Button5Click(TObject *Sender)
{
ListBox2->Items->Clear();
int i,sayi,bas,bit;
bas=StrToInt(Edit1->Text);
bit=StrToInt(Edit2->Text);
//Form1->ProgressBar1->Position=0;
//Form1->ProgressBar1->Max=ListBox1->Count;
for(i=0;i<=ListBox1->Count-1;i++)
{
//Form1->ProgressBar1->Position=ProgressBar1->Position+1;
sayi=StrToInt(ListBox1->Items->Strings[i]);
if(sayi>=bas&sayi<=bit)
{
ListBox2->Items->Add(sayi);
}
}
RadioButton1->Checked=false;
RadioButton2->Checked=false;
Edit1->Visible=false;
Edit2->Visible=false;
Label1->Visible=false;
Label2->Visible=false;
Button5->Visible=false;
Label12->Caption=IntToStr(ListBox2->Count)+" ADET";
}
//---------------------------------------------------------------------------
void __fastcall Trakambulma::Button6Click(TObject *Sender)
{
ListBox3->Items->Clear();
ListBox3->Items->LoadFromFile("aktarma/islemli.txt");
Label7->Caption=IntToStr(ListBox3->Count)+" ADET";
}
//---------------------------------------------------------------------------
void __fastcall Trakambulma::Button7Click(TObject *Sender)
{
ListBox4->Items->Clear();
ListBox4->Items->LoadFromFile("aktarma/islemsiz.txt");
Label8->Caption=IntToStr(ListBox4->Count)+" ADET";
}
//---------------------------------------------------------------------------
void __fastcall Trakambulma::Button9Click(TObject *Sender)
{
int i,j,k;
String a,b;

for(i=0;i<=ListBox2->Count-1;i++)
{
a=ListBox2->Items->Strings[i];
for(j=0;j<=ListBox3->Count-1;j++)
{
b=ListBox3->Items->Strings[j];
if(a==b)
{
ListBox2->Items->Strings[i]="VAR";
j=ListBox3->Count+1;
}
Application->ProcessMessages();
}
Application->ProcessMessages();
}


for(i=0;i<=ListBox2->Count-1;i++)
{
rakambulma->ProgressBar1->Position=ProgressBar1->Position+1;
a=ListBox2->Items->Strings[i];
for(j=0;j<=ListBox4->Count-1;j++)
{
b=ListBox4->Items->Strings[j];
if(a==b)
{
ListBox4->Items->Delete(j);
j=ListBox4->Count+1;
}
Application->ProcessMessages();
}
Application->ProcessMessages();
}



rakambulma->ProgressBar2->Position=1;
for(i=0;i<=ListBox2->Count-1;i++)
{
rakambulma->ProgressBar2->Position=ProgressBar2->Position+1;
if(ListBox2->Items->Strings[i]!="VAR")
{
ListBox5->Items->Add(ListBox2->Items->Strings[i]);
}
Application->ProcessMessages();
}

Label13->Caption=IntToStr(ListBox5->Count)+" ADET";

}
//---------------------------------------------------------------------------

void __fastcall Trakambulma::Button8Click(TObject *Sender)
{

int i;
//Form1->ProgressBar1->Position=0;
//Form1->ProgressBar1->Max=ListBox5->Count;
for(i=0;i<=ListBox5->Count-1;i++)
{
//Form1->ProgressBar1->Position=ProgressBar1->Position+1;
ListBox3->Items->Add(ListBox5->Items->Strings[i]);
ListBox5->Items->Strings[i]=ListBox5->Items->Strings[i]+"->aktar�ld�";
}

}
//---------------------------------------------------------------------------

void __fastcall Trakambulma::Button10Click(TObject *Sender)
{


ListBox3->Items->SaveToFile("aktarma/islemli.txt");
ListBox4->Items->SaveToFile("aktarma/islemsiz.txt");

}
//---------------------------------------------------------------------------


void __fastcall Trakambulma::RadioButton2Click(TObject *Sender)
{
Button5->Visible=true;
Edit1->Visible=true;
Edit2->Visible=true;
Label1->Visible=true;
Label2->Visible=true;
RadioButton1->Checked=false;
Label12->Caption=IntToStr(ListBox2->Count)+" ADET";

}
//---------------------------------------------------------------------------

void __fastcall Trakambulma::Button12Click(TObject *Sender)
{

int adet,a=0,b=0,c=0,i,j;
//Form1->ProgressBar1->Position=0;
//Form1->ProgressBar1->Max=ListBox3->Count;
for(j=0;j<=ListBox3->Count-1;j++)
{
//Form1->ProgressBar1->Position=ProgressBar1->Position+1;
//ProgressBar1->Position=1;
for(i=0;i<ListBox3->Count-1;i++)
{
//ProgressBar1->Position=ProgressBar1->Position+1;
a=StrToInt(ListBox3->Items->Strings[i]);
b=StrToInt(ListBox3->Items->Strings[i+1]);
if(a>b)
{
c=b;
b=a;
a=c;
ListBox3->Items->Strings[i]=a;
ListBox3->Items->Strings[i+1]=b;
}
}
}
}
//---------------------------------------------------------------------------




void __fastcall Trakambulma::RadioButton3Click(TObject *Sender)
{
ListBox6->Items->LoadFromFile("aktarma/islemli.txt");
ListBox6->Items->SaveToFile("aktarma/yedek-islemli.txt");
ListBox6->Items->Clear();
ListBox6->Items->LoadFromFile("aktarma/islemsiz.txt");
ListBox6->Items->SaveToFile("aktarma/yedek-islemsiz.txt");
Button9Click(Sender);
Label11->Caption=IntToStr(ListBox1->Count)+" ADET";
Label12->Caption=IntToStr(ListBox2->Count)+" ADET";
Label7->Caption=IntToStr(ListBox3->Count)+" ADET";
Label8->Caption=IntToStr(ListBox4->Count)+" ADET";
Label13->Caption=IntToStr(ListBox5->Count)+" ADET";
}
//---------------------------------------------------------------------------

void __fastcall Trakambulma::RadioButton4Click(TObject *Sender)
{
Button8Click(Sender);
Label11->Caption=IntToStr(ListBox1->Count)+" ADET";
Label12->Caption=IntToStr(ListBox2->Count)+" ADET";
Label7->Caption=IntToStr(ListBox3->Count)+" ADET";
Label8->Caption=IntToStr(ListBox4->Count)+" ADET";
Label13->Caption=IntToStr(ListBox5->Count)+" ADET";
}
//---------------------------------------------------------------------------

void __fastcall Trakambulma::RadioButton5Click(TObject *Sender)
{
Button12Click(Sender);
Label11->Caption=IntToStr(ListBox1->Count)+" ADET";
Label12->Caption=IntToStr(ListBox2->Count)+" ADET";
Label7->Caption=IntToStr(ListBox3->Count)+" ADET";
Label8->Caption=IntToStr(ListBox4->Count)+" ADET";
Label13->Caption=IntToStr(ListBox5->Count)+" ADET";
}
//---------------------------------------------------------------------------

void __fastcall Trakambulma::RadioButton6Click(TObject *Sender)
{
Button10Click(Sender);
Label11->Caption=IntToStr(ListBox1->Count)+" ADET";
Label12->Caption=IntToStr(ListBox2->Count)+" ADET";
Label7->Caption=IntToStr(ListBox3->Count)+" ADET";
Label8->Caption=IntToStr(ListBox4->Count)+" ADET";
Label13->Caption=IntToStr(ListBox5->Count)+" ADET";
}
//---------------------------------------------------------------------------


void __fastcall Trakambulma::Button11Click(TObject *Sender)
{
ListBox2->Items->SaveToFile("sonuc.txt");
ilamatkontrol->ListBox8->Clear();
ilamatkontrol->ListBox8->Items->LoadFromFile("sonuc.txt");
ilamatkontrol->Label53->Caption=ilamatkontrol->ListBox8->Count;
rakambulma->Close();


}
//---------------------------------------------------------------------------

void __fastcall Trakambulma::Button4Click(TObject *Sender)
{
Button1Click(Sender);
RadioButton1Click(Sender);
Button11Click(Sender);
}
//---------------------------------------------------------------------------

