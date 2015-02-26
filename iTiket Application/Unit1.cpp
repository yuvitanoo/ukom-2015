//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit1.h"
#include "Unit2.h"
#include "Unit3.h"
#include "Unit4.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Panel5Click(TObject *Sender)
{
AQ2->Close();
AQ2->SQL->Clear();
AQ2->SQL->Add("select *from login where username ='"+Edit1->Text+"' && password='"+Edit2->Text+"'");
AQ2->Open();
if (!AQ2->IsEmpty()) {

		ShowMessage("Selamat Datang Admin");
		Form1->Caption="Menu Admin";
		ValidAdmin->Caption= AQ2->FieldByName("username")->AsString;
		Edit1->Clear();
		Edit2->Clear();
		InputJadwal1->Visible=true;
		Logout2->Visible=true;
		BuatAkun1->Visible=true;


}
   else
   {
	 ShowMessage("Anda Tidak Memiliki Akun Untuk Akses");
	 InputJadwal1->Visible=false;
	 Logout2->Visible=false;
	 BuatAkun1->Visible=false;
	 Edit1->Clear();
	 Edit2->Clear();

   }

}
//---------------------------------------------------------------------------
void __fastcall TForm1::Logout1Click(TObject *Sender)
{
Application->Terminate();
}
//---------------------------------------------------------------------------
void __fastcall TForm1::InputJadwal1Click(TObject *Sender)
{
if(ValidAdmin->Caption=="ValidAdmin")
{
	ShowMessage("Hanya dapat diakses oleh ADMIN !");
}
else
{
	Form1->Hide();
	Form2->Show();
	Form2->ClientHeight=526;
	Form2->ClientWidth=848;
}
}
//---------------------------------------------------------------------------
void __fastcall TForm1::BuatAkun1Click(TObject *Sender)
{
if(ValidAdmin->Caption=="ValidAdmin")
{
	ShowMessage("Hanya dapat diakses oleh ADMIN !");
}
else
{
	Form1->Hide();
	Form3->Show();
	Form2->Hide();
}
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button1Click(TObject *Sender)
{
	Tslideshow->Enabled = True;
	//Islides2->Picture = Islides1->Picture;
	Islides1->Picture = Islides2->Picture;
	Islides2->Picture = Islides3->Picture;
	Islides3->Picture = Islides4->Picture;
	Islides4->Picture = Islides5->Picture;
	Islides5->Picture = Islides1->Picture;
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Panel6Click(TObject *Sender)
{
Form2->ADOQuery1->Close();
Form2->ADOQuery1->SQL->Clear();
Form2->ADOQuery1->SQL->Add("select *from jadwal where pesawat = '"+ComboBox1->Text+"' AND keberangkatan = '"+ComboBox2->Text+"' AND kedatangan = '"+ComboBox3->Text+"'");
Form2->ADOQuery1->Open();
Form2->Show();
Form1->Hide();
Form2->ClientHeight=300;
Form2->ClientWidth=848;

}
//---------------------------------------------------------------------------
void __fastcall TForm1::Panel7Click(TObject *Sender)
{
	Form4->Show();
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Image5Click(TObject *Sender)
{
  Form4->Show();
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Label8Click(TObject *Sender)
{
Form4->Show();
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Logout2Click(TObject *Sender)
{
if(ValidAdmin->Caption=="ValidAdmin")
{
	ShowMessage("Hanya dapat diakses oleh ADMIN !");
}
else
{
	ShowMessage("Anda akan keluar sebagai ADMIN !");
	Form1->Show();
	Form3->Hide();
	Form2->Hide();
	InputJadwal1->Visible=false;
	BuatAkun1->Visible=false;
	Logout2->Visible=false;

}
}
//---------------------------------------------------------------------------






