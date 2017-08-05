//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop
//---------------------------------------------------------------------------
USEFORM("devir.cpp", ilamatkontrol);
USEFORM("yazici.cpp", yazicii);
USEFORM("rakamlarisiralama.cpp", rakamlarisirala);
USEFORM("prantez.cpp", parantezdenayirma);
USEFORM("rakambulma.cpp", rakambulma);
USEFORM("satiraboslukekleme.cpp", satirabaslukekleme);
USEFORM("tiredenayirma.cpp", tiredenayir);
//---------------------------------------------------------------------------
WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int)
{
        try
        {
                 Application->Initialize();
                 Application->CreateForm(__classid(Tilamatkontrol), &ilamatkontrol);
                 Application->CreateForm(__classid(Tyazicii), &yazicii);
                 Application->CreateForm(__classid(Trakamlarisirala), &rakamlarisirala);
                 Application->CreateForm(__classid(Tparantezdenayirma), &parantezdenayirma);
                 Application->CreateForm(__classid(Trakambulma), &rakambulma);
                 Application->CreateForm(__classid(Tsatirabaslukekleme), &satirabaslukekleme);
                 Application->CreateForm(__classid(Ttiredenayir), &tiredenayir);
                 Application->Run();
        }
        catch (Exception &exception)
        {
                 Application->ShowException(&exception);
        }
        catch (...)
        {
                 try
                 {
                         throw Exception("");
                 }
                 catch (Exception &exception)
                 {
                         Application->ShowException(&exception);
                 }
        }
        return 0;
}
//---------------------------------------------------------------------------
