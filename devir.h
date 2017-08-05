//---------------------------------------------------------------------------

#ifndef devirH
#define devirH
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <ComCtrls.hpp>
#include <ExtCtrls.hpp>
#include <jpeg.hpp>
//---------------------------------------------------------------------------
class Tilamatkontrol : public TForm
{
__published:	// IDE-managed Components
        TPageControl *PageControl1;
        TTabSheet *TabSheet1;
        TGroupBox *GroupBox1;
        TLabel *Label1;
        TLabel *Label2;
        TEdit *Edit1;
        TEdit *Edit2;
        TButton *Button1;
        TTabSheet *TabSheet2;
        TGroupBox *GroupBox2;
        TLabel *Label3;
        TLabel *Label4;
        TComboBox *ComboBox1;
        TEdit *Verigirisi;
        TRadioButton *manuelgiris;
        TRadioButton *otomatikgiris;
        TGroupBox *GroupBox3;
        TListBox *Aciklistesi;
        TListBox *Kapalilistesi;
        TListBox *islemsizlistesi;
        TListBox *Hatalilistesi;
        TLabel *Label5;
        TLabel *Label6;
        TLabel *Label7;
        TLabel *Label8;
        TGroupBox *GroupBox4;
        TEdit *aranacakdeger;
        TLabel *Label9;
        TButton *Button2;
        TListBox *kayit;
        TButton *Acik;
        TButton *kapali;
        TLabel *aciksayisi;
        TLabel *kapalisayisi;
        TLabel *islemsizsayisi;
        TLabel *hatalisayisi;
        TLabel *Label10;
        TLabel *Label11;
        TLabel *Label12;
        TLabel *Label13;
        TTabSheet *TabSheet3;
        TTabSheet *TabSheet4;
        TGroupBox *GroupBox5;
        TGroupBox *GroupBox6;
        TComboBox *ComboBox2;
        TComboBox *raporturu;
        TMemo *yazialani;
        TGroupBox *GroupBox7;
        TButton *Button3;
        TButton *Button4;
        TGroupBox *GroupBox8;
        TTrackBar *satirayari;
        TLabel *satirsayisi;
        TButton *Button5;
        TLabel *Label15;
        TLabel *Label16;
        TComboBox *uzanti;
        TLabel *Label14;
        TLabel *Label17;
        TComboBox *deftersil;
        TButton *silbutonu;
        TGroupBox *TabSheet5;
        TGroupBox *GroupBox9;
        TLabel *Label18;
        TLabel *sonilamno1;
        TLabel *Label20;
        TEdit *Edit3;
        TButton *Button7;
        TButton *Button8;
        TRadioButton *RadioButton1;
        TGroupBox *GroupBox10;
        TLabel *Label21;
        TLabel *Label22;
        TEdit *Edit4;
        TEdit *Edit5;
        TButton *Button9;
        TLabel *sonilamno2;
        TGroupBox *GroupBox11;
        TLabel *Label24;
        TLabel *Label25;
        TComboBox *kisayolacik;
        TComboBox *kisayolkapali;
        TGroupBox *GroupBox12;
        TRadioButton *RadioButton2;
        TRadioButton *RadioButton3;
        TRadioButton *RadioButton4;
        TRadioButton *RadioButton5;
        TRadioButton *RadioButton6;
        TGroupBox *GroupBox13;
        TLabel *Label26;
        TComboBox *ComboBox5;
        TLabel *Label27;
        TListBox *ListBox1;
        TLabel *Label28;
        TEdit *Edit6;
        TButton *birlestirbutonu;
        TButton *Button11;
        TLabel *silinecekdeftersirasi;
        TLabel *Label19;
        TTabSheet *TabSheet6;
        TGroupBox *GroupBox14;
        TGroupBox *GroupBox15;
        TGroupBox *GroupBox16;
        TGroupBox *GroupBox17;
        TGroupBox *GroupBox18;
        TButton *Button6;
        TButton *Button10;
        TEdit *Edit7;
        TButton *Button12;
        TComboBox *ComboBox3;
        TComboBox *ComboBox6;
        TButton *Button13;
        TTabSheet *TabSheet7;
        TTabSheet *TabSheet8;
        TMemo *Memo4;
        TButton *Button15;
        TButton *Button16;
        TTabSheet *TabSheet9;
        TButton *Button19;
        TRadioButton *RadioButton10;
        TRadioButton *RadioButton11;
        TRadioButton *RadioButton12;
        TRadioButton *RadioButton13;
        TGroupBox *GroupBox19;
        TRadioButton *RadioButton8;
        TRadioButton *RadioButton9;
        TGroupBox *GroupBox20;
        TCheckBox *CheckBox1;
        TCheckBox *CheckBox2;
        TCheckBox *CheckBox3;
        TButton *Button20;
        TButton *Button21;
        TButton *Button22;
        TListBox *ListBox7;
        TGroupBox *GroupBox21;
        TListBox *ListBox2;
        TButton *Button14;
        TListBox *ListBox3;
        TListBox *ListBox4;
        TListBox *ListBox5;
        TListBox *ListBox6;
        TLabel *Label29;
        TLabel *Label30;
        TLabel *Label31;
        TGroupBox *GroupBox22;
        TEdit *Edit8;
        TButton *Button17;
        TLabel *Label32;
        TLabel *Label33;
        TLabel *Label34;
        TLabel *Label35;
        TLabel *Label36;
        TLabel *Label37;
        TLabel *Label38;
        TLabel *Label39;
        TLabel *Label40;
        TLabel *Label41;
        TButton *Button18;
        TGroupBox *GroupBox23;
        TLabel *Label23;
        TListBox *ListBox8;
        TLabel *Label42;
        TLabel *Label43;
        TLabel *Label44;
        TLabel *Label45;
        TLabel *Label46;
        TRadioButton *RadioButton14;
        TRadioButton *RadioButton15;
        TTabSheet *TabSheet10;
        TGroupBox *GroupBox24;
        TListBox *defterkarsilastir;
        TListBox *uyapkarsilastir;
        TButton *Button23;
        TMemo *Memo1;
        TGroupBox *GroupBox25;
        TTrackBar *boslukayari;
        TLabel *Label49;
        TLabel *Label50;
        TGroupBox *GroupBox26;
        TComboBox *ComboBox4;
        TComboBox *ComboBox8;
        TGroupBox *GroupBox27;
        TComboBox *ComboBox7;
        TButton *Button24;
        TButton *Button25;
        TGroupBox *GroupBox28;
        TLabel *Label47;
        TImage *Image1;
        TGroupBox *GroupBox29;
        TButton *Button26;
        TGroupBox *GroupBox30;
        TEdit *Edit9;
        TButton *Button27;
        TLabel *Label48;
        TGroupBox *GroupBox31;
        TLabel *Label51;
        TEdit *tire;
        TButton *Button28;
        TLabel *Label52;
        TLabel *Label54;
        TLabel *Label55;
        TLabel *Label56;
        TLabel *Label57;
        TLabel *Label53;
        TLabel *Label58;
        TButton *Button29;
        TButton *Button30;
        TListBox *fazlakayitsil;
        TLabel *Label59;
        TLabel *Label60;
        TTabSheet *TabSheet11;
        TGroupBox *GroupBox32;
        TListBox *ListBox9;
        TButton *Button31;
        TListBox *ListBox10;
        TLabel *Label62;
        TLabel *Label61;
        TListBox *ListBox11;
        TButton *Button32;
        TLabel *Label63;
        TLabel *Label64;
        TListBox *ListBox12;
        TLabel *Label65;
        TLabel *Label66;
        TEdit *Edit10;
        TEdit *Edit11;
        TButton *Button33;
        void __fastcall Button1Click(TObject *Sender);
        void __fastcall ComboBox1Change(TObject *Sender);
        void __fastcall AciklistesiDragDrop(TObject *Sender,
          TObject *Source, int X, int Y);
        void __fastcall KapalilistesiDragDrop(TObject *Sender,
          TObject *Source, int X, int Y);
        void __fastcall islemsizlistesiDragDrop(TObject *Sender,
          TObject *Source, int X, int Y);
        void __fastcall HatalilistesiDragDrop(TObject *Sender,
          TObject *Source, int X, int Y);
        void __fastcall AciklistesiDragOver(TObject *Sender,
          TObject *Source, int X, int Y, TDragState State, bool &Accept);
        void __fastcall KapalilistesiDragOver(TObject *Sender,
          TObject *Source, int X, int Y, TDragState State, bool &Accept);
        void __fastcall islemsizlistesiDragOver(TObject *Sender,
          TObject *Source, int X, int Y, TDragState State, bool &Accept);
        void __fastcall HatalilistesiDragOver(TObject *Sender,
          TObject *Source, int X, int Y, TDragState State, bool &Accept);
        void __fastcall AcikClick(TObject *Sender);
        void __fastcall otomatikgirisClick(TObject *Sender);
        void __fastcall manuelgirisClick(TObject *Sender);
        void __fastcall kapaliClick(TObject *Sender);
        void __fastcall FormActivate(TObject *Sender);
        void __fastcall Button2Click(TObject *Sender);
        void __fastcall Button5Click(TObject *Sender);
        void __fastcall satirayariChange(TObject *Sender);
        void __fastcall ComboBox2Change(TObject *Sender);
        void __fastcall Button3Click(TObject *Sender);
        void __fastcall Button4Click(TObject *Sender);
        void __fastcall raporturuChange(TObject *Sender);
        void __fastcall silbutonuClick(TObject *Sender);
        void __fastcall deftersilChange(TObject *Sender);
        void __fastcall RadioButton1Click(TObject *Sender);
        void __fastcall Button7Click(TObject *Sender);
        void __fastcall Button8Click(TObject *Sender);
        void __fastcall Button9Click(TObject *Sender);
        void __fastcall RadioButton2Click(TObject *Sender);
        void __fastcall RadioButton3Click(TObject *Sender);
        void __fastcall RadioButton4Click(TObject *Sender);
        void __fastcall RadioButton5Click(TObject *Sender);
        void __fastcall RadioButton6Click(TObject *Sender);
        void __fastcall ComboBox5Change(TObject *Sender);
        void __fastcall birlestirbutonuClick(TObject *Sender);
        void __fastcall VerigirisiChange(TObject *Sender);
        void __fastcall kisayolacikChange(TObject *Sender);
        void __fastcall kisayolkapaliChange(TObject *Sender);
        void __fastcall Button6Click(TObject *Sender);
        void __fastcall RadioButton10Click(TObject *Sender);
        void __fastcall RadioButton11Click(TObject *Sender);
        void __fastcall Button10Click(TObject *Sender);
        void __fastcall Button12Click(TObject *Sender);
        void __fastcall RadioButton12Click(TObject *Sender);
        void __fastcall RadioButton13Click(TObject *Sender);
        void __fastcall Button13Click(TObject *Sender);
        void __fastcall RadioButton8Click(TObject *Sender);
        void __fastcall RadioButton9Click(TObject *Sender);
        void __fastcall Button14Click(TObject *Sender);
        void __fastcall CheckBox1Click(TObject *Sender);
        void __fastcall CheckBox2Click(TObject *Sender);
        void __fastcall CheckBox3Click(TObject *Sender);
        void __fastcall Button20Click(TObject *Sender);
        void __fastcall Button21Click(TObject *Sender);
        void __fastcall Button22Click(TObject *Sender);
        void __fastcall Button15Click(TObject *Sender);
        void __fastcall Button16Click(TObject *Sender);
        void __fastcall Button17Click(TObject *Sender);
        void __fastcall Button19Click(TObject *Sender);
        void __fastcall ComboBox3Change(TObject *Sender);
        void __fastcall Button18Click(TObject *Sender);
        void __fastcall RadioButton14Click(TObject *Sender);
        void __fastcall RadioButton15Click(TObject *Sender);
        void __fastcall Button23Click(TObject *Sender);
        void __fastcall boslukayariChange(TObject *Sender);
        void __fastcall ComboBox8Change(TObject *Sender);
        void __fastcall ComboBox4Change(TObject *Sender);
        void __fastcall ComboBox7Change(TObject *Sender);
        void __fastcall Button24Click(TObject *Sender);
        void __fastcall Button25Click(TObject *Sender);
        void __fastcall Image1DragDrop(TObject *Sender, TObject *Source,
          int X, int Y);
        void __fastcall Image1DragOver(TObject *Sender, TObject *Source,
          int X, int Y, TDragState State, bool &Accept);
        void __fastcall Button26Click(TObject *Sender);
        void __fastcall Button27Click(TObject *Sender);
        void __fastcall Button28Click(TObject *Sender);
        void __fastcall Button30Click(TObject *Sender);
        void __fastcall Button32Click(TObject *Sender);
        void __fastcall Button33Click(TObject *Sender);
private:	// User declarations
public:		// User declarations
void defterkontrol()//listedeki ilam sayýlarýný belirtiyor
{
if(ComboBox1->Text=="DEFTER SEÇ")
{
ShowMessage("LÜTFEN ÝÞLEM YAPACAÐINIZ DEFTERÝ SEÇÝNÝZ");
baslangic();
}
}
void listesayilari()//listedeki ilam sayýlarýný belirtiyor
{
aciksayisi->Caption=Aciklistesi->Count;
kapalisayisi->Caption=Kapalilistesi->Count;
islemsizsayisi->Caption=islemsizlistesi->Count;
hatalisayisi->Caption=Hatalilistesi->Count;
Label32->Caption=ListBox2->Count;
Label33->Caption=ListBox3->Count;
Label34->Caption=ListBox4->Count;
Label35->Caption=ListBox5->Count;
Label36->Caption=ListBox6->Count;
}
void birlestirlistetemizleme()
{
ListBox3->Items->Clear();
ListBox2->Items->Clear();
ListBox4->Items->Clear();
ListBox5->Items->Clear();
ListBox6->Items->Clear();
}
void listetemizleme()
{
Aciklistesi->Items->Clear();
Kapalilistesi->Items->Clear();
islemsizlistesi->Items->Clear();
Hatalilistesi->Items->Clear();
}
void defterleriyukle()//sisteme defterleri yükleme
{
Aciklistesi->Items->LoadFromFile("defterler/"+ComboBox1->Text+"acik.txt");
Kapalilistesi->Items->LoadFromFile("defterler/"+ComboBox1->Text+"kapali.txt");
islemsizlistesi->Items->LoadFromFile("defterler/"+ComboBox1->Text+"bosnumara.txt");
Hatalilistesi->Items->LoadFromFile("defterler/"+ComboBox1->Text+"hatali.txt");
kayit->Items->LoadFromFile("defterler/"+ComboBox1->Text+"sonilamatno.txt");
sonilamno1->Caption=kayit->Items->Strings[0];
sonilamno2->Caption=kayit->Items->Strings[0];
kayit->Items->Clear();
Verigirisi->Text="";
otomatikgiris->Checked=false;
manuelgiris->Checked=false;
Verigirisi->Color=clWhite;
manuelgiris->Visible=false;
}
void defterlerikaydet()//sistemden defterleri kaydet
{
Aciklistesi->Items->SaveToFile("defterler/"+ComboBox1->Text+"acik.txt");
Kapalilistesi->Items->SaveToFile("defterler/"+ComboBox1->Text+"kapali.txt");
islemsizlistesi->Items->SaveToFile("defterler/"+ComboBox1->Text+"bosnumara.txt");
Hatalilistesi->Items->SaveToFile("defterler/"+ComboBox1->Text+"hatali.txt");
}
void defterlerisil()//sistemden defterleri silme
{
DeleteFileA("defterler/"+deftersil->Text+"bosnumara.txt");
DeleteFileA("defterler/"+deftersil->Text+"acik.txt");
DeleteFileA("defterler/"+deftersil->Text+"kapali.txt");
DeleteFileA("defterler/"+deftersil->Text+"ilamat.txt");
DeleteFileA("defterler/"+deftersil->Text+"hatali.txt");
DeleteFileA("defterler/"+deftersil->Text+"sonilamatno.txt");

}
void fabrikaayarlari()//baþlangýç ayarlarý
{
int i;
for(i=0;i<=deftersil->Items->Count-1;i++)
{
deftersil->ItemIndex=i;
defterlerisil();
}
for(i=0;i<=ComboBox6->Items->Count-1;i++)
{
ComboBox6->ItemIndex=i;
DeleteFileA("kayitli/"+ComboBox6->Items->Strings[i]+".txt");
}

CopyFileA("gerekli dosyalar/yillar.txt","defterler/yillar.txt",false);
CopyFileA("gerekli dosyalar/ilamattire.txt","defterler/ilamattire.txt",false);
CopyFileA("gerekli dosyalar/dipnot.txt","defterler/dipnot.txt",false);
CopyFileA("gerekli dosyalar/dipnotlarim.txt","defterler/dipnotlarim.txt",false);
CopyFileA("gerekli dosyalar/kisayolkutusu.txt","defterler/kisayolkutusu.txt",false);
CopyFileA("gerekli dosyalar/defterler.txt","kayitli/defterler.txt",false);
CopyFileA("gerekli dosyalar/gunluk.txt","kayitli/gunluk.txt",false);
CopyFileA("gerekli dosyalar/acik.txt","yukle/acik.txt",false);
CopyFileA("gerekli dosyalar/acikhatali.txt","yukle/acikhatali.txt",false);
CopyFileA("gerekli dosyalar/kapali.txt","yukle/kapali.txt",false);
CopyFileA("gerekli dosyalar/kapalihatali.txt","yukle/kapalihatali.txt",false);
CopyFileA("gerekli dosyalar/ilamat.txt","yukle/ilamat.txt",false);
CopyFileA("gerekli dosyalar/statu.txt","yukle/statu.txt",false);
CopyFileA("gerekli dosyalar/yukle.txt","yukle.txt",false);
CopyFileA("gerekli dosyalar/sonuc.txt","sonuc.txt",false);
CopyFileA("gerekli dosyalar/images.jpeg","images.jpeg",false);
baslangic();
}

void baslangic()//baþlangýç ayarlarý
{
kayit->Clear();
kayit->Items->LoadFromFile("defterler/ilamattire.txt");
tire->Text=kayit->Items->Strings[0];
kayit->Clear();
ComboBox6->Items->LoadFromFile("kayitli/defterler.txt");
ComboBox3->Items->LoadFromFile("kayitli/defterler.txt");
ComboBox1->Items->LoadFromFile("defterler/yillar.txt");
ComboBox2->Items->LoadFromFile("defterler/yillar.txt");
ComboBox5->Items->LoadFromFile("defterler/yillar.txt");
deftersil->Items->LoadFromFile("defterler/yillar.txt");
ComboBox4->Items->LoadFromFile("defterler/yillar.txt");
ComboBox7->Items->LoadFromFile("kayitli/defterler.txt");
listesayilari();
ComboBox1->Text="DEFTER SEÇ";
ComboBox2->Text="DEFTER SEÇ";
ComboBox1->ItemIndex=-1;
ComboBox2->ItemIndex=-1;
kayit->Clear();
kayit->Items->LoadFromFile("defterler/kisayoltusu.txt");
kisayolacik->Text=kayit->Items->Strings[0];
kisayolkapali->Text=kayit->Items->Strings[1];
kayit->Clear();
Edit1->Text="";
Edit2->Text="";
listetemizleme();
birlestirlistetemizleme();
listeindeksleri();
listesayilari();
Verigirisi->Text="";
manuelgiris->Checked=false;
otomatikgiris->Checked=false;
aranacakdeger->Text="";
raporturu->Text="RAPOR TÜRÜNÜ SEÇ";
yazialani->Clear();
RadioButton2->Checked=false;
RadioButton3->Checked=false;
RadioButton4->Checked=false;
RadioButton5->Checked=false;
RadioButton6->Checked=false;
ComboBox5->Text="DEFTER SEÇ";
ListBox1->Items->Clear();
Edit6->Text="";
Memo4->Lines->Clear();
}
void listeindeksleri()//liste indeksleri
{
Aciklistesi->ItemIndex=-1;
Kapalilistesi->ItemIndex=-1;
islemsizlistesi->ItemIndex=-1;
Hatalilistesi->ItemIndex=-1;
}
void raporal()//BOÞLIK AYARLAMA VE EKRANA YAZDIRMA AYARI
{
int i,j,bosluk,x;
String deger,rapor;
int sayac=0,sayi,satir,sutun;
int katsayi;

//%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
//BOÞLUK AYARI ALANI
if(raporturu->ItemIndex==0)//alýnacak rapor türü açýk ilamlar ise
{
rapor="acik";
}
if(raporturu->ItemIndex==1)//alýnacak rapor türü kapalý ilamlar ise
{
rapor="kapali";
}
if(raporturu->ItemIndex==2)//alýnacak rapor türü bosnumara ilamlar ise
{
rapor="bosnumara";
}
if(raporturu->ItemIndex==3)//alýnacak rapor türü hatalý ilamlar ise
{
rapor="hatali";
}
kayit->Clear();//kayit listesini temizle
kayit->Items->LoadFromFile("defterler/"+ComboBox2->Text+rapor+".txt");//ilgili defter kayýt listesine aktarýldý
bosluk=StrToInt(Label50->Caption);
for(i=0;i<=kayit->Count-1;i++)//listedeki tüm verilerin boyutu eþitlendi
{
deger=kayit->Items->Strings[i];

x=deger.Length();
if(x<bosluk)
{
for(j=x;j<=bosluk;j++)
{
deger=deger+" ";
}
}
kayit->Items->Strings[i]=deger;
Application->ProcessMessages();
}
//BOÞLUK ALANI BÝTÝÞ
//%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
//YAZDIR ALANI BAÞLANGIÇ
String yazdir="";
satir=StrToInt(satirsayisi->Caption);
sutun=kayit->Count/satir;
katsayi=0;
yazialani->Lines->Clear();
if(raporturu->ItemIndex==0)
{
yazialani->Lines->Add("ASLÝYE ÝNFAZ BÜROSU "+ComboBox2->Text+" yýlýna ait Dosya durumu açýk olan ilamlar:");
}
if(raporturu->ItemIndex==1)
{
yazialani->Lines->Add("ASLÝYE ÝNFAZ BÜROSU "+ComboBox2->Text+" yýlýna ait Dosya durumu kapalý olan ilamlar:");
}
if(raporturu->ItemIndex==2)
{
yazialani->Lines->Add("ASLÝYE ÝNFAZ BÜROSU "+ComboBox2->Text+" yýlýna ait Dosya durumu iþlemsiz olan ilamlar:");
}
if(raporturu->ItemIndex==3)
{
yazialani->Lines->Add("ASLÝYE ÝNFAZ BÜROSU "+ComboBox2->Text+" yýlýna ait Dosya durumu hatalý olan ilamlar:");
}

yazialani->Lines->Add("-----------------------------------------------------------------");
for(i=1;i<=sutun;i++)
{
for(j=katsayi*satir;j<=katsayi*satir+satir-1;j++)
{
sayac=sayac+1;
yazdir=yazdir+kayit->Items->Strings[j];
}
yazialani->Lines->Add(yazdir);
yazdir="";
katsayi=katsayi+1;
Application->ProcessMessages();
}

for(j=(katsayi-1)*satir+satir;j<=kayit->Count-1;j++)
{
sayac=sayac+1;
yazdir=yazdir+kayit->Items->Strings[j];
}
yazialani->Lines->Add(yazdir);
yazialani->Lines->SaveToFile("x.rtf");
ShowMessage("iþlem baþarýyla gerçekleþtirildi");
yazialani->Lines->Add("-----------------------------------------------------------------");
if(raporturu->ItemIndex==0)
{
yazialani->Lines->Add("ASLÝYE ÝNFAZ BÜROSU "+ComboBox2->Text+" yýlýna ait Dosya durumu açýk olan "+sayac +" adet ilam yukarýda belirtilmiþtir");
}
if(raporturu->ItemIndex==1)
{
yazialani->Lines->Add("ASLÝYE ÝNFAZ BÜROSU "+ComboBox2->Text+" yýlýna ait Dosya durumu kapalý olan "+sayac +" adet ilam yukarýda belirtilmiþtir");
}
if(raporturu->ItemIndex==2)
{
yazialani->Lines->Add("ASLÝYE ÝNFAZ BÜROSU "+ComboBox2->Text+" yýlýna ait Dosya durumu iþlemsiz olan "+sayac +" adet ilam yukarýda belirtilmiþtir");
}
if(raporturu->ItemIndex==3)
{
yazialani->Lines->Add("ASLÝYE ÝNFAZ BÜROSU "+ComboBox2->Text+" yýlýna ait Dosya durumu hatalý olan "+sayac +" adet ilam yukarýda belirtilmiþtir");
}

//YAZDIR ALANI BÝTÝÞ
//%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%

}
        __fastcall Tilamatkontrol(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE Tilamatkontrol *ilamatkontrol;
//---------------------------------------------------------------------------
#endif
