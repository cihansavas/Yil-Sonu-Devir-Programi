//---------------------------------------------------------------------------

#ifndef yaziciH
#define yaziciH
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <Dialogs.hpp>
#include <ComCtrls.hpp>
//---------------------------------------------------------------------------
class Tyazicii : public TForm
{
__published:	// IDE-managed Components
        TPrintDialog *PrintDialog1;
        TPrinterSetupDialog *PrinterSetupDialog1;
        TMemo *Memo1;
        TButton *Button1;
        TButton *Button2;
        void __fastcall Button1Click(TObject *Sender);
        void __fastcall Button2Click(TObject *Sender);
        void __fastcall FormCreate(TObject *Sender);
private:	// User declarations
public:		// User declarations
        __fastcall Tyazicii(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE Tyazicii *yazicii;
//---------------------------------------------------------------------------
#endif
