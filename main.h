//---------------------------------------------------------------------------

#ifndef mainH
#define mainH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <System.Bluetooth.hpp>
#include <Vcl.ExtCtrls.hpp>
#include <map>
#include <memory>
#include <System.JSON.hpp>
#include <IniFiles.hpp>
#include <stdlib.h>


#include <Vcl.Dialogs.hpp>
#include <tlhelp32.h>
#include <functional>
#include <System.Net.HttpClientComponent.hpp>

//---------------------------------------------------------------------------
class TForm1 : public TForm
{
__published:	// IDE-managed Components
	TButton *Button2;
	TTimer *Timer1;
	void __fastcall Button2Click(TObject *Sender);
	void __fastcall Timer1Timer(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TForm1(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm1 *Form1;
//---------------------------------------------------------------------------
#endif
