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
Tilamatkontrol *ilamatkontrol;
//---------------------------------------------------------------------------
__fastcall Tilamatkontrol::Tilamatkontrol(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall Tilamatkontrol::Button1Click(TObject *Sender)
{
int a,i;
kayit->Items->Clear();
kayit->Items->SaveToFile("defterler/"+Edit1->Text+"bosnumara.txt");
kayit->Items->SaveToFile("defterler/"+Edit1->Text+"acik.txt");
kayit->Items->SaveToFile("defterler/"+Edit1->Text+"kapali.txt");
kayit->Items->SaveToFile("defterler/"+Edit1->Text+"hatali.txt");
//ilamatkontrol->Caption=(Edit1->Text+" yýlýna ait "+a+" adet ilam baþarýyla oluþturuldu");
kayit->Items->LoadFromFile("defterler/yillar.txt");
kayit->Items->Add(Edit1->Text);
kayit->Items->SaveToFile("defterler/yillar.txt");
kayit->Items->Clear();
//kayit->Items->LoadFromFile("defterler/sonilamatno.txt");
kayit->Items->Add(Edit2->Text);
kayit->Items->SaveToFile("defterler/"+Edit1->Text+"sonilamatno.txt");
ShowMessage(Edit1->Text+" yýlýna ait "+Edit2->Text+" adet ilam baþarýyla oluþturuldu");
ilamatkontrol->Text=(Edit1->Text+" yýlýna ait "+Edit2->Text+" adet ilam baþarýyla oluþturuldu");
Edit1->Text="";
Edit2->Text="";
kayit->Items->Clear();
baslangic();
}
//---------------------------------------------------------------------------

void __fastcall Tilamatkontrol::ComboBox1Change(TObject *Sender)
{
defterleriyukle();
ComboBox2->ItemIndex=ComboBox1->ItemIndex;
listesayilari();
ilamatkontrol->Caption=ComboBox1->Text+" YILINA AÝT ÝLAMAT DEFTERÝ'NE HOÞGELDÝNÝZ";
}
//---------------------------------------------------------------------------





void __fastcall Tilamatkontrol::AciklistesiDragDrop(TObject *Sender,
      TObject *Source, int X, int Y)
{
int dongudencik=300000,sira=-1,i,ekle; //deðiþken ranýmý

if(Source==Kapalilistesi)
{

//sýralama baþlangýç
ekle=StrToInt(Kapalilistesi->Items->Strings[Kapalilistesi->ItemIndex]);
for(i=0;i<=Aciklistesi->Count-1;i++)
{
if(StrToInt(Aciklistesi->Items->Strings[i])>ekle)
{
sira=i;
i=dongudencik;
}
}
if(sira==-1)
{
Aciklistesi->Items->Insert(Aciklistesi->Count,ekle);
ilamatkontrol->Caption=ComboBox1->Text+tire->Text+ekle+" sayýlý ilam baþarýyla açýk listesine kaydedildi";
}
if(sira!=-1)
{
Aciklistesi->Items->Insert(sira,ekle);
ilamatkontrol->Caption=ComboBox1->Text+tire->Text+ekle+" sayýlý ilam baþarýyla açýk listesine kaydedildi";
}
//siralama bitiþ
Kapalilistesi->Items->Delete(Kapalilistesi->ItemIndex );

}
if(Source==islemsizlistesi)
{
ekle=StrToInt(islemsizlistesi->Items->Strings[islemsizlistesi->ItemIndex]);
for(i=0;i<=Aciklistesi->Count-1;i++)
{
if(StrToInt(Aciklistesi->Items->Strings[i])>ekle)
{
sira=i;
i=dongudencik;
}
}
if(sira==-1)
{
Aciklistesi->Items->Insert(Aciklistesi->Count,ekle);
ilamatkontrol->Caption=ComboBox1->Text+tire->Text+ekle+" sayýlý ilam baþarýyla açýk listesine kaydedildi";
}
if(sira!=-1)
{
Aciklistesi->Items->Insert(sira,ekle);
ilamatkontrol->Caption=ComboBox1->Text+tire->Text+ekle+" sayýlý ilam baþarýyla açýk listesine kaydedildi";
}
islemsizlistesi->Items->Delete(islemsizlistesi->ItemIndex );
}
if(Source==Hatalilistesi)
{
ekle=StrToInt(Hatalilistesi->Items->Strings[Hatalilistesi->ItemIndex]);
for(i=0;i<=Aciklistesi->Count-1;i++)
{
if(StrToInt(Aciklistesi->Items->Strings[i])>ekle)
{
sira=i;
i=dongudencik;
}
}
if(sira==-1)
{
Aciklistesi->Items->Insert(Aciklistesi->Count,ekle);
ilamatkontrol->Caption=ComboBox1->Text+tire->Text+ekle+" sayýlý ilam baþarýyla açýk listesine kaydedildi";
}
if(sira!=-1)
{
Aciklistesi->Items->Insert(sira,ekle);
ilamatkontrol->Caption=ComboBox1->Text+tire->Text+ekle+" sayýlý ilam baþarýyla açýk listesine kaydedildi";
}
Hatalilistesi->Items->Delete(Hatalilistesi->ItemIndex );
}
listesayilari();
defterlerikaydet();

}
//---------------------------------------------------------------------------

void __fastcall Tilamatkontrol::KapalilistesiDragDrop(TObject *Sender,
      TObject *Source, int X, int Y)
{
int dongudencik=300000,sira=-1,i,ekle; //deðiþken ranýmý

if(Source==Aciklistesi)
{
ekle=StrToInt(Aciklistesi->Items->Strings[Aciklistesi->ItemIndex]);
for(i=0;i<=Kapalilistesi->Count-1;i++)
{
if(StrToInt(Kapalilistesi->Items->Strings[i])>ekle)
{
sira=i;
i=dongudencik;
}
}
if(sira==-1)
{
Kapalilistesi->Items->Insert(Kapalilistesi->Count,ekle);
ilamatkontrol->Caption=ComboBox1->Text+tire->Text+ekle+" sayýlý ilam baþarýyla kapalý listesine kaydedildi";
}
if(sira!=-1)
{
Kapalilistesi->Items->Insert(sira,ekle);
ilamatkontrol->Caption=ComboBox1->Text+tire->Text+ekle+" sayýlý ilam baþarýyla kapalý listesine kaydedildi";

}
Aciklistesi->Items->Delete(Aciklistesi->ItemIndex );

}
if(Source==islemsizlistesi)
{
ekle=StrToInt(islemsizlistesi->Items->Strings[islemsizlistesi->ItemIndex]);
for(i=0;i<=Kapalilistesi->Count-1;i++)
{
if(StrToInt(Kapalilistesi->Items->Strings[i])>ekle)
{
sira=i;
i=dongudencik;
}
}
if(sira==-1)
{
Kapalilistesi->Items->Insert(Kapalilistesi->Count,ekle);
ilamatkontrol->Caption=ComboBox1->Text+tire->Text+ekle+" sayýlý ilam baþarýyla kapalý listesine kaydedildi";

}
if(sira!=-1)
{
Kapalilistesi->Items->Insert(sira,ekle);
ilamatkontrol->Caption=ComboBox1->Text+tire->Text+ekle+" sayýlý ilam baþarýyla kapalý listesine kaydedildi";

}
islemsizlistesi->Items->Delete(islemsizlistesi->ItemIndex );

}
if(Source==Hatalilistesi)
{
ekle=StrToInt(Hatalilistesi->Items->Strings[Hatalilistesi->ItemIndex]);
for(i=0;i<=Kapalilistesi->Count-1;i++)
{
if(StrToInt(Kapalilistesi->Items->Strings[i])>ekle)
{
sira=i;
i=dongudencik;
}
}
if(sira==-1)
{
Kapalilistesi->Items->Insert(Kapalilistesi->Count,ekle);
ilamatkontrol->Caption=ComboBox1->Text+tire->Text+ekle+" sayýlý ilam baþarýyla kapalý listesine kaydedildi";

}
if(sira!=-1)
{
Kapalilistesi->Items->Insert(sira,ekle);
ilamatkontrol->Caption=ComboBox1->Text+tire->Text+ekle+" sayýlý ilam baþarýyla kapalý listesine kaydedildi";

}
Hatalilistesi->Items->Delete(Hatalilistesi->ItemIndex );
}
listesayilari();
defterlerikaydet();
}
//---------------------------------------------------------------------------

void __fastcall Tilamatkontrol::islemsizlistesiDragDrop(TObject *Sender,
      TObject *Source, int X, int Y)
{
int dongudencik=300000,sira=-1,i,ekle; //deðiþken ranýmý

if(Source==Aciklistesi)
{
ekle=StrToInt(Aciklistesi->Items->Strings[Aciklistesi->ItemIndex]);
for(i=0;i<=islemsizlistesi->Count-1;i++)
{
if(StrToInt(islemsizlistesi->Items->Strings[i])>ekle)
{
sira=i;
i=dongudencik;
}
}
if(sira==-1)
{
islemsizlistesi->Items->Insert(islemsizlistesi->Count,ekle);
ilamatkontrol->Caption=ComboBox1->Text+tire->Text+ekle+" sayýlý ilam baþarýyla iþlemsiz listesine kaydedildi";

}
if(sira!=-1)
{
islemsizlistesi->Items->Insert(sira,ekle);
ilamatkontrol->Caption=ComboBox1->Text+tire->Text+ekle+" sayýlý ilam baþarýyla iþlemsiz listesine kaydedildi";
}
Aciklistesi->Items->Delete(Aciklistesi->ItemIndex );

}
if(Source==Kapalilistesi)
{
ekle=StrToInt(Kapalilistesi->Items->Strings[Kapalilistesi->ItemIndex]);
for(i=0;i<=islemsizlistesi->Count-1;i++)
{
if(StrToInt(islemsizlistesi->Items->Strings[i])>ekle)
{
sira=i;
i=dongudencik;
}
}
if(sira==-1)
{
islemsizlistesi->Items->Insert(islemsizlistesi->Count,ekle);
ilamatkontrol->Caption=ComboBox1->Text+tire->Text+ekle+" sayýlý ilam baþarýyla iþlemsiz listesine kaydedildi";

}
if(sira!=-1)
{
islemsizlistesi->Items->Insert(sira,ekle);
ilamatkontrol->Caption=ComboBox1->Text+tire->Text+ekle+" sayýlý ilam baþarýyla iþlemsiz listesine kaydedildi";

}
Kapalilistesi->Items->Delete(Kapalilistesi->ItemIndex );
}
if(Source==Hatalilistesi)
{
ekle=StrToInt(Hatalilistesi->Items->Strings[Hatalilistesi->ItemIndex]);
for(i=0;i<=islemsizlistesi->Count-1;i++)
{
if(StrToInt(islemsizlistesi->Items->Strings[i])>ekle)
{
sira=i;
i=dongudencik;
}
}
if(sira==-1)
{
islemsizlistesi->Items->Insert(islemsizlistesi->Count,ekle);
ilamatkontrol->Caption=ComboBox1->Text+tire->Text+ekle+" sayýlý ilam baþarýyla iþlemsiz listesine kaydedildi";

}
if(sira!=-1)
{
islemsizlistesi->Items->Insert(sira,ekle);
ilamatkontrol->Caption=ComboBox1->Text+tire->Text+ekle+" sayýlý ilam baþarýyla iþlemsiz listesine kaydedildi";

}
Hatalilistesi->Items->Delete(Hatalilistesi->ItemIndex );
}
listesayilari();
defterlerikaydet();
}
//---------------------------------------------------------------------------

void __fastcall Tilamatkontrol::HatalilistesiDragDrop(TObject *Sender,
      TObject *Source, int X, int Y)
{
int dongudencik=300000,sira=-1,i,ekle; //deðiþken ranýmý

if(Source==Aciklistesi)
{
ekle=StrToInt(Aciklistesi->Items->Strings[Aciklistesi->ItemIndex]);
for(i=0;i<=Hatalilistesi->Count-1;i++)
{
if(StrToInt(Hatalilistesi->Items->Strings[i])>ekle)
{
sira=i;
i=dongudencik;
}
}
if(sira==-1)
{
Hatalilistesi->Items->Insert(Hatalilistesi->Count,ekle);
ilamatkontrol->Caption=ComboBox1->Text+tire->Text+ekle+" sayýlý ilam baþarýyla hatalý listesine kaydedildi";

}
if(sira!=-1)
{
Hatalilistesi->Items->Insert(sira,ekle);
ilamatkontrol->Caption=Text+tire->Text+ekle+" sayýlý ilam baþarýyla hatalý listesine kaydedildi";

}
Aciklistesi->Items->Delete(Aciklistesi->ItemIndex );
}
if(Source==islemsizlistesi)
{
ekle=StrToInt(islemsizlistesi->Items->Strings[islemsizlistesi->ItemIndex]);
for(i=0;i<=Hatalilistesi->Count-1;i++)
{
if(StrToInt(Hatalilistesi->Items->Strings[i])>ekle)
{
sira=i;
i=dongudencik;
}
}
if(sira==-1)
{
Hatalilistesi->Items->Insert(Hatalilistesi->Count,ekle);
ilamatkontrol->Caption=ComboBox1->Text+tire->Text+ekle+" sayýlý ilam baþarýyla hatalý listesine kaydedildi";

}
if(sira!=-1)
{
Hatalilistesi->Items->Insert(sira,ekle);
ilamatkontrol->Caption=ComboBox1->Text+tire->Text+ekle+" sayýlý ilam baþarýyla hatalý listesine kaydedildi";

}
islemsizlistesi->Items->Delete(islemsizlistesi->ItemIndex );

}
if(Source==Kapalilistesi)
{
ekle=StrToInt(Kapalilistesi->Items->Strings[Kapalilistesi->ItemIndex]);
for(i=0;i<=Hatalilistesi->Count-1;i++)
{
if(StrToInt(Hatalilistesi->Items->Strings[i])>ekle)
{
sira=i;
i=dongudencik;
}
}
if(sira==-1)
{
Hatalilistesi->Items->Insert(Hatalilistesi->Count,ekle);
ilamatkontrol->Caption=ComboBox1->Text+tire->Text+ekle+" sayýlý ilam baþarýyla hatalý listesine kaydedildi";

}
if(sira!=-1)
{
Hatalilistesi->Items->Insert(sira,ekle);
ilamatkontrol->Caption=ComboBox1->Text+tire->Text+ekle+" sayýlý ilam baþarýyla hatalý listesine kaydedildi";

}
Kapalilistesi->Items->Delete(Kapalilistesi->ItemIndex );
}
listesayilari();
defterlerikaydet();
}
//---------------------------------------------------------------------------

void __fastcall Tilamatkontrol::AciklistesiDragOver(TObject *Sender,
      TObject *Source, int X, int Y, TDragState State, bool &Accept)
{
if(Source==Kapalilistesi)
{
Accept=true;
}
if(Source==islemsizlistesi)
{
Accept=true;
}
if(Source==Hatalilistesi)
{
Accept=true;
}

}
//---------------------------------------------------------------------------

void __fastcall Tilamatkontrol::KapalilistesiDragOver(TObject *Sender,
      TObject *Source, int X, int Y, TDragState State, bool &Accept)
{
if(Source==Aciklistesi)
Accept=true;
if(Source==islemsizlistesi)
Accept=true;
if(Source==Hatalilistesi)
Accept=true;

}
//---------------------------------------------------------------------------

void __fastcall Tilamatkontrol::islemsizlistesiDragOver(TObject *Sender,
      TObject *Source, int X, int Y, TDragState State, bool &Accept)
{
if(Source==Kapalilistesi)
Accept=true;
if(Source==Aciklistesi)
Accept=true;
if(Source==Hatalilistesi)
Accept=true;

}
//---------------------------------------------------------------------------

void __fastcall Tilamatkontrol::HatalilistesiDragOver(TObject *Sender,
      TObject *Source, int X, int Y, TDragState State, bool &Accept)
{
if(Source==Kapalilistesi)
Accept=true;
if(Source==islemsizlistesi)
Accept=true;
if(Source==Aciklistesi)
Accept=true;

}
//---------------------------------------------------------------------------

void __fastcall Tilamatkontrol::AcikClick(TObject *Sender)
{
int dongudencik=300000,index,sira=-1,i,ekle; //deðiþken ranýmý
String rakamkontrol;
rakamkontrol="listedeyok";
//%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
//bu alanda yapýlan iþlemler þunlardýr girilen deðer iþlemsiz listesinde var ise iþlem yapýlmakta ve böylelikle girilen deðer kapalý yada açýk listesine eklenmektedir
for (i=0;i<=islemsizlistesi->Count-1;i++)
{
if(islemsizlistesi->Items->Strings[i]==Verigirisi->Text)//girilen deðer iþlemsiz listesinde varmý?
{//deðer varsa if boloðu içerisine girer
islemsizlistesi->Items->Delete(i);//iþlemsiz listesinden aktarýlacak deðeri sil
ekle=StrToInt(Verigirisi->Text);//ekle deðiþkenine veriyi yükle
rakamkontrol="listedevar";//rakamýn bulunduðunu bildir
i=dongudencik;//döngüdenn çýk
if(islemsizlistesi->Count<=0)//eðer iþlemsiz listesinde eleman kalmadýysa otomatik butonunu pasif et
{
Verigirisi->Text="";
otomatikgiris->Checked=false;
}
if(islemsizlistesi->Count>0)//eðer iþlemsiz listesinde eleman varsa
{
if(otomatikgiris->Checked==true)//ve otomatik butonu aktifse
{
Verigirisi->Text=islemsizlistesi->Items->Strings[0];//veri giriþi bölümüne iþlemsiz listesinde bulunan bir sonraki deðeri gönder
}
}
}
}
if(rakamkontrol=="listedevar")//girilen deðer iþlemsiz listesinde bulunduysa bulunduysa
{
//sýralama baþlangýç
for(i=0;i<=Aciklistesi->Count-1;i++)//aktarýlacak deðerin açýk listesinde kaçýncý satýra ekleneceðini bul
{
if(StrToInt(Aciklistesi->Items->Strings[i])>ekle)//aktarýlacak ilamýn listede kendisinden büyük bir ilamýn kontrolu yapýlýyor eðer varsa bu ilam o sýraya eklenecek
{
sira=i;//evet iþte kaçýncý satýra yerleþtireceðimizi bulduk
i=dongudencik;//donguden çýk
}
}
if(sira==-1)//eklenecek ilam eðer üstteki sýra bulma kodunda eklenecek sýra bulunamazsa böylelikle demek oluyorki açýk listesinde girilen deðerden büyük deðer bulunamamýþtýr buda girilen deðerin açýk listesinde en son satýra eklenmesini gereðektiðini gösteririr
{
Aciklistesi->Items->Insert(Aciklistesi->Count,ekle);//
ilamatkontrol->Caption=ComboBox1->Text+tire->Text+ekle+" sayýlý ilam baþarýyla açýk listesine eklendi";
listeindeksleri();//liste indeklerini -1 yapar
defterlerikaydet();
}
if(sira!=-1)//eðer sýra deðiþkeni yukarýdaki döngüde bulunduyssa
{
Aciklistesi->Items->Insert(sira,ekle);//açýk listesindeki ilgili sýraya veriyi ekle
ilamatkontrol->Caption=ComboBox1->Text+tire->Text+ekle+" sayýlý ilam baþarýyla açýk listesine eklendi";
listeindeksleri();
defterlerikaydet();
}
//siralama bitiþ
listeindeksleri();
listesayilari();//listenin altýnda bulunan numaratörlere listelerdeki ilam sayýlarýný belirtir
defterlerikaydet();

}
//%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
//bu alanda yapýlan iþlemler þunlardýr girilen deðer iþlemsiz listesinde yoksa diðer listeler kontrol edilir ve buradamý diye bakýlýr eðer listelerdede bulunmayýsa kullanýcaya girilen deðerin kontrol edilmesine yönelik bilgi mesajý verilir
if(rakamkontrol=="listedeyok")//girilen deðer açýk listesinde bulunamadýysa
{
for (i=0;i<=Aciklistesi->Count-1;i++)//GÝRÝLEN DEÐER AÇIK LÝSTESÝNDEMÝ
{
if(Verigirisi->Text==Aciklistesi->Items->Strings[i])//eðer açýk listesindeyse
{
//açýk listesinde veriyi aktif hale getir ve mesahla bildir açýk listedindedir diye rakamkontrol deðiþkeninede rakamýn bulunduðunu böylelikle diðer listelerde aramasýna gerek kalmadýðýný bildir
Aciklistesi->ItemIndex=i;
Kapalilistesi->ItemIndex=-1;
islemsizlistesi->ItemIndex=-1;
Hatalilistesi->ItemIndex=-1;

ShowMessage("Eklemek istediðiniz ilam Açýklar listesinde bulunmaktadýr.Girilen deðeri kontrol ediniz");
ilamatkontrol->Caption="Eklemek istediðiniz "+ComboBox1->Text+tire->Text+Verigirisi->Text+" sayýlý ilamat numarasý Açýklar listesinde bulunmaktadýr.Girilen deðeri kontrol ediniz" ;

i=dongudencik;
rakamkontrol="bulundu";
}
}
if(rakamkontrol!="bulundu")
{
for (i=0;i<=Kapalilistesi->Count-1;i++)//GÝRÝLEN DEÐER KAPALI LÝSTESÝNDEMÝ
{
if(Verigirisi->Text==Kapalilistesi->Items->Strings[i])
{
Kapalilistesi->ItemIndex=i;
Aciklistesi->ItemIndex=-1;
islemsizlistesi->ItemIndex=-1;
Hatalilistesi->ItemIndex=-1;

ShowMessage("Eklemek istediðiniz ilam Kapalý listesinde bulunmaktadýr.Girilen deðeri kontrol ediniz");
ilamatkontrol->Caption="Eklemek istediðiniz "+ComboBox1->Text+tire->Text+Verigirisi->Text+" sayýlý ilamat numarasý Kapalýlar listesinde bulunmaktadýr.Girilen deðeri kontrol ediniz" ;

i=dongudencik;
rakamkontrol="bulundu";
}
}
}
if(rakamkontrol!="bulundu")
{
for (i=0;i<=Hatalilistesi->Count-1;i++)//GÝRÝLEN DEÐER HATALI LÝSTESÝNDEMÝ
{
if(Verigirisi->Text==Hatalilistesi->Items->Strings[i])
{
Hatalilistesi->ItemIndex=i;
Kapalilistesi->ItemIndex=-1;
islemsizlistesi->ItemIndex=-1;
Aciklistesi->ItemIndex=-1;

ShowMessage("Eklemek istediðiniz ilam Hatalý listesinde bulunmaktadýr.Girilen deðeri kontrol ediniz");
ilamatkontrol->Caption="Eklemek istediðiniz "+ComboBox1->Text+tire->Text+Verigirisi->Text+" sayýlý ilamat numarasý Hatalýlar listesinde bulunmaktadýr.Girilen deðeri kontrol ediniz" ;

i=dongudencik;
rakamkontrol="bulundu";
}
}
}
if(rakamkontrol=="listedeyok")//rakam hiç bir listede bulunmadýysa kullanýcýya bu durumu bildir
{
ShowMessage("HATALI ÝLAM GÝRÝÞÝ YAPTINIZ EKLEMEK ÝSTEDÝÐÝNÝZ ÝLAMAT NUMARASI ÝÞLEMSÝZ LÝSTESÝNDE YOKTUR.TEKRAR KONTROL EDÝNÝZ");
ilamatkontrol->Caption="Eklemek istediðiniz "+ComboBox1->Text+tire->Text+Verigirisi->Text+" sayýlý ilamat numarasý Ýþlemsiz listesinde bulunamadý.Girilen deðeri kontrol ediniz" ;

}
}//if listede yok bloðu

//%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%

if(otomatikgiris->Checked==false)//otomatik giriþ seçili deðilse  verigiriþ kutusunu boþalt eðer otomatik giriþ aktifse zaten üst tarafta kodunu yazdýk iþlemsiz listesindeki ilk deðer verigiriþine yükleniyor
{
Verigirisi->Text="";
}
Verigirisi->SetFocus();//kontrolu veri giriþi kutusuna ver
}
//---------------------------------------------------------------------------


void __fastcall Tilamatkontrol::otomatikgirisClick(TObject *Sender)
{
if(ComboBox1->Text!="DEFTER SEÇ")
{
manuelgiris->Visible=true;
Verigirisi->Text=islemsizlistesi->Items->Strings[0];
Verigirisi->Color=clLime;
Verigirisi->ReadOnly=true;
}
else
{
ShowMessage("Lütfen öncelikle iþlem yapacaðýnýz ilamat defterini seçiniz");
otomatikgiris->Checked=false;
ComboBox1->SetFocus();
}

}
//---------------------------------------------------------------------------

void __fastcall Tilamatkontrol::manuelgirisClick(TObject *Sender)
{

Verigirisi->ReadOnly=false;
otomatikgiris->Checked=false;
Verigirisi->Text="";
manuelgiris->Visible=false;
Verigirisi->Color=clWindow;
Verigirisi->SetFocus();

}
//---------------------------------------------------------------------------

void __fastcall Tilamatkontrol::kapaliClick(TObject *Sender)
{
int sira=-1,i,ekle,dongudencik=300000; //deðiþken ranýmý
String rakamkontrol;
rakamkontrol="listedeyok";
for (i=0;i<=islemsizlistesi->Count-1;i++)
{
if(islemsizlistesi->Items->Strings[i]==Verigirisi->Text)
{
islemsizlistesi->Items->Delete(i);
ekle=StrToInt(Verigirisi->Text);
rakamkontrol="listedevar";
i=dongudencik;
if(islemsizlistesi->Count<=0)
{
Verigirisi->Text="";
otomatikgiris->Checked=false;
}
if(islemsizlistesi->Count>0)
{
if(otomatikgiris->Checked==true)
{
Verigirisi->Text=islemsizlistesi->Items->Strings[0];
}
}
}
}
if(rakamkontrol=="listedevar")
{
//sýralama baþlangýç
for(i=0;i<=Kapalilistesi->Count-1;i++)
{
if(StrToInt(Kapalilistesi->Items->Strings[i])>ekle)
{
sira=i;
i=dongudencik;
}
}

if(sira==-1)
{
Kapalilistesi->Items->Insert(Kapalilistesi->Count,ekle);
ilamatkontrol->Caption=ComboBox1->Text+tire->Text+ekle+" sayýlý ilam baþarýyla kapalý listesine eklendi";

listeindeksleri();
}
if(sira!=-1)
{
Kapalilistesi->Items->Insert(sira,ekle);
ilamatkontrol->Caption=ComboBox1->Text+tire->Text+ekle+" sayýlý ilam baþarýyla kapalý listesine eklendi";

listeindeksleri();
}

//siralama bitiþ
listesayilari();
defterlerikaydet();
}

if(rakamkontrol=="listedeyok")
{

for (i=0;i<=Aciklistesi->Count-1;i++)//GÝRÝLEN DEÐER AÇIK LÝSTESÝNDEMÝ
{
if(Verigirisi->Text==Aciklistesi->Items->Strings[i])
{
Aciklistesi->ItemIndex=i;
Kapalilistesi->ItemIndex=-1;
islemsizlistesi->ItemIndex=-1;
Hatalilistesi->ItemIndex=-1;

ShowMessage("Eklemek istediðiniz ilam Açýklar listesinde bulunmaktadýr.Girilen deðeri kontrol ediniz");
ilamatkontrol->Caption="Eklemek istediðiniz "+ComboBox1->Text+tire->Text+Verigirisi->Text+" sayýlý ilamat numarasý Açýklar listesinde bulunmaktadýr.Girilen deðeri kontrol ediniz" ;
i=dongudencik;
rakamkontrol="bulundu";
}
}
if(rakamkontrol!="bulundu")
{
for (i=0;i<=Kapalilistesi->Count-1;i++)//GÝRÝLEN DEÐER KAPALI LÝSTESÝNDEMÝ
{
if(Verigirisi->Text==Kapalilistesi->Items->Strings[i])
{
Kapalilistesi->ItemIndex=i;
Aciklistesi->ItemIndex=-1;
islemsizlistesi->ItemIndex=-1;
Hatalilistesi->ItemIndex=-1;

ShowMessage("Eklemek istediðiniz ilam Kapalý listesinde bulunmaktadýr.Girilen deðeri kontrol ediniz");
ilamatkontrol->Caption="Eklemek istediðiniz "+ComboBox1->Text+tire->Text+Verigirisi->Text+" sayýlý ilamat numarasý Kapalýlar listesinde bulunmaktadýr.Girilen deðeri kontrol ediniz" ;

i=dongudencik;
rakamkontrol="bulundu";
}
}
}
if(rakamkontrol!="bulundu")
{
for (i=0;i<=Hatalilistesi->Count-1;i++)//GÝRÝLEN DEÐER HATALI LÝSTESÝNDEMÝ
{
if(Verigirisi->Text==Hatalilistesi->Items->Strings[i])
{
Hatalilistesi->ItemIndex=i;
Kapalilistesi->ItemIndex=-1;
islemsizlistesi->ItemIndex=-1;
Aciklistesi->ItemIndex=-1;

ShowMessage("Eklemek istediðiniz ilam Hatalý listesinde bulunmaktadýr.Girilen deðeri kontrol ediniz");
ilamatkontrol->Caption="Eklemek istediðiniz "+ComboBox1->Text+tire->Text+Verigirisi->Text+" sayýlý ilamat numarasý Hatalýlar listesinde bulunmaktadýr.Girilen deðeri kontrol ediniz" ;

i=dongudencik;
rakamkontrol="bulundu";
}
}
}
if(rakamkontrol=="listedeyok")
{
ShowMessage("HATALI ÝLAM GÝRÝÞÝ YAPTINIZ EKLEMEK ÝSTEDÝÐÝNÝZ ÝLAMAT NUMARASI ÝÞLEMSÝZ LÝSTESÝNDE YOKTUR.TEKRAR KONTROL EDÝNÝZ");
ilamatkontrol->Caption="Eklemek istediðiniz "+ComboBox1->Text+tire->Text+Verigirisi->Text+" sayýlý ilamat numarasý Ýþlemsiz listesinde bulunamadý.Girilen deðeri kontrol ediniz" ;

}
}//if listede yok bloðu

if(otomatikgiris->Checked==false)
{
Verigirisi->Text="";
}
Verigirisi->SetFocus();


}
//---------------------------------------------------------------------------

void __fastcall Tilamatkontrol::FormActivate(TObject *Sender)
{
PageControl1->ActivePage=TabSheet2;
baslangic();
yazialani->Font->Pitch=fpFixed;
ListBox7->Items->LoadFromFile("defterler/dipnot.txt");

}
//---------------------------------------------------------------------------

void __fastcall Tilamatkontrol::Button2Click(TObject *Sender)
{
int dongudencik=300000,i; //deðiþken ranýmý
String rakamkontrol;
rakamkontrol="listedeyok";

if(rakamkontrol=="listedeyok")//girilen deðer açýk listesinde bulunamadýysa
{
for (i=0;i<=Aciklistesi->Count-1;i++)//GÝRÝLEN DEÐER AÇIK LÝSTESÝNDEMÝ
{
if(aranacakdeger->Text==Aciklistesi->Items->Strings[i])//eðer açýk listesindeyse
{
//açýk listesinde veriyi aktif hale getir ve mesahla bildir açýk listedindedir diye rakamkontrol deðiþkeninede rakamýn bulunduðunu böylelikle diðer listelerde aramasýna gerek kalmadýðýný bildir
Aciklistesi->ItemIndex=i;
Kapalilistesi->ItemIndex=-1;
islemsizlistesi->ItemIndex=-1;
Hatalilistesi->ItemIndex=-1;

ShowMessage("Aradýðýnýz "+ComboBox1->Text+tire->Text+aranacakdeger->Text+"  sayýlý ilam Açýklar listesinde bulunmaktadýr.");
ilamatkontrol->Text=("Aradýðýnýz "+ComboBox1->Text+tire->Text+aranacakdeger->Text+"  sayýlý ilam Açýklar listesinde bulunmaktadýr.");

i=dongudencik;
rakamkontrol="bulundu";
}
}
if(rakamkontrol!="bulundu")
{
for (i=0;i<=Kapalilistesi->Count-1;i++)//GÝRÝLEN DEÐER KAPALI LÝSTESÝNDEMÝ
{
if(aranacakdeger->Text==Kapalilistesi->Items->Strings[i])
{
Kapalilistesi->ItemIndex=i;
Aciklistesi->ItemIndex=-1;
islemsizlistesi->ItemIndex=-1;
Hatalilistesi->ItemIndex=-1;

ShowMessage("Aradýðýnýz "+ComboBox1->Text+tire->Text+aranacakdeger->Text+"  sayýlý  ilam Kapalý listesinde bulunmaktadýr.");
ilamatkontrol->Text=("Aradýðýnýz "+ComboBox1->Text+tire->Text+aranacakdeger->Text+"  sayýlý  ilam Kapalý listesinde bulunmaktadýr.");

i=dongudencik;
rakamkontrol="bulundu";
}
}
}
if(rakamkontrol!="bulundu")
{
for (i=0;i<=islemsizlistesi->Count-1;i++)//GÝRÝLEN DEÐER HATALI LÝSTESÝNDEMÝ
{
if(aranacakdeger->Text==islemsizlistesi->Items->Strings[i])
{
Hatalilistesi->ItemIndex=-1;
Kapalilistesi->ItemIndex=-1;
islemsizlistesi->ItemIndex=i;
Aciklistesi->ItemIndex=-1;

ShowMessage("Aradýðýnýz "+ComboBox1->Text+tire->Text+aranacakdeger->Text+"  sayýlý  ilam Ýþlemsiz listesinde bulunmaktadýr.");
ilamatkontrol->Text=("Aradýðýnýz "+ComboBox1->Text+tire->Text+aranacakdeger->Text+"  sayýlý  ilam Ýþlemsiz listesinde bulunmaktadýr.");

i=dongudencik;
rakamkontrol="bulundu";
}
}
}
if(rakamkontrol!="bulundu")
{
for (i=0;i<=Hatalilistesi->Count-1;i++)//GÝRÝLEN DEÐER HATALI LÝSTESÝNDEMÝ
{
if(aranacakdeger->Text==Hatalilistesi->Items->Strings[i])
{
Hatalilistesi->ItemIndex=i;
Kapalilistesi->ItemIndex=-1;
islemsizlistesi->ItemIndex=-1;
Aciklistesi->ItemIndex=-1;

ShowMessage("Aradýðýnýz "+ComboBox1->Text+tire->Text+aranacakdeger->Text+"  sayýlý  ilam Hatalý listesinde bulunmaktadýr.");
ilamatkontrol->Text=("Aradýðýnýz "+ComboBox1->Text+tire->Text+aranacakdeger->Text+"  sayýlý  ilam Hatalý listesinde bulunmaktadýr.");

i=dongudencik;
rakamkontrol="bulundu";
}
}
}

if(rakamkontrol=="listedeyok")//rakam hiç bir listede bulunmadýysa kullanýcýya bu durumu bildir
{
ShowMessage("Aradýðýnýz "+ComboBox1->Text+tire->Text+aranacakdeger->Text+"  sayýlý  ÝLAMAT NUMARASI LÝSTELERDE BULUNAMADI.GÝRÝLEN DEÐERÝ TEKRAR KONTROL EDÝNÝZ");
ilamatkontrol->Text=("Aradýðýnýz "+ComboBox1->Text+tire->Text+aranacakdeger->Text+"  sayýlý  ÝLAMAT NUMARASI LÝSTELERDE BULUNAMADI.GÝRÝLEN DEÐERÝ TEKRAR KONTROL EDÝNÝZ");

}


}//if listede yok bloðu


}
//---------------------------------------------------------------------------
void __fastcall Tilamatkontrol::Button5Click(TObject *Sender)
{
if(ComboBox2->ItemIndex!=-1&raporturu->ItemIndex!=-1)
{
raporal();
ilamatkontrol->Caption="RAPOR ALMA ÝÞLEMÝ BAÞARIYLA GERÇEKLEÞTÝRÝLDÝ";
}
if(ComboBox2->ItemIndex==-1||raporturu->ItemIndex==-1)
{
ShowMessage("RAPOR DEFTERÝNÝ VE ALINACAK RAPOR TÜRÜNÜ SEÇTÝKTEN SONRA TEKRAR DENEYÝNÝZ");
}
}
//---------------------------------------------------------------------------

void __fastcall Tilamatkontrol::satirayariChange(TObject *Sender)
{
satirsayisi->Caption=satirayari->Position;
}
//---------------------------------------------------------------------------

void __fastcall Tilamatkontrol::ComboBox2Change(TObject *Sender)
{
ComboBox1->ItemIndex=ComboBox2->ItemIndex;
ComboBox1Change(Sender);
yazialani->Lines->Clear();
}
//---------------------------------------------------------------------------

void __fastcall Tilamatkontrol::Button3Click(TObject *Sender)
{
if(yazialani->Text!="")
{
yazicii->Button2Click(Sender);
ilamatkontrol->Caption=ComboBox2->Text+" yýlýna ait "+raporturu->Text+" baþarýyla yazýcýya gönderildi";
}
else
ShowMessage("YAZDIRILACAK HERHANGÝ BÝR BÝLGÝ BULUNAMADI");

}
//---------------------------------------------------------------------------

void __fastcall Tilamatkontrol::Button4Click(TObject *Sender)
{
if(yazialani->Text!="")
{
if(raporturu->ItemIndex==0)
{
yazialani->Lines->SaveToFile("ciktial/"+ComboBox2->Text+"açýk."+uzanti->Text);
ShowMessage("ciktial/"+ComboBox2->Text+"açýk."+uzanti->Text+" ADRESÝNE BAÞARIYLA KAYDEDÝLDÝ");
}
if(raporturu->ItemIndex==1)
{
yazialani->Lines->SaveToFile("ciktial/"+ComboBox2->Text+"kapalý."+uzanti->Text);
ShowMessage("ciktial/"+ComboBox2->Text+"kapalý."+uzanti->Text+" ADRESÝNE BAÞARIYLA KAYDEDÝLDÝ");
}
if(raporturu->ItemIndex==2)
{
yazialani->Lines->SaveToFile("ciktial/"+ComboBox2->Text+"iþlemsiz."+uzanti->Text);
ShowMessage("ciktial/"+ComboBox2->Text+"iþlemsiz."+uzanti->Text+" ADRESÝNE BAÞARIYLA KAYDEDÝLDÝ");
}
if(raporturu->ItemIndex==3)
{
yazialani->Lines->SaveToFile("ciktial/"+ComboBox2->Text+"hatalý."+uzanti->Text);
ShowMessage("ciktial/"+ComboBox2->Text+"hatalý."+uzanti->Text+" ADRESÝNE BAÞARIYLA KAYDEDÝLDÝ");
}
yazialani->Lines->Clear();
}
else
ShowMessage("KAYDEDÝLECEK HERHANGÝ BÝR BÝLGÝ BULUNAMADI");
ilamatkontrol->Caption=ComboBox2->Text+" yýlýna ait "+raporturu->Text+" baþarýyla kaydedildi";


}
//---------------------------------------------------------------------------

void __fastcall Tilamatkontrol::raporturuChange(TObject *Sender)
{
yazialani->Lines->Clear();
}
//---------------------------------------------------------------------------


void __fastcall Tilamatkontrol::silbutonuClick(TObject *Sender)
{
AnsiString secim;
secim=InputBox("ÝLAMAT SÝLME ÝÞLEMÝ","KÜÇÜK HARFLERLE ÞÝFREYÝ GÝRÝNÝZ=","");
if(secim=="infaz")
{
if(deftersil->ItemIndex!=-1)
{
ilamatkontrol->Caption=deftersil->Text +" ilamat defteri baþarýyla silindi";
defterlerisil();
deftersil->Items->Delete(StrToInt(silinecekdeftersirasi->Caption));
deftersil->Items->SaveToFile("defterler/yillar.txt");
deftersil->ItemIndex=-1;
deftersil->Text="DEFTER SEÇ";
silbutonu->Visible=false;
baslangic();
}
}
else
{
ShowMessage("ÞÝFREYÝ YANLIÞ GÝRDÝNÝZ LÜTFEN TEKRAR DENEYÝNÝZ");
deftersil->ItemIndex=-1;
deftersil->Text="DEFTER SEÇ";
}

}
//---------------------------------------------------------------------------



void __fastcall Tilamatkontrol::deftersilChange(TObject *Sender)
{
ComboBox2->ItemIndex=deftersil->ItemIndex;
ComboBox2Change(Sender);

silinecekdeftersirasi->Caption=deftersil->ItemIndex;
silbutonu->Visible=true;
}
//---------------------------------------------------------------------------





void __fastcall Tilamatkontrol::RadioButton1Click(TObject *Sender)
{
RadioButton1->Checked=false;
RadioButton1->Visible=false;
Label18->Visible=true;
sonilamno1->Visible=true;
Label20->Visible=true;
Edit3->Visible=true;
Button7->Visible=true;
Button8->Visible=true;
}
//---------------------------------------------------------------------------

void __fastcall Tilamatkontrol::Button7Click(TObject *Sender)
{
int i;
AnsiString secim;
if(StrToInt(Edit3->Text)>StrToInt(sonilamno1->Caption))
{
secim=InputBox("ÝLAMAT SÝLME ÝÞLEMÝ","KÜÇÜK HARFLERLE ÞÝFREYÝ GÝRÝNÝZ=","");
if(secim=="infaz")
{
kayit->Items->Clear();
kayit->Items->Add(Edit3->Text);
kayit->Items->SaveToFile("defterler/"+ComboBox1->Text+"sonilamatno.txt");
sonilamno1->Caption=Edit3->Text;
sonilamno2->Caption=sonilamno1->Caption;
defterlerikaydet();
RadioButton1->Visible=true;
Label18->Visible=false;
sonilamno1->Visible=false;
Label20->Visible=false;
Edit3->Visible=false;
Button7->Visible=false;
Button8->Visible=false;
ilamatkontrol->Caption=ComboBox1->Text+" yýlý son ilamat numarasý="+Edit3->Text+" olarak düzenlendi";
}
else
ShowMessage("ÞÝFREYÝ YANLIÞ GÝRDÝNÝZ LÜTFEN TEKRAR DENEYÝNÝZ");
}
else
ShowMessage("GÝRDÝÐÝNÝZ ARALIK DEFTERÝN SON ÝLAMAT NUMARASINDAN KÜÇÜKTÜR DÜZELTEREK TEKRAR DENEYÝNÝZ");

}
//---------------------------------------------------------------------------

void __fastcall Tilamatkontrol::Button8Click(TObject *Sender)
{
Edit3->Text="";
RadioButton1->Visible=true;
Label18->Visible=false;
sonilamno1->Visible=false;
Label20->Visible=false;
Edit3->Visible=false;
Button7->Visible=false;
Button8->Visible=false;
}
//---------------------------------------------------------------------------

void __fastcall Tilamatkontrol::Button9Click(TObject *Sender)
{
int i;
String hata="yok";
AnsiString secim;
if(StrToInt(Edit5->Text)>=StrToInt(Edit4->Text))
{
if(StrToInt(Edit5->Text)<=StrToInt(sonilamno2->Caption))
{
for(i=0;i<=Aciklistesi->Count-1;i++)
{
if(StrToInt(Aciklistesi->Items->Strings[i])>StrToInt(Edit4->Text))
{
ShowMessage("Girilen baþlangýç deðeri listede yer alan deðerlerden daha küçüktür lütfen iþleme devam edecekseniz bu konuya önemle dikkat ediniz");
i=100000;
hata="var";
}
}
if(hata=="yok")
{
for(i=0;i<=Kapalilistesi->Count-1;i++)
{
if(StrToInt(Kapalilistesi->Items->Strings[i])>StrToInt(Edit4->Text))
{
ShowMessage("Girilen baþlangýç deðeri listede yer alan deðerlerden daha küçüktür lütfen iþleme devam edecekseniz bu konuya önemle dikkat ediniz");
i=100000;
hata="var";

}
Application->ProcessMessages();
}
}
if(hata=="yok")
{
for(i=0;i<=islemsizlistesi->Count-1;i++)
{

if(StrToInt(islemsizlistesi->Items->Strings[i])>StrToInt(Edit4->Text))
{
ShowMessage("Girilen baþlangýç deðeri listede yer alan deðerlerden daha küçüktür lütfen iþleme devam edecekseniz bu konuya önemle dikkat ediniz");
i=100000;
hata="var";
}
Application->ProcessMessages();
}
}
if(hata=="yok")
{
for(i=0;i<=Hatalilistesi->Count-1;i++)
{
if(StrToInt(Hatalilistesi->Items->Strings[i])>StrToInt(Edit4->Text))
{
ShowMessage("Girilen baþlangýç deðeri listede yer alan deðerlerden daha küçüktür lütfen iþleme devam edecekseniz bu konuya önemle dikkat ediniz");
i=100000;
hata="var";
}
Application->ProcessMessages();
}
}
secim=InputBox("ÝLAMAT SÝLME ÝÞLEMÝ","KÜÇÜK HARFLERLE ÞÝFREYÝ GÝRÝNÝZ=","");
if(secim=="infaz")
{
for(i=StrToInt(Edit4->Text);i<=StrToInt(Edit5->Text);i++)
{
islemsizlistesi->Items->Add(i);
Application->ProcessMessages();
}
}
listesayilari();
defterlerikaydet();
ilamatkontrol->Caption=ComboBox1->Text+" yýlýna ait "+Edit4->Text+"-"+Edit5->Text+" aralýðý baþarýyla iþlemsiz listesine yüklendi";
Edit4->Text="";
Edit5->Text="";
}
else
ShowMessage("GÝRÝLEN DEÐER ÝLAMAT DEFTERÝNDEKÝ SON ÝLAM NUMARASINDAN BÜYÜK OLAMAZ DÜZELTÝP TEKRAR DENEYÝNÝZ");
}
else
ShowMessage("BAÞLANGIÇ DEÐERÝ BÝTÝÞ DEÐERÝNDEN BÜYÜK OLAMAZ DÜZELTÝP TEKRAR DENEYÝNÝZ");

}
//---------------------------------------------------------------------------



void __fastcall Tilamatkontrol::RadioButton2Click(TObject *Sender)
{
if(ComboBox1->Text!="DEFTER SEÇ")
{
Aciklistesi->Items->SaveToFile("defterler/"+ComboBox1->Text+"acik.txt");
rakamlarisirala->ListBox1->Items->LoadFromFile("defterler/"+ComboBox1->Text+"acik.txt");
rakamlarisirala->Button1Click(Sender);
rakamlarisirala->ListBox1->Items->SaveToFile("defterler/"+ComboBox1->Text+"acik.txt");
ilamatkontrol->Caption=ComboBox1->Text+" Yýlýna ait Açýk listesi sýralama baþarýyla gerçekleþtirildi";
Aciklistesi->Items->LoadFromFile("defterler/"+ComboBox1->Text+"acik.txt");
}
else
{
ShowMessage("LÜTFEN ÖNCELÝKLE DEFTER ÝÞLEMLERÝNDEN SIRALAMA YAPILACAK OLAN DEFTERÝ SEÇÝNÝZ");
RadioButton2->Checked=false;
}

}
//---------------------------------------------------------------------------

void __fastcall Tilamatkontrol::RadioButton3Click(TObject *Sender)
{
if(ComboBox1->Text!="DEFTER SEÇ")
{
Kapalilistesi->Items->SaveToFile("defterler/"+ComboBox1->Text+"kapali.txt");
rakamlarisirala->ListBox1->Items->LoadFromFile("defterler/"+ComboBox1->Text+"kapali.txt");
rakamlarisirala->Button1Click(Sender);
rakamlarisirala->ListBox1->Items->SaveToFile("defterler/"+ComboBox1->Text+"kapali.txt");
ilamatkontrol->Caption=ComboBox1->Text+" Yýlýna ait Kapali listesi sýralama baþarýyla gerçekleþtirildi";
Kapalilistesi->Items->LoadFromFile("defterler/"+ComboBox1->Text+"kapali.txt");
}
else
{
ShowMessage("LÜTFEN ÖNCELÝKLE DEFTER ÝÞLEMLERÝNDEN SIRALAMA YAPILACAK OLAN DEFTERÝ SEÇÝNÝZ");
RadioButton3->Checked=false;
}

}
//---------------------------------------------------------------------------

void __fastcall Tilamatkontrol::RadioButton4Click(TObject *Sender)
{
if(ComboBox1->Text!="DEFTER SEÇ")
{
islemsizlistesi->Items->SaveToFile("defterler/"+ComboBox1->Text+"islemsiz.txt");
rakamlarisirala->ListBox1->Items->LoadFromFile("defterler/"+ComboBox1->Text+"islemsiz.txt");
rakamlarisirala->Button1Click(Sender);
rakamlarisirala->ListBox1->Items->SaveToFile("defterler/"+ComboBox1->Text+"islemsiz.txt");
ilamatkontrol->Caption=ComboBox1->Text+" Yýlýna ait Ýslemsiz listesi sýralama baþarýyla gerçekleþtirildi";
islemsizlistesi->Items->LoadFromFile("defterler/"+ComboBox1->Text+"islemsiz.txt");
defterlerikaydet();
}
else
{
ShowMessage("LÜTFEN ÖNCELÝKLE DEFTER ÝÞLEMLERÝNDEN SIRALAMA YAPILACAK OLAN DEFTERÝ SEÇÝNÝZ");
RadioButton4->Checked=false;
}
}
//---------------------------------------------------------------------------

void __fastcall Tilamatkontrol::RadioButton5Click(TObject *Sender)
{
if(ComboBox1->Text!="DEFTER SEÇ")
{
Hatalilistesi->Items->SaveToFile("defterler/"+ComboBox1->Text+"hatali.txt");
rakamlarisirala->ListBox1->Items->LoadFromFile("defterler/"+ComboBox1->Text+"hatali.txt");
rakamlarisirala->Button1Click(Sender);
rakamlarisirala->ListBox1->Items->SaveToFile("defterler/"+ComboBox1->Text+"hatali.txt");
ilamatkontrol->Caption=ComboBox1->Text+" Yýlýna ait Hatali listesi sýralama baþarýyla gerçekleþtirildi";
Hatalilistesi->Items->LoadFromFile("defterler/"+ComboBox1->Text+"hatali.txt");
}
else
{
ShowMessage("LÜTFEN ÖNCELÝKLE DEFTER ÝÞLEMLERÝNDEN SIRALAMA YAPILACAK OLAN DEFTERÝ SEÇÝNÝZ");
RadioButton5->Checked=false;
}
}
//---------------------------------------------------------------------------

void __fastcall Tilamatkontrol::RadioButton6Click(TObject *Sender)
{
if(ComboBox1->Text!="DEFTER SEÇ")
{
RadioButton2Click(Sender);
RadioButton3Click(Sender);
RadioButton4Click(Sender);
RadioButton5Click(Sender);
ShowMessage(ComboBox1->Text+" YILINA AÝT DEFTER SIRALAMA ÝÞLEMÝ BAÞARIYLA TAMAMLANDI");
}
else
{
ShowMessage("LÜTFEN ÖNCELÝKLE DEFTER ÝÞLEMLERÝNDEN SIRALAMA YAPILACAK OLAN DEFTERÝ SEÇÝNÝZ");
RadioButton6->Checked=false;
}
}
//---------------------------------------------------------------------------



void __fastcall Tilamatkontrol::ComboBox5Change(TObject *Sender)
{
ListBox1->Items->Add(ComboBox5->Items->Strings[ComboBox5->ItemIndex]);
}
//---------------------------------------------------------------------------

void __fastcall Tilamatkontrol::birlestirbutonuClick(TObject *Sender)
{
if(Edit6->Text!="")
{
int i,j,x,y;
kayit->Items->Clear();
for(i=0;i<=ListBox1->Count-1;i++)
{
kayit->Items->LoadFromFile("defterler/"+ListBox1->Items->Strings[i]+"acik.txt");
for(j=0;j<=kayit->Count-1;j++)
{
rakamlarisirala->ListBox1->Items->Add(kayit->Items->Strings[j]);
}
}
rakamlarisirala->Button1Click(Sender);
rakamlarisirala->ListBox1->Items->SaveToFile("kayitli/"+Edit6->Text+"acik.txt");

kayit->Items->Clear();

for(i=0;i<=ListBox1->Count-1;i++)
{
kayit->Items->LoadFromFile("defterler/"+ListBox1->Items->Strings[i]+"kapali.txt");
for(j=0;j<=kayit->Count-1;j++)
{
rakamlarisirala->ListBox1->Items->Add(kayit->Items->Strings[j]);
}
}
rakamlarisirala->Button1Click(Sender);
rakamlarisirala->ListBox1->Items->SaveToFile("kayitli/"+Edit6->Text+"kapali.txt");
/*
kayit->Items->Clear();
for(i=0;i<=ListBox1->Count-1;i++)
{
kayit->Items->LoadFromFile("defterler/"+ListBox1->Items->Strings[i]+"hatali.txt");
for(j=0;j<=kayit->Count-1;j++)
{
rakamlarisirala->ListBox1->Items->Add(kayit->Items->Strings[j]);
}
}
rakamlarisirala->Button1Click(Sender);
rakamlarisirala->ListBox1->Items->SaveToFile("defterler/"+Edit6->Text+"hatali.txt");
kayit->Items->Clear();

for(i=0;i<=ListBox1->Count-1;i++)
{
kayit->Items->LoadFromFile("defterler/"+ListBox1->Items->Strings[i]+"bosnumara.txt");
for(j=0;j<=kayit->Count-1;j++)
{
rakamlarisirala->ListBox1->Items->Add(kayit->Items->Strings[j]);
}
}
rakamlarisirala->Button1Click(Sender);
rakamlarisirala->ListBox1->Items->SaveToFile("defterler/"+Edit6->Text+"bosnumara.txt");
kayit->Items->Clear();
*/
//kayit->Items->Add(rakamlarisirala->ListBox1->Items->Strings[rakamlarisirala->ListBox1->Count-1]);
//rakamlarisirala->ListBox1->Items->
kayit->Items->Clear();
kayit->Items->LoadFromFile("kayitli/defterler.txt");
kayit->Items->Add(Edit6->Text+"acik");
kayit->Items->Add(Edit6->Text+"kapali");
kayit->Items->SaveToFile("kayitli/defterler.txt");
kayit->Items->Clear();
kayit->Items->Clear();
rakamlarisirala->ListBox1->Items->Clear();
baslangic();
ShowMessage("BÝRLEÞTÝRME ÝÞLEMÝ BAÞARIYLA TAMAMLANDI");
Edit6->Text="";
}
else
ShowMessage("YENÝ KAYIT ADINI GÝRÝNÝZ");

}
//---------------------------------------------------------------------------



void __fastcall Tilamatkontrol::VerigirisiChange(TObject *Sender)
{
int i,x;
String a,b,y,z;
a=kisayolacik->Text;
b=kisayolkapali->Text;
y=Verigirisi->Text;
x=y.Length();
z=y.SubString(x,1);
if(a==z)
{
Verigirisi->Text=Verigirisi->Text.SubString(1,Verigirisi->Text.Length()-1);
AcikClick(Sender);
defterlerikaydet();
}
if(b==z)
{
Verigirisi->Text=Verigirisi->Text.SubString(1,Verigirisi->Text.Length()-1);
kapaliClick(Sender);
defterlerikaydet();
}

}
//---------------------------------------------------------------------------

void __fastcall Tilamatkontrol::kisayolacikChange(TObject *Sender)
{
kayit->Clear();
kayit->Items->Add(kisayolacik->Text);
kayit->Items->Add(kisayolkapali->Text);
kayit->Items->SaveToFile("defterler/kisayoltusu.txt");
ilamatkontrol->Caption="Acik listesine kýsayol tuþu olarak "+kisayolacik->Text+" iþareti atandý";

}
//---------------------------------------------------------------------------

void __fastcall Tilamatkontrol::kisayolkapaliChange(TObject *Sender)
{
kayit->Clear();
kayit->Items->Add(kisayolacik->Text);
kayit->Items->Add(kisayolkapali->Text);
kayit->Items->SaveToFile("defterler/kisayoltusu.txt");
ilamatkontrol->Caption="Kapali listesine kýsayol tuþu olarak "+kisayolkapali->Text+" iþareti atandý";

}
//---------------------------------------------------------------------------

void __fastcall Tilamatkontrol::Button6Click(TObject *Sender)
{
RadioButton10->Checked=false;
RadioButton11->Checked=false;
ShowMessage("RAKAM AYRIÞTIRMA ÝÞLEMÝ BAÞLIYOR");
parantezdenayirma->Button4Click(Sender);
Application->ProcessMessages();
tiredenayir->Button1Click(Sender);
Application->ProcessMessages();
satirabaslukekleme->Button4Click(Sender);
Application->ProcessMessages();
rakambulma->Button4Click(Sender);
Application->ProcessMessages();
ShowMessage("Rakam ayrýþtýrma iþlemi baþarýyla tamamlandý lütfen rakamlarýn AÇIK listeyemi yoksa KAPALI listeyemi aktarýlacaðýný seçiniz");
RadioButton10->Visible=true;
RadioButton11->Visible=true;
GroupBox15->Visible=true;
ListBox8->Clear();
ListBox8->Items->LoadFromFile("sonuc.txt");
Label53->Caption=ListBox8->Count;
}
//---------------------------------------------------------------------------

void __fastcall Tilamatkontrol::RadioButton10Click(TObject *Sender)
{

kayit->Items->Clear();
kayit->Items->LoadFromFile("sonuc.txt");
kayit->Items->SaveToFile("yukle/acik.txt");
ShowMessage("RAKAMLAR AÇIK LÝSTESÝNE AKTARILDI DEFTER BÝRLEÞTÝRME ÝÞLEMÝNE BAÞLAYABÝLÝRSÝNÝZ");
RadioButton10->Visible=false;
RadioButton11->Visible=false;


}
//---------------------------------------------------------------------------





void __fastcall Tilamatkontrol::RadioButton11Click(TObject *Sender)
{

kayit->Items->Clear();
kayit->Items->LoadFromFile("sonuc.txt");
kayit->Items->SaveToFile("yukle/kapali.txt");
ShowMessage("RAKAMLAR AÇIK LÝSTESÝNE AKTARILDI DEFTER BÝRLEÞTÝRME ÝÞLEMÝNE BAÞLAYABÝLÝRSÝNÝZ");
RadioButton10->Visible=false;
RadioButton11->Visible=false;

}
//---------------------------------------------------------------------------

void __fastcall Tilamatkontrol::Button10Click(TObject *Sender)
{
if(Edit7->Text!="")
{
kayit->Items->Clear();
kayit->Items->LoadFromFile("sonuc.txt");
kayit->Items->SaveToFile("kayitli/"+Edit7->Text+".txt");
ComboBox3->Items->Add(Edit7->Text);
ComboBox3->Items->SaveToFile("kayitli/defterler.txt");
ShowMessage(Edit7->Text+ "defteri baþarýyla kayýt edildi");
Edit7->Text="";
baslangic();
}
else
{
ShowMessage("Lütfen kayit ismini giriniz");
}

}
//---------------------------------------------------------------------------

void __fastcall Tilamatkontrol::Button12Click(TObject *Sender)
{                             ShowMessage("RAKAM AYRIÞTIRMA ÝÞLEMÝ BAÞLIYOR");
parantezdenayirma->Button4Click(Sender);
tiredenayir->Button1Click(Sender);
satirabaslukekleme->Button4Click(Sender);
rakambulma->Show();
rakambulma->Button4->Visible=false;
rakambulma->RadioButton1->Visible=false;
ShowMessage("Rakam ayrýþtýrma iþlemi bitirdikten sonra lütfen rakamlarýn AÇIK listeyemi yoksa KAPALI listeyemi aktarýlacaðýný seçiniz");
RadioButton12->Visible=true;
RadioButton13->Visible=true;
GroupBox15->Visible=true;
ListBox8->Clear();
ListBox8->Items->LoadFromFile("sonuc.txt");

}
//---------------------------------------------------------------------------

void __fastcall Tilamatkontrol::RadioButton12Click(TObject *Sender)
{
kayit->Items->Clear();
kayit->Items->LoadFromFile("sonuc.txt");
kayit->Items->SaveToFile("yukle/acik.txt");
ShowMessage("RAKAMLAR AÇIK LÝSTESÝNE AKTARILDI DEFTER BÝRLEÞTÝRME ÝÞLEMÝNE BAÞLAYABÝLÝRSÝNÝZ");
RadioButton12->Visible=false;
RadioButton13->Visible=false;
rakambulma->Button4->Visible=true;

}
//---------------------------------------------------------------------------

void __fastcall Tilamatkontrol::RadioButton13Click(TObject *Sender)
{
kayit->Items->Clear();
kayit->Items->LoadFromFile("sonuc.txt");
kayit->Items->SaveToFile("yukle/kapali.txt");
ShowMessage("RAKAMLAR AÇIK LÝSTESÝNE AKTARILDI DEFTER BÝRLEÞTÝRME ÝÞLEMÝNE BAÞLAYABÝLÝRSÝNÝZ");
RadioButton12->Visible=false;
RadioButton13->Visible=false;
rakambulma->Button4->Visible=true;

}
//---------------------------------------------------------------------------

void __fastcall Tilamatkontrol::Button13Click(TObject *Sender)
{
DeleteFileA("kayitli/"+ComboBox6->Text+".txt");
ComboBox6->Items->Delete(ComboBox6->ItemIndex);
ComboBox6->Items->SaveToFile("kayitli/defterler.txt");
ComboBox3->Items->LoadFromFile("kayitli/defterler.txt");
ComboBox6->Text="";
ShowMessage("ÝÞLEM BAÞARIYLA TAMAMLANDI");
baslangic();

}
//---------------------------------------------------------------------------



void __fastcall Tilamatkontrol::RadioButton8Click(TObject *Sender)
{
birlestirlistetemizleme();
ListBox2->Items->LoadFromFile("yukle/acik.txt");
ListBox3->Items->LoadFromFile("defterler/"+ComboBox1->Text+"acik.txt");
ListBox5->Items->LoadFromFile("defterler/"+ComboBox1->Text+"bosnumara.txt");
listesayilari();
}
//---------------------------------------------------------------------------

void __fastcall Tilamatkontrol::RadioButton9Click(TObject *Sender)
{
birlestirlistetemizleme();
ListBox2->Items->LoadFromFile("yukle/kapali.txt");
ListBox3->Items->LoadFromFile("defterler/"+ComboBox1->Text+"kapali.txt");
ListBox5->Items->LoadFromFile("defterler/"+ComboBox1->Text+"bosnumara.txt");
listesayilari();
}
//---------------------------------------------------------------------------

void __fastcall Tilamatkontrol::Button14Click(TObject *Sender)
{
int i,j,sayac;
String a,s;

if(ListBox5->Count<=0)
{
ShowMessage("lütfen defter düzenleme iþlemlerinden iþlem yapýlacak olan ilamat yýlýný seçiniz" );
}
else
{
int i,j;
String a,s;
sayac=ListBox2->Count;
for(i=0;i<=ListBox2->Count-1;i++)
{
sayac=sayac-1;
ilamatkontrol->Caption=sayac;
a=ListBox2->Items->Strings[i];
Application->ProcessMessages();
for(j=0;j<=Aciklistesi->Count-1;j++)
{
s=Aciklistesi->Items->Strings[j];
if(a==s)
{
ListBox4->Items->Add(a);
ListBox2->Items->Strings[i]="kayitli";
j=30000;
}
Application->ProcessMessages();
}
ilamatkontrol->Caption=ListBox2->Count-i;
}
///
sayac=ListBox2->Count;
for(i=0;i<=ListBox2->Count-1;i++)
{
sayac=sayac-1;
ilamatkontrol->Caption=sayac;

a=ListBox2->Items->Strings[i];
Application->ProcessMessages();
for(j=0;j<=Hatalilistesi->Count-1;j++)
{
s=Hatalilistesi->Items->Strings[j];
if(a==s)
{
ListBox4->Items->Add(a);
ListBox2->Items->Strings[i]="kayitli";
j=30000;
}
Application->ProcessMessages();
}
ilamatkontrol->Caption=ListBox2->Count-i;
}
///
sayac=ListBox2->Count;
for(i=0;i<=ListBox2->Count-1;i++)
{
sayac=sayac-1;
ilamatkontrol->Caption=sayac;

a=ListBox2->Items->Strings[i];
Application->ProcessMessages();
for(j=0;j<=Kapalilistesi->Count-1;j++)
{
s=Kapalilistesi->Items->Strings[j];
if(a==s)
{
ListBox4->Items->Add(a);
ListBox2->Items->Strings[i]="kayitli";
j=30000;
}
Application->ProcessMessages();
}
ilamatkontrol->Caption=ListBox2->Count-i;
}
///
sayac=ListBox2->Count;
for(i=0;i<=ListBox2->Count-1;i++)
{
sayac=sayac-1;
ilamatkontrol->Caption=sayac;
if(ListBox2->Items->Strings[i]!="kayitli")
{
a=ListBox2->Items->Strings[i];
for(j=0;j<=ListBox5->Count-1;j++)
{
s=ListBox5->Items->Strings[j];
if(a==s)
{
ListBox3->Items->Add(a);
ListBox5->Items->Strings[j]="silindi";
}
Application->ProcessMessages();
}
}
Application->ProcessMessages();
}
CheckBox1->Visible=true;
CheckBox2->Visible=true;
CheckBox3->Visible=true;


}
listesayilari();
GroupBox20->Visible=true;


}
//---------------------------------------------------------------------------

void __fastcall Tilamatkontrol::CheckBox1Click(TObject *Sender)
{
int sayac;
if(ListBox5->Count>0)
{
if(CheckBox1->Checked==true)
{
int i,j;
String a,s;
sayac=ListBox4->Count;
for(i=0;i<=ListBox4->Count-1;i++)
{
sayac=sayac-1;
ilamatkontrol->Caption=sayac;
a=ListBox4->Items->Strings[i];
Application->ProcessMessages();
for(j=0;j<=ListBox5->Count-1;j++)
{
s=ListBox5->Items->Strings[j];
if(a==s)
{

ListBox3->Items->Strings[i]=s;
ListBox4->Items->Strings[i]="aktarýldý";
ListBox5->Items->Strings[j]="silindi";
j=30000;
}
Application->ProcessMessages();
}
ilamatkontrol->Caption=ListBox3->Count-i;

}
sayac=ListBox5->Count;
for(i=0;i<=ListBox5->Count-1;i++)
{
sayac=sayac-1;
ilamatkontrol->Caption=sayac;

if(ListBox5->Items->Strings[i]!="silindi")
{
a=ListBox5->Items->Strings[i];
ListBox6->Items->Add(a);
}
Application->ProcessMessages();
}
CheckBox1->Enabled=false;
CheckBox2->Enabled=true;

}
}
if(CheckBox1->Checked==true)
{

if(ListBox5->Count<=0)
{
ShowMessage("lütfen defter düzenleme iþlemlerinden iþlem yapýlacak olan ilamat yýlýný seçiniz" );
CheckBox1->Checked=false;
}
}
listesayilari();

}
//---------------------------------------------------------------------------

void __fastcall Tilamatkontrol::CheckBox2Click(TObject *Sender)
{
int sayac;
if(CheckBox1->Checked==true)
{
DynamicArray<int>dizi;
int i,j,adet,deger;
adet=ListBox3->Count;
dizi.Length=adet;
sayac=adet-1;
for(i=0;i<=adet-1;i++)
dizi[i]=StrToFloat(ListBox3->Items->Strings[i]);//random sayýlar diziye aktarýlýyor
for(i=0;i<=adet-1;i++)
{
ilamatkontrol->Caption=sayac-i;
Application->ProcessMessages();
for(j=adet-1;j>i;j--)
{
if(dizi[j-1]>dizi[j])//dizi içinde yer deðiþtirme iþlemleri gerçekleþiyor
{
deger=dizi[j];
dizi[j]=dizi[j-1];
dizi[j-1]=deger;
}
Application->ProcessMessages();
}
ilamatkontrol->Caption=adet-i;
}
ShowMessage("sýralama baþlýyor");
sayac=adet-1;
for(i=0;i<=adet-1;i++)
{
ListBox3->Items->Strings[i]=IntToStr(dizi[i]);
ilamatkontrol->Caption=sayac-i;
Application->ProcessMessages();
}
CheckBox2->Enabled=false;
CheckBox3->Enabled=true;
}
listesayilari();

}
//---------------------------------------------------------------------------

void __fastcall Tilamatkontrol::CheckBox3Click(TObject *Sender)
{
if(CheckBox2->Checked==true)
{

if(ListBox5->Count>0)
{
if(RadioButton8->Checked==true)
{
ListBox4->Items->SaveToFile("yukle/acikhatali.txt");
ListBox3->Items->SaveToFile("defterler/"+ComboBox1->Text+"acik.txt");
ListBox2->Items->Clear();
Aciklistesi->Items->LoadFromFile("defterler/"+ComboBox1->Text+"acik.txt");
ListBox2->Items->Clear();
ListBox3->Items->Clear();
ListBox4->Items->Clear();
ListBox6->Items->SaveToFile("defterler/"+ComboBox1->Text+"bosnumara.txt");
ListBox6->Items->Clear();
ListBox5->Items->Clear();
ListBox3->Items->Clear();
islemsizlistesi->Items->LoadFromFile("defterler/"+ComboBox1->Text+"bosnumara.txt");
}
if(RadioButton9->Checked==true)
{
ListBox4->Items->SaveToFile("yukle/kapalihatali.txt");
ListBox3->Items->SaveToFile("defterler/"+ComboBox1->Text+"kapali.txt");
ListBox2->Items->Clear();
Kapalilistesi->Items->LoadFromFile("defterler/"+ComboBox1->Text+"kapali.txt");
ListBox2->Items->Clear();
ListBox3->Items->Clear();
ListBox4->Items->Clear();
ListBox6->Items->SaveToFile("defterler/"+ComboBox1->Text+"bosnumara.txt");
ListBox6->Items->Clear();
ListBox5->Items->Clear();
ListBox3->Items->Clear();
islemsizlistesi->Items->LoadFromFile("defterler/"+ComboBox1->Text+"bosnumara.txt");

}
}
ShowMessage("ÝÞLEM BAÞARIYLA TAMAMLANDI");

CheckBox1->Enabled=true;
CheckBox3->Enabled=false;
CheckBox2->Enabled=false;
CheckBox1->Checked=false;
CheckBox2->Checked=false;
CheckBox3->Checked=false;
RadioButton8->Checked=false;
RadioButton9->Checked=false;
}
ComboBox1Change(Sender);
listesayilari();
GroupBox20->Visible=false;
}
//---------------------------------------------------------------------------

void __fastcall Tilamatkontrol::Button20Click(TObject *Sender)
{
int x,y,sayac,miktar=0;
Memo4->Lines->Add(ComboBox1->Text+" YILINA AÝT:" );
String hata="";
sayac=Aciklistesi->Count;
for(x=0;x<=Aciklistesi->Count-2;x++)
{
ilamatkontrol->Caption=sayac-x;
if(Aciklistesi->Items->Strings[x]==Aciklistesi->Items->Strings[x+1])
{
hata=hata+Aciklistesi->Items->Strings[x]+" , ";
miktar=miktar+1;
}
ilamatkontrol->Caption=x;
Application->ProcessMessages();
}
Memo4->Lines->Add("Açýk listesinde birden fazla kayýt bulunan ("+IntToStr(miktar)+") ADET ÝLAM=");
Memo4->Lines->Add(hata);
sayac=Kapalilistesi->Count;
miktar=0;
hata="";
for(x=0;x<=Kapalilistesi->Count-2;x++)
{
ilamatkontrol->Caption=sayac-x;
if(Kapalilistesi->Items->Strings[x]==Kapalilistesi->Items->Strings[x+1])
{
hata=hata+Kapalilistesi->Items->Strings[x]+" , ";
miktar=miktar+1;
}
ilamatkontrol->Caption=x;
Application->ProcessMessages();
}
Memo4->Lines->Add("Kapalý listesinde birden fazla kayýt bulunan ("+IntToStr(miktar)+") ADET ÝLAM=");
Memo4->Lines->Add(hata);
hata="";
sayac=islemsizlistesi->Count;
miktar=0;
for(x=0;x<=islemsizlistesi->Count-2;x++)
{
ilamatkontrol->Caption=sayac-x;
if(islemsizlistesi->Items->Strings[x]==islemsizlistesi->Items->Strings[x+1])
{
hata=hata+islemsizlistesi->Items->Strings[x]+" , ";
miktar=miktar+1;
}
ilamatkontrol->Caption=x;
Application->ProcessMessages();
}
Memo4->Lines->Add("Ýþlemsiz listesinde birden fazla kayýt bulunan ("+IntToStr(miktar)+") ADET ÝLAM=");

Memo4->Lines->Add(hata);


sayac=Hatalilistesi->Count;
miktar=0;
hata="";
for(x=0;x<=Hatalilistesi->Count-2;x++)
{
ilamatkontrol->Caption=sayac-x;
if(Hatalilistesi->Items->Strings[x]==Hatalilistesi->Items->Strings[x+1])
{
hata=hata+Hatalilistesi->Items->Strings[x]+" , ";
miktar=miktar+1;
}
ilamatkontrol->Caption=x;
Application->ProcessMessages();
}
Memo4->Lines->Add("Hatalý listesinde birden fazla kayýt bulunan ("+IntToStr(miktar)+") ADET ÝLAM=");
Memo4->Lines->Add(hata);

Memo4->Lines->Add("***************************************************************************************");

}
//---------------------------------------------------------------------------


void __fastcall Tilamatkontrol::Button21Click(TObject *Sender)
{

int miktar=0,i,j,sayac;
String a,s,hata;

//AÇIK-KAPALI LÝSTE KONTROLU
kayit->Items->Clear();
kayit->Items->LoadFromFile("defterler/"+ComboBox1->Text+"kapali.txt");
sayac=Aciklistesi->Count;
Memo4->Lines->Add(ComboBox1->Text+" YILINA AÝT:" );
hata="";
for(i=0;i<=Aciklistesi->Count-1;i++)
{
sayac=sayac-1;
a=Aciklistesi->Items->Strings[i];
Application->ProcessMessages();
for(j=0;j<=kayit->Count-1;j++)
{
ilamatkontrol->Caption=sayac;
s=kayit->Items->Strings[j];
if(StrToInt(s)>StrToInt(a))
{
j=kayit->Count;
}
if(a==s)
{
hata=hata+a+", ";
j=kayit->Count;
miktar=miktar+1;
}
}
Application->ProcessMessages();
}
Memo4->Lines->Add("Açýk listesinde olup ayný zamanda kapalý listesinde olan ("+IntToStr(miktar)+") ADET ÝLAM=");
Memo4->Lines->Add(hata);

//AÇIK-ÝÞLEMSÝZ LÝSTE KONTROLU
kayit->Items->Clear();
kayit->Items->LoadFromFile("defterler/"+ComboBox1->Text+"bosnumara.txt");
sayac=Aciklistesi->Count;
hata="";
miktar=0;
for(i=0;i<=Aciklistesi->Count-1;i++)
{
sayac=sayac-1;
a=Aciklistesi->Items->Strings[i];
Application->ProcessMessages();
for(j=0;j<=kayit->Count-1;j++)
{
ilamatkontrol->Caption=sayac;
s=kayit->Items->Strings[j];
if(StrToInt(s)>StrToInt(a))
{
j=kayit->Count;
}
if(a==s)
{
hata=hata+a+", ";
j=kayit->Count;
miktar=miktar+1;
}
}
Application->ProcessMessages();
}
Memo4->Lines->Add("Açýk listesinde olup ayný zamanda iþlemsiz listesinde olan ("+IntToStr(miktar)+") ADET ÝLAM=");
Memo4->Lines->Add(hata);


//AÇIK-HATALI LÝSTE KONTROLU
kayit->Items->Clear();
kayit->Items->LoadFromFile("defterler/"+ComboBox1->Text+"hatali.txt");
sayac=Aciklistesi->Count;
hata="";
miktar=0;
for(i=0;i<=Aciklistesi->Count-1;i++)
{
sayac=sayac-1;
a=Aciklistesi->Items->Strings[i];
Application->ProcessMessages();
for(j=0;j<=kayit->Count-1;j++)
{
ilamatkontrol->Caption=sayac;
s=kayit->Items->Strings[j];
if(StrToInt(s)>StrToInt(a))
{
j=kayit->Count;
}
if(a==s)
{
hata=hata+a+", ";
j=kayit->Count;
miktar=miktar+1;
}
}
Application->ProcessMessages();
}
Memo4->Lines->Add("Açýk listesinde olup ayný zamanda hatalý listesinde olan ("+IntToStr(miktar)+") ADET ÝLAM=");
Memo4->Lines->Add(hata);



//KAPALI-ÝÞLEMSÝZ LÝSTE KONTROLU
kayit->Items->Clear();
kayit->Items->LoadFromFile("defterler/"+ComboBox1->Text+"bosnumara.txt");
sayac=Kapalilistesi->Count;
hata="";
miktar=0;
for(i=0;i<=Kapalilistesi->Count-1;i++)
{
sayac=sayac-1;
a=Kapalilistesi->Items->Strings[i];
Application->ProcessMessages();
for(j=0;j<=kayit->Count-1;j++)
{
ilamatkontrol->Caption=sayac;
s=kayit->Items->Strings[j];
if(StrToInt(s)>StrToInt(a))
{
j=kayit->Count;
}
if(a==s)
{
hata=hata+a+", ";
j=kayit->Count;
miktar=miktar+1;
}
}
Application->ProcessMessages();
}
Memo4->Lines->Add("Kapalý listesinde olup ayný zamanda iþlemsiz listesinde olan ("+IntToStr(miktar)+") ADET ÝLAM=");

Memo4->Lines->Add(hata);




//KAPALI-HATALI LÝSTE KONTROLU
kayit->Items->Clear();
kayit->Items->LoadFromFile("defterler/"+ComboBox1->Text+"hatali.txt");
sayac=Kapalilistesi->Count;
hata="";
miktar=0;
for(i=0;i<=Kapalilistesi->Count-1;i++)
{
sayac=sayac-1;
a=Kapalilistesi->Items->Strings[i];
Application->ProcessMessages();
for(j=0;j<=kayit->Count-1;j++)
{
ilamatkontrol->Caption=sayac;
s=kayit->Items->Strings[j];
if(StrToInt(s)>StrToInt(a))
{
j=kayit->Count;
}
if(a==s)
{
hata=hata+a+", ";
j=kayit->Count;
miktar=miktar+1;
}
}
Application->ProcessMessages();
}
Memo4->Lines->Add("Kapalý listesinde olup ayný zamanda hatalý listesinde olan ("+IntToStr(miktar)+") ADET ÝLAM=");
Memo4->Lines->Add(hata);



//ÝÞLEMSÝZ-HATALI LÝSTE KONTROLU
kayit->Items->Clear();
kayit->Items->LoadFromFile("defterler/"+ComboBox1->Text+"hatali.txt");
sayac=islemsizlistesi->Count;
hata="";
miktar=0;
for(i=0;i<=islemsizlistesi->Count-1;i++)
{
sayac=sayac-1;
a=islemsizlistesi->Items->Strings[i];
Application->ProcessMessages();
for(j=0;j<=kayit->Count-1;j++)
{
ilamatkontrol->Caption=sayac;
s=kayit->Items->Strings[j];
if(StrToInt(s)>StrToInt(a))
{
j=kayit->Count;
}
if(a==s)
{
hata=hata+a+", ";
j=kayit->Count;
miktar=miktar+1;
}
}
Application->ProcessMessages();
}
Memo4->Lines->Add("Ýþlemsiz listesinde olup ayný zamanda hatalý listesinde olan ("+IntToStr(miktar)+") ADET ÝLAM=");
Memo4->Lines->Add(hata);

Memo4->Lines->Add("***************************************************************************************");

}
//---------------------------------------------------------------------------

void __fastcall Tilamatkontrol::Button22Click(TObject *Sender)
{
int i,j,sonilam,sayac,miktar=0;
String hata="";
kayit->Clear();
sonilam=StrToInt(sonilamno1->Caption);
sayac=sonilam;
for(i=1;i<=sonilam;i++)
{
sayac=sayac-1;
ilamatkontrol->Caption=sayac;
kayit->Items->Add(i);
Application->ProcessMessages();
}

sayac=Aciklistesi->Count;
for(i=0;i<=Aciklistesi->Count-1;i++)
{
sayac=sayac-1;
ilamatkontrol->Caption=sayac;
j=StrToInt(Aciklistesi->Items->Strings[i]);
if(sonilam>=j)
{
kayit->Items->Strings[j-1]="kayitli";

}
Application->ProcessMessages();
}


sayac=Kapalilistesi->Count;
for(i=0;i<=Kapalilistesi->Count-1;i++)
{
sayac=sayac-1;
ilamatkontrol->Caption=sayac;

j=StrToInt(Kapalilistesi->Items->Strings[i]);
if(sonilam>=j)
{
kayit->Items->Strings[j-1]="kayitli";

}
Application->ProcessMessages();
}




sayac=islemsizlistesi->Count;
for(i=0;i<=islemsizlistesi->Count-1;i++)
{
sayac=sayac-1;
ilamatkontrol->Caption=sayac;

j=StrToInt(islemsizlistesi->Items->Strings[i]);
if(sonilam>=j)
{
kayit->Items->Strings[j-1]="kayitli";

}
Application->ProcessMessages();
}



sayac=Hatalilistesi->Count;
for(i=0;i<=Hatalilistesi->Count-1;i++)
{
sayac=sayac-1;
ilamatkontrol->Caption=sayac;

j=StrToInt(Hatalilistesi->Items->Strings[i]);
if(sonilam>=j)
{
kayit->Items->Strings[j-1]="kayitli";

}
Application->ProcessMessages();
}

sayac=kayit->Count;
for(i=0;i<=kayit->Count-1;i++)
{
sayac=sayac-1;
ilamatkontrol->Caption=sayac;
if(kayit->Items->Strings[i]!="kayitli")
{
hata=hata+","+kayit->Items->Strings[i];
miktar=miktar+1;
}
Application->ProcessMessages();
}


Memo4->Lines->Add(ComboBox1->Text+" YILINA AÝT DEFTERDE OLMASI GEREKEN("+miktar+") ADET ÝLAM=");
Memo4->Lines->Add(hata);
Memo4->Lines->Add("***************************************************************************************");
kayit->Clear();
}
//---------------------------------------------------------------------------

void __fastcall Tilamatkontrol::Button15Click(TObject *Sender)
{

if(ComboBox1->ItemIndex!=-1)
{

Memo4->Lines->Clear();
Memo4->Lines->Add("**"+ComboBox1->Text+" DEFTERÝNE AÝT HATALI ÝLAMLAR AÞAÐIDA LÝSTELENMÝÞTÝR**");
Memo4->Lines->Add("***************************************************************************************");
Button20Click(Sender);
Button21Click(Sender);
//Button22Click(Sender);
//Button18Click(Sender);
ilamatkontrol->Caption="HATA RAPORU ÝÞLEMLERÝ BAÞARIYLA TAMAMLANDI";
}
else
{
ShowMessage("LÜTFEN DEFTER DÜZENLEME ÝÞLEMLERÝ SAYFASINDAN ÝÞLEM YAPILACAK ÝLAMAT DEFTERÝNÝ SEÇÝNÝZ");
}

}
//---------------------------------------------------------------------------

void __fastcall Tilamatkontrol::Button16Click(TObject *Sender)
{
             if(Memo4->Text!="")
{
if(yazicii->PrintDialog1->Execute())
{
  int tur=0;
  TPrinter *Prntr = Printer();
  int toplamsatir=Memo4->Lines->Count;
  while(toplamsatir>0)
  {
  Prntr->BeginDoc();
  for( int i = 0; i < 87; i++)
  {
  Prntr->Canvas->TextOut(300,300 + (i *Prntr->Canvas->TextHeight(Memo4->Lines->Strings[i+(87*tur)])),Memo4->Lines->Strings[i+(87*tur)]);
  }
  Prntr->EndDoc();
  toplamsatir-=86;
  tur++;
  }
}
}
else
ShowMessage("YAZDIRILACAK HERHANGÝ BÝR KAYIT BULUNAMADI");

}
//---------------------------------------------------------------------------

void __fastcall Tilamatkontrol::Button17Click(TObject *Sender)
{
if(Edit8->Text!="")
{
ListBox7->Items->Add(Edit8->Text);

ListBox7->Items->SaveToFile("defterler/dipnot.txt");
Edit8->Text="";
ListBox7->Items->SaveToFile("defterler/dipnot.txt");
ShowMessage("KAYIT ÝÞLEMÝ TAMAMLANDI");

}
else
{
ShowMessage("KAYIT EDÝLECEK BÝR BÝLGÝ BULUMADI");
}
Edit8->SetFocus();
}
//---------------------------------------------------------------------------


void __fastcall Tilamatkontrol::Button19Click(TObject *Sender)
{

ListBox7->Items->Delete(ListBox7->ItemIndex);

ListBox7->Items->SaveToFile("defterler/dipnot.txt");

}
//---------------------------------------------------------------------------







void __fastcall Tilamatkontrol::ComboBox3Change(TObject *Sender)
{
ListBox8->Items->Clear();
kayit->Items->Clear();
kayit->Items->LoadFromFile("kayitli/"+ComboBox3->Text+".txt");
kayit->Items->SaveToFile("yukle.txt");
ShowMessage(ComboBox3->Text+" defter sisteme yüklendi hangi listeye yükleyeceðinizi seçiniz");
kayit->Items->Clear();
ListBox8->Items->LoadFromFile("kayitli/"+ComboBox3->Text+".txt");

}
//---------------------------------------------------------------------------

void __fastcall Tilamatkontrol::Button18Click(TObject *Sender)
{
int i,j,sonilam,miktar=0;
String hata="";
kayit->Clear();
sonilam=StrToInt(sonilamno1->Caption);

for(i=0;i<=Aciklistesi->Count-1;i++)
{
j=StrToInt(Aciklistesi->Items->Strings[i]);
if(sonilam<j)
{
hata=hata+","+Aciklistesi->Items->Strings[i];
miktar=miktar+1;
}
Application->ProcessMessages();
}



for(i=0;i<=Kapalilistesi->Count-1;i++)
{
j=StrToInt(Kapalilistesi->Items->Strings[i]);
if(sonilam<j)
{
hata=hata+","+Kapalilistesi->Items->Strings[i];
miktar=miktar+1;
}
}
Application->ProcessMessages();




for(i=0;i<=islemsizlistesi->Count-1;i++)
{
j=StrToInt(islemsizlistesi->Items->Strings[i]);
Application->ProcessMessages();
if(sonilam<j)
{
hata=hata+","+islemsizlistesi->Items->Strings[i];
miktar=miktar+1;
}
}




for(i=0;i<=Hatalilistesi->Count-1;i++)
{
j=StrToInt(Hatalilistesi->Items->Strings[i]);
Application->ProcessMessages();
if(sonilam<j)
{
hata=hata+","+Hatalilistesi->Items->Strings[i];
miktar=miktar+1;
}
}

Memo4->Lines->Add(ComboBox1->Text+" YILINA AÝT DEFTERDE OLMAMASI GEREKEN("+miktar+") ADET ÝLAM=");
Memo4->Lines->Add(hata);
Memo4->Lines->Add("***************************************************************************************");


}
//---------------------------------------------------------------------------


void __fastcall Tilamatkontrol::RadioButton14Click(TObject *Sender)
{
kayit->Items->SaveToFile("yukle/acik.txt");
ShowMessage(ComboBox3->Text+" defter açýk listesine yüklendi");
kayit->Items->Clear();

}
//---------------------------------------------------------------------------

void __fastcall Tilamatkontrol::RadioButton15Click(TObject *Sender)
{
kayit->Items->SaveToFile("yukle/kapali.txt");
ShowMessage(ComboBox3->Text+" defter kapalý listesine yüklendi");
kayit->Items->Clear();

}
//---------------------------------------------------------------------------

void __fastcall Tilamatkontrol::Button23Click(TObject *Sender)
{

Memo1->Lines->Clear();
Memo1->Lines->Add(ComboBox4->Text+" YILI "+ComboBox8->Text+" ÝLE UYAP LÝSTESÝNÝN KARÞILAÞTIRILMASI");
Memo1->Lines->Add("--------------------------------------------------------------------------------------------------");
Button24Click(Sender);
int miktar=0,sayac,i,j;
String a,b,hata;
sayac=defterkarsilastir->Count;
for(i=0;i<=defterkarsilastir->Count-1;i++)
{
ilamatkontrol->Caption=sayac-i;
a=defterkarsilastir->Items->Strings[i];
Application->ProcessMessages();
for(j=0;j<=uyapkarsilastir->Count-1;j++)
{
b=uyapkarsilastir->Items->Strings[j];
if(a==b)
{
defterkarsilastir->Items->Strings[i]="eþlendi";
uyapkarsilastir->Items->Strings[j]="eþlendi";
j=30000;
}
Application->ProcessMessages();
}
}
//hata="DEFTER LÝSTESÝNDE OLUP UYAPTA BULUNMAYAN ÝLAMLAR= ";
sayac=defterkarsilastir->Count;
miktar=0;
for(i=0;i<=defterkarsilastir->Count-1;i++)
{
ilamatkontrol->Caption=sayac-i;
if(defterkarsilastir->Items->Strings[i]!="eþlendi")
{
miktar=miktar+1;
hata=hata+","+defterkarsilastir->Items->Strings[i];
}
Application->ProcessMessages();
}
Memo1->Lines->Add("DEFTER LÝSTESÝNDE OLUP UYAPTA BULUNMAYAN("+IntToStr(miktar)+") ADET ÝLAM=");
Memo1->Lines->Add(hata);
Memo1->Lines->Add("*******************************************************");
//hata="UYAP LÝSTESÝNDE OLUP DEFTERDE BULUNMAYAN ÝLAMLAR= ";
sayac=uyapkarsilastir->Count;
miktar=0;
for(i=0;i<=uyapkarsilastir->Count-1;i++)
{
ilamatkontrol->Caption=sayac-i;
if(uyapkarsilastir->Items->Strings[i]!="eþlendi")
{
hata=hata+","+uyapkarsilastir->Items->Strings[i];
miktar=miktar+1;
}
Application->ProcessMessages();
}
Memo1->Lines->Add("UYAP LÝSTESÝNDE OLUP DEFTER LÝSTESÝNDE BULUNMAYAN("+IntToStr(miktar)+") ADET ÝLAM=");
Memo1->Lines->Add(hata);
Memo1->Lines->Add("*******************************************************");


}
//---------------------------------------------------------------------------

void __fastcall Tilamatkontrol::boslukayariChange(TObject *Sender)
{
Label50->Caption=boslukayari->Position;
}
//---------------------------------------------------------------------------


void __fastcall Tilamatkontrol::ComboBox8Change(TObject *Sender)
{
if(ComboBox8->ItemIndex==0)
defterkarsilastir->Items->LoadFromFile("defterler/"+ComboBox4->Text+"acik.txt");
if(ComboBox8->ItemIndex==1)
defterkarsilastir->Items->LoadFromFile("defterler/"+ComboBox4->Text+"kapali.txt");
if(ComboBox8->ItemIndex==2)
defterkarsilastir->Items->LoadFromFile("defterler/"+ComboBox4->Text+"bosnumara.txt");
if(ComboBox8->ItemIndex==3)
defterkarsilastir->Items->LoadFromFile("defterler/"+ComboBox4->Text+"hatali.txt");
Label54->Caption=defterkarsilastir->Count;
Label56->Caption=uyapkarsilastir->Count;

}
//---------------------------------------------------------------------------

void __fastcall Tilamatkontrol::ComboBox4Change(TObject *Sender)
{
ComboBox8->ItemIndex=-1;
ComboBox8->Text="LÝSTE TÜRÜ SEÇ";
defterkarsilastir->Items->Clear();
ComboBox8->Visible=true;
}
//---------------------------------------------------------------------------


void __fastcall Tilamatkontrol::ComboBox7Change(TObject *Sender)
{
uyapkarsilastir->Items->Clear();
uyapkarsilastir->Items->LoadFromFile("kayitli/"+ComboBox7->Text+".txt");
Label54->Caption=defterkarsilastir->Count;
Label56->Caption=uyapkarsilastir->Count;

}
//---------------------------------------------------------------------------




void __fastcall Tilamatkontrol::Button24Click(TObject *Sender)
{

int x,y,sayac,miktar=0;
String hata="";
sayac=defterkarsilastir->Count;
for(x=0;x<=defterkarsilastir->Count-2;x++)
{
ilamatkontrol->Caption=sayac-x;
if(defterkarsilastir->Items->Strings[x]==defterkarsilastir->Items->Strings[x+1])
{
hata=hata+defterkarsilastir->Items->Strings[x]+" , ";
miktar=miktar+1;
}
ilamatkontrol->Caption=x;
Application->ProcessMessages();
}
Memo1->Lines->Add("DEFTERÝNÝZDE BÝRDEN FAZLA KAYIT BULUNAN("+IntToStr(miktar)+") ADET ÝLAM=");
Memo1->Lines->Add(hata);
Memo1->Lines->Add("*******************************************************");

//hata="UYAP LÝSTESÝNDE BÝRDEN FAZLA KAYIT BULUNAN ÝLAM NUMARALARI  =";
sayac=uyapkarsilastir->Count;
miktar=0;
for(x=0;x<=uyapkarsilastir->Count-2;x++)
{
ilamatkontrol->Caption=sayac-x;
if(uyapkarsilastir->Items->Strings[x]==uyapkarsilastir->Items->Strings[x+1])
{
hata=hata+uyapkarsilastir->Items->Strings[x]+" , ";
miktar=miktar+1;
}
ilamatkontrol->Caption=x;
Application->ProcessMessages();
}
Memo1->Lines->Add("UYAP LÝSTESÝNDE BÝRDEN FAZLA KAYIT BULUNAN("+IntToStr(miktar)+") ADET ÝLAM=");
Memo1->Lines->Add(hata);
Memo1->Lines->Add("*******************************************************");


}
//---------------------------------------------------------------------------

void __fastcall Tilamatkontrol::Button25Click(TObject *Sender)
{
             if(Memo1->Text!="")
{
if(yazicii->PrintDialog1->Execute())
{
  int tur=0;
  TPrinter *Prntr = Printer();
  int toplamsatir=Memo1->Lines->Count;
  while(toplamsatir>0)
  {
  Prntr->BeginDoc();
  for( int i = 0; i < 87; i++)
  {
  Prntr->Canvas->TextOut(300,300 + (i *Prntr->Canvas->TextHeight(Memo1->Lines->Strings[i+(87*tur)])),Memo1->Lines->Strings[i+(87*tur)]);
  }
  Prntr->EndDoc();
  toplamsatir-=86;
  tur++;
  }
}
}
else
ShowMessage("YAZDIRILACAK HERHANGÝ BÝR KAYIT BULUNAMADI");
}
//---------------------------------------------------------------------------

void __fastcall Tilamatkontrol::Image1DragDrop(TObject *Sender,
      TObject *Source, int X, int Y)
{
String ekle;
AnsiString secim;
secim=InputBox("ÝLAMAT SÝLME ÝÞLEMÝ","KÜÇÜK HARFLERLE ÞÝFREYÝ GÝRÝNÝZ=","");
if(Source==Kapalilistesi)
{
if(secim=="infaz")
{
ShowMessage(ComboBox1->Text+"/2-"+Kapalilistesi->Items->Strings[Kapalilistesi->ItemIndex]+" ilamat numarasý baþarýyla silindi");
ilamatkontrol->Caption=ComboBox1->Text+tire->Text+Kapalilistesi->Items->Strings[Kapalilistesi->ItemIndex]+" sayýlý ilam baþarýyla kapali listesinden silindi";
Kapalilistesi->Items->Delete(Kapalilistesi->ItemIndex );

}
else
ShowMessage("hatalý þifre girdiniz lütfen tekrar deneyiniz");
}
if(Source==Aciklistesi)
{
if(secim=="infaz")
{
ShowMessage(ComboBox1->Text+"/2-"+Aciklistesi->Items->Strings[Aciklistesi->ItemIndex]+" ilamat numarasý baþarýyla silindi");
ilamatkontrol->Caption=ComboBox1->Text+tire->Text+Aciklistesi->Items->Strings[Aciklistesi->ItemIndex]+" sayýlý ilam baþarýyla acýk listesinden silindi";
Aciklistesi->Items->Delete(Aciklistesi->ItemIndex );
}
else
ShowMessage("hatalý þifre girdiniz lütfen tekrar deneyiniz");

}
if(Source==Hatalilistesi)
{
if(secim=="infaz")
{
ShowMessage(ComboBox1->Text+"/2-"+Hatalilistesi->Items->Strings[Hatalilistesi->ItemIndex]+" ilamat numarasý baþarýyla silindi");
ilamatkontrol->Caption=ComboBox1->Text+tire->Text+Hatalilistesi->Items->Strings[Hatalilistesi->ItemIndex]+" sayýlý ilam baþarýyla hatalý listesinden silindi";
Hatalilistesi->Items->Delete(Hatalilistesi->ItemIndex );
}
else
ShowMessage("hatalý þifre girdiniz lütfen tekrar deneyiniz");

}
if(Source==islemsizlistesi)
{
if(secim=="infaz")
{
ShowMessage(ComboBox1->Text+"/2-"+islemsizlistesi->Items->Strings[islemsizlistesi->ItemIndex]+" ilamat numarasý baþarýyla silindi");
ilamatkontrol->Caption=ComboBox1->Text+tire->Text+islemsizlistesi->Items->Strings[islemsizlistesi->ItemIndex]+" sayýlý ilam baþarýyla iþlemsiz listesinden silindi";
islemsizlistesi->Items->Delete(islemsizlistesi->ItemIndex );
}
else
ShowMessage("hatalý þifre girdiniz lütfen tekrar deneyiniz");

}

listesayilari();
defterlerikaydet();
listeindeksleri();
}
//---------------------------------------------------------------------------

void __fastcall Tilamatkontrol::Image1DragOver(TObject *Sender,
      TObject *Source, int X, int Y, TDragState State, bool &Accept)
{
if(Source==Kapalilistesi)
{
Accept=true;
}
if(Source==islemsizlistesi)
{
Accept=true;
}
if(Source==Hatalilistesi)
{
Accept=true;
}
if(Source==Aciklistesi)
{
Accept=true;
}
}
//---------------------------------------------------------------------------


void __fastcall Tilamatkontrol::Button26Click(TObject *Sender)
{
AnsiString secim;
secim=InputBox("ÝLAMAT SÝLME ÝÞLEMÝ","KÜÇÜK HARFLERLE ÞÝFREYÝ GÝRÝNÝZ=","");
if(secim=="infaz")
{
fabrikaayarlari();
ShowMessage("FABRÝKA AYARLARI BAÞARIYLA YÜKLENDÝ");
ilamatkontrol->Caption="Fabrika Ayarlarý Baþarýyla Yüklendi";
}
}
//---------------------------------------------------------------------------


void __fastcall Tilamatkontrol::Button27Click(TObject *Sender)
{
AnsiString secim;
secim=InputBox("ÝLAMAT SÝLME ÝÞLEMÝ","KÜÇÜK HARFLERLE ÞÝFREYÝ GÝRÝNÝZ=","");
if(secim=="infaz")
{
int dongudencik=300000,sira=-1,i,ekle; //deðiþken ranýmý

ekle=StrToInt(Edit9->Text);
if(ekle>StrToInt(sonilamno1->Caption))
{
kayit->Clear();
kayit->Items->Add(ekle);
kayit->Items->SaveToFile("defterler/"+ComboBox1->Text+"sonilamatno.txt");
}
for(i=0;i<=islemsizlistesi->Count-1;i++)
{
if(StrToInt(islemsizlistesi->Items->Strings[i])>ekle)
{
sira=i;
i=dongudencik;
}
}
if(sira==-1)
{
islemsizlistesi->Items->Insert(islemsizlistesi->Count,ekle);
}
if(sira!=-1)
{
islemsizlistesi->Items->Insert(sira,ekle);
}
Edit9->Text="";
defterlerikaydet();
listesayilari();
}
}
//---------------------------------------------------------------------------




void __fastcall Tilamatkontrol::Button28Click(TObject *Sender)
{
AnsiString secim;
secim=InputBox("ÝLAMAT SÝLME ÝÞLEMÝ","KÜÇÜK HARFLERLE ÞÝFREYÝ GÝRÝNÝZ=","");
if(secim=="infaz")
{
kayit->Clear();
kayit->Items->Add(tire->Text);
kayit->Items->SaveToFile("defterler/ilamattire.txt");
ShowMessage("Ýþlem Baþarýyla gerçekleþtirildi");
}
}
//---------------------------------------------------------------------------






void __fastcall Tilamatkontrol::Button30Click(TObject *Sender)
{
fazlakayitsil->Items->Clear();
int x,j;
for(x=0;x<=Aciklistesi->Count-2;x++)
{
ilamatkontrol->Caption=x;
if(Aciklistesi->Items->Strings[x]==Aciklistesi->Items->Strings[x+1])
{
fazlakayitsil->Items->Add(Aciklistesi->Items->Strings[x]);
}
ilamatkontrol->Caption=x;
Application->ProcessMessages();
}
Label59->Caption=fazlakayitsil->Count;
for(x=0;x<=fazlakayitsil->Count-1;x++)
{
ilamatkontrol->Caption=x;
for(j=0;j<=Aciklistesi->Count-1;j++)
{
if(fazlakayitsil->Items->Strings[x]==Aciklistesi->Items->Strings[j])
{
Aciklistesi->Items->Delete(j);
j=100000;
}
}
Application->ProcessMessages();
}
Label60->Caption=Aciklistesi->Count;
listesayilari();
defterlerikaydet();

}
//---------------------------------------------------------------------------






void __fastcall Tilamatkontrol::Button32Click(TObject *Sender)
{
ListBox12->Items->Clear();
kayit->Items->Clear();
kayit->Items->LoadFromFile("defterler/bagcilarzeytinburnu.txt");
Edit10->Text=kayit->Items->Strings[0];
Edit11->Text=kayit->Items->Strings[1];
int cikan=0,i,sayac=0,geneltop=0;
ListBox9->Items->LoadFromFile("defterler/yillar.txt");
Label63->Caption=ListBox9->Count;
for(i=0;i<=StrToInt(Label63->Caption)-1;i++)
{
ListBox11->Items->Add("=");
ComboBox1->Text=ListBox9->Items->Strings[i];
ComboBox1Change(Sender);
sayac=sayac+StrToInt(islemsizsayisi->Caption);
}
ListBox12->Items->Add("AÇIK ÝLAM  SAYISI="+IntToStr(sayac));
geneltop=geneltop+sayac;
sayac=0;
Label63->Caption=ListBox9->Count;
for(i=0;i<=StrToInt(Label63->Caption)-1;i++)
{
ListBox11->Items->Add("=");
ComboBox1->Text=ListBox9->Items->Strings[i];
ComboBox1Change(Sender);
sayac=sayac+StrToInt(aciksayisi->Caption);
}
ListBox12->Items->Add("TOPLAM AÇIK SAYISI="+IntToStr(sayac));
geneltop=geneltop+sayac;

sayac=0;
Label63->Caption=ListBox9->Count;
for(i=0;i<=StrToInt(Label63->Caption)-1;i++)
{
ListBox11->Items->Add("=");
ComboBox1->Text=ListBox9->Items->Strings[i];
ComboBox1Change(Sender);
sayac=sayac+StrToInt(kapalisayisi->Caption);
}
ListBox12->Items->Add("ÇIKAN SAYISI="+IntToStr(sayac));
geneltop=geneltop+sayac;
cikan=sayac;
sayac=0;
Label63->Caption=ListBox9->Count;
for(i=0;i<=StrToInt(Label63->Caption)-1;i++)
{
ListBox11->Items->Add("=");
ComboBox1->Text=ListBox9->Items->Strings[i];
ComboBox1Change(Sender);
sayac=sayac+StrToInt(hatalisayisi->Caption);
}
ListBox12->Items->Add("TOPLAM HATALI SAYISI="+IntToStr(sayac));
geneltop=geneltop+sayac;
ListBox12->Items->Add("BAÐCILAR AÇIK SAYISI="+Edit10->Text);
ListBox12->Items->Add("ZEYTÝNBURNU AÇIK SAYISI="+Edit11->Text);
geneltop=geneltop+StrToInt(Edit11->Text);
geneltop=geneltop+StrToInt(Edit10->Text);

ListBox12->Items->Add("TOPLAM ="+IntToStr(geneltop));
ListBox12->Items->Add("KALAN ="+IntToStr(geneltop-cikan));



}
//---------------------------------------------------------------------------


void __fastcall Tilamatkontrol::Button33Click(TObject *Sender)
{
kayit->Items->Clear();
kayit->Items->Add(Edit10->Text);
kayit->Items->Add(Edit11->Text);
kayit->Items->SaveToFile("defterler/bagcilarzeytinburnu.txt");
kayit->Items->Clear();        
}
//---------------------------------------------------------------------------

