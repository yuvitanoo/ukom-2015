//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit1.h"
#include "Unit2.h"
#include "Unit3.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm3 *Form3;
//---------------------------------------------------------------------------
__fastcall TForm3::TForm3(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm3::Panel5Click(TObject *Sender)
{
if(Edit1->Text==""&&Edit2->Text=="")
{
	MessageBoxA(0, "Isi data dengan lengkap!","Informasi",MB_ICONERROR|MB_OK);
}
else
{
	Form1->AQ2->Close();
	Form1->AQ2->SQL->Clear();
	Form1->AQ2->SQL->Add("insert into login values('"+Edit1->Text+"','"+Edit2->Text+"')")   ;
	Form1->AQ2->ExecSQL();
	MessageBoxA(0,"Pastikan data akurat!","Informasi",MB_ICONQUESTION|MB_YESNO)==mrYes;
	MessageBoxA(0,"Data berhasil tersimpan","Tersimpan",MB_ICONINFORMATION|MB_OK);
	Edit1->Clear();
	Edit2->Clear();
	Form1->AQ2->SQL->Clear();
	Form1->AQ2->SQL->Add("select *from login");
	Form1->AQ2->Open();
	Form3->Hide();
	Form1->Show();
}
}
//---------------------------------------------------------------------------
void __fastcall TForm3::Kembali1Click(TObject *Sender)
{
Form3->Hide();
Form1->Show();
}
//---------------------------------------------------------------------------

