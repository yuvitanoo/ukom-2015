//---------------------------------------------------------------------------

#ifndef Unit1H
#define Unit1H
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Data.DB.hpp>
#include <Data.Win.ADODB.hpp>
#include <Vcl.ExtCtrls.hpp>
#include <Vcl.Imaging.jpeg.hpp>
#include <Vcl.Imaging.pngimage.hpp>
#include <Vcl.OleCtrls.hpp>
#include <Vcl.Menus.hpp>
#include <Vcl.MPlayer.hpp>
#include <Vcl.ComCtrls.hpp>
//---------------------------------------------------------------------------
class TForm1 : public TForm
{
__published:	// IDE-managed Components
	TPanel *Panel1;
	TPanel *Panel3;
	TPanel *Panel2;
	TImage *Islides1;
	TTimer *Tslideshow;
	TADOQuery *AQ1;
	TDataSource *DataSource1;
	TTimer *Timer2;
	TTimer *Timer3;
	TTimer *Timer4;
	TTimer *Timer5;
	TPanel *Panel4;
	TImage *Image3;
	TLabel *Label3;
	TEdit *Edit1;
	TEdit *Edit2;
	TPanel *Panel5;
	TADOQuery *AQ2;
	TMainMenu *MainMenu1;
	TMenuItem *Menu1;
	TMenuItem *Logout1;
	TMenuItem *InputJadwal1;
	TMenuItem *BuatAkun1;
	TImage *Islides2;
	TImage *Islides3;
	TLabel *Lvalid;
	TLabel *Label1;
	TImage *Image1;
	TLabel *ValidAdmin;
	TLabel *Label7;
	TImage *Image2;
	TLabel *Label2;
	TLabel *Label5;
	TComboBox *ComboBox1;
	TLabel *Label4;
	TLabel *Label6;
	TComboBox *ComboBox2;
	TComboBox *ComboBox3;
	TPanel *Panel6;
	TPanel *Panel7;
	TImage *Image4;
	TLabel *Label8;
	TLabel *Label9;
	TLabel *Label10;
	TPanel *Panel8;
	TImage *Image5;
	TLabel *Label11;
	TLabel *Label12;
	TLabel *Label13;
	TDateTimePicker *DateTimePicker1;
	TMenuItem *Logout2;
	TImage *Islides4;
	TImage *Islides5;
	void __fastcall Panel5Click(TObject *Sender);
	void __fastcall Logout1Click(TObject *Sender);
	void __fastcall InputJadwal1Click(TObject *Sender);
	void __fastcall BuatAkun1Click(TObject *Sender);
	void __fastcall Button1Click(TObject *Sender);
	void __fastcall Panel6Click(TObject *Sender);
	void __fastcall Panel7Click(TObject *Sender);
	void __fastcall Image5Click(TObject *Sender);
	void __fastcall Label8Click(TObject *Sender);
	void __fastcall Logout2Click(TObject *Sender);


private:	// User declarations
public:		// User declarations
	__fastcall TForm1(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm1 *Form1;
//---------------------------------------------------------------------------
#endif
