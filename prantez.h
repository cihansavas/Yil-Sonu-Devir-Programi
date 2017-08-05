//---------------------------------------------------------------------------

#ifndef prantezH
#define prantezH
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <ComCtrls.hpp>
//---------------------------------------------------------------------------
class Tparantezdenayirma : public TForm
{
__published:	// IDE-managed Components
        TListBox *ListBox1;
        TButton *Button1;
        TButton *Button2;
        TListBox *ListBox2;
        TProgressBar *ProgressBar1;
        TButton *Button3;
        TButton *Button4;
        TMemo *Memo1;
        TButton *Button5;
        void __fastcall Button1Click(TObject *Sender);
        void __fastcall Button2Click(TObject *Sender);
        void __fastcall Button3Click(TObject *Sender);
        void __fastcall Button4Click(TObject *Sender);
        void __fastcall Button5Click(TObject *Sender);
private:	// User declarations
public:		// User declarations
        __fastcall Tparantezdenayirma(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE Tparantezdenayirma *parantezdenayirma;
//---------------------------------------------------------------------------
#endif
