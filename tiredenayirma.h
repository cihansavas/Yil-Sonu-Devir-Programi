//---------------------------------------------------------------------------

#ifndef tiredenayirmaH
#define tiredenayirmaH
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
//---------------------------------------------------------------------------
class Ttiredenayir : public TForm
{
__published:	// IDE-managed Components
        TListBox *ListBox1;
        TListBox *ListBox2;
        TButton *Button1;
        void __fastcall Button1Click(TObject *Sender);
private:	// User declarations
public:		// User declarations
        __fastcall Ttiredenayir(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE Ttiredenayir *tiredenayir;
//---------------------------------------------------------------------------
#endif
