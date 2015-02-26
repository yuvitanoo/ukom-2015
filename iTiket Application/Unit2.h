//---------------------------------------------------------------------------

#ifndef Unit2H
#define Unit2H
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Data.DB.hpp>
#include <Data.Win.ADODB.hpp>
#include <Vcl.ComCtrls.hpp>
#include <Vcl.DBGrids.hpp>
#include <Vcl.ExtCtrls.hpp>
#include <Vcl.Grids.hpp>
#include <Vcl.Imaging.pngimage.hpp>
#include <Vcl.Samples.Spin.hpp>
#include <Vcl.Menus.hpp>
//---------------------------------------------------------------------------
class TForm2 : public TForm
{
__published:	// IDE-managed Components
	TPanel *Panel1;
	TLabel *Label1;
	TLabel *Label2;
	TLabel *Label3;
	TLabel *Label4;
	TLabel *Label5;
	TLabel *Label6;
	TLabel *Label7;
	TLabel *Label8;
	TLabel *Label9;
	TImage *Image1;
	TImage *Image2;
	TImage *Image3;
	TImage *Image4;
	TComboBox *ComboBox1;
	TComboBox *ComboBox2;
	TDateTimePicker *DateTimePicker1;
	TComboBox *ComboBox3;
	TDateTimePicker *DateTimePicker2;
	TEdit *Edit1;
	TSpinEdit *SpinEdit1;
	TEdit *Edit2;
	TADOQuery *ADOQuery1;
	TDataSource *DataSource1;
	TADOConnection *ADOConnection1;
	TDBGrid *DBGrid1;
	TLabel *Label10;
	TImage *Image5;
	TMainMenu *MainMenu1;
	TMenuItem *Kembali1;
	void __fastcall Image1Click(TObject *Sender);
	void __fastcall Image2Click(TObject *Sender);
	void __fastcall Image3Click(TObject *Sender);
	void __fastcall Image4Click(TObject *Sender);
	void __fastcall FormCreate(TObject *Sender);
	void __fastcall Kembali1Click(TObject *Sender);
	void __fastcall DBGrid1CellClick(TColumn *Column);
private:	// User declarations
public:		// User declarations
	__fastcall TForm2(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm2 *Form2;
//---------------------------------------------------------------------------
#endif
