//---------------------------------------------------------------------------

#ifndef satiraboslukeklemeH
#define satiraboslukeklemeH
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <Dialogs.hpp>
#include <ComCtrls.hpp>
//---------------------------------------------------------------------------
class Tsatirabaslukekleme : public TForm
{
__published:	// IDE-managed Components
        TOpenDialog *OpenDialog1;
        TButton *Button3;
        TListBox *ListBox2;
        TPageControl *PageControl1;
        TTabSheet *TabSheet1;
        TListBox *ListBox1;
        TButton *Button1;
        TButton *Button2;
        TButton *Button4;
        void __fastcall Button1Click(TObject *Sender);
        void __fastcall Button2Click(TObject *Sender);
        void __fastcall Button4Click(TObject *Sender);
private:	// User declarations
public:		// User declarations
        __fastcall Tsatirabaslukekleme(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE Tsatirabaslukekleme *satirabaslukekleme;
//---------------------------------------------------------------------------
#endif
