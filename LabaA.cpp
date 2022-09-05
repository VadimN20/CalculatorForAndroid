//---------------------------------------------------------------------------

#include <fmx.h>
#include <math.h>
#pragma hdrstop

#include "LabaA.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.fmx"
#pragma resource ("*.LgXhdpiPh.fmx", _PLAT_ANDROID)

TForm1 *Form1;
float x = 0;
float y = 1;
bool MulF = false;
bool DivF = false;
bool SubF = false;
bool AddF = false;
bool PowxyF = false;
bool sqrtF = false;

int X1 = 0;
int Y1 = 0;

int a = 0;
int b = 0;

__fastcall TForm1::TForm1(TComponent* Owner)
	: TForm(Owner)
{

}
//---------------------------------------------------------------------------




void __fastcall TForm1::ACClick(TObject *Sender)
{
    result->Text = "";
}
//---------------------------------------------------------------------------

void __fastcall TForm1::NegativeClick(TObject *Sender)
{
	x = -StrToFloat(result->Text);
	result->Text = x;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::PersentClick(TObject *Sender)
{
	x = StrToFloat(result->Text);
	result->Text = x/100;
}
//---------------------------------------------------------------------------


void __fastcall TForm1::DivideClick(TObject *Sender)
{
	DivF = true;
	x = StrToFloat(result->Text);
    result->Text = "";
}
//---------------------------------------------------------------------------

void __fastcall TForm1::MultiplyClick(TObject *Sender)
{
	MulF = true;
	x = StrToFloat(result->Text);
    result->Text = "";
}
//---------------------------------------------------------------------------

void __fastcall TForm1::SubtractionClick(TObject *Sender)
{
	SubF = true;
	x = StrToFloat(result->Text);
	result->Text = "";
}
//---------------------------------------------------------------------------

void __fastcall TForm1::AdditionClick(TObject *Sender)
{
	AddF = true;
	x = StrToFloat(result->Text);
	result->Text = "";
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Pow2Click(TObject *Sender)
{
    x = StrToFloat(result->Text);
	result->Text = x*x;
}

void __fastcall TForm1::pow3Click(TObject *Sender)
{
	x = StrToFloat(result->Text);
	result->Text = x*x*x;
}

void __fastcall TForm1::PowxyClick(TObject *Sender)
{
	x = StrToFloat(result->Text);
	result->Text = "";
	PowxyF = true;
}
void __fastcall TForm1::SqrtClick(TObject *Sender)
{
	x = StrToFloat(result->Text);
	result->Text = sqrt(x);
}

void __fastcall TForm1::EqualsClick(TObject *Sender)
{
	if(DivF) {
		y = StrToFloat(result->Text);
		if(y == 0) {
			ShowMessage("Zero divide");
		}
		else {
			result->Text = FloatToStr(x/y);
		}
		DivF = false;
	}
	else if(MulF) {
		y = StrToFloat(result->Text);
		result->Text = FloatToStr(x*y);
		MulF = false;
	}
	else if(SubF) {
		y = StrToFloat(result->Text);
		result->Text = FloatToStr(x-y);
		SubF = false;
	}
	else if(AddF) {
		y = StrToFloat(result->Text);
		result->Text = FloatToStr(x+y);
		AddF = false;
	}
	else if(PowxyF) {
		y = StrToFloat(result->Text);
		result->Text = FloatToStr(pow(x, y));
		PowxyF = false;
	}
}
//---------------------------------------------------------------------------

void __fastcall TForm1::n0Click(TObject *Sender) { result->Text += "0"; }

void __fastcall TForm1::n1Click(TObject *Sender) { result->Text += "1"; }

void __fastcall TForm1::n2Click(TObject *Sender) { result->Text += "2"; }

void __fastcall TForm1::n3Click(TObject *Sender) { result->Text += "3"; }

void __fastcall TForm1::n4Click(TObject *Sender) { result->Text += "4"; }

void __fastcall TForm1::n5Click(TObject *Sender) { result->Text += "5"; }

void __fastcall TForm1::n6Click(TObject *Sender) { result->Text += "6"; }

void __fastcall TForm1::n7Click(TObject *Sender) { result->Text += "7"; }

void __fastcall TForm1::n8Click(TObject *Sender) { result->Text += "8"; }

void __fastcall TForm1::n9Click(TObject *Sender) { result->Text += "9"; }

void __fastcall TForm1::DotClick(TObject *Sender) {	result->Text += ','; }




void __fastcall TForm1::FormMouseDown(TObject *Sender, TMouseButton Button, TShiftState Shift,
          float X, float Y)
{
	X1 = X;
	Y1 = Y;
}
//---------------------------------------------------------------------------


void __fastcall TForm1::FormMouseUp(TObject *Sender, TMouseButton Button, TShiftState Shift,
          float X, float Y)
{
	if(X - X1 > 0 && (abs)(Y - Y1) < 30) {
		a = StrToInt(result->Text);
		b = a / 10;
		result->Text = b;
	}
}
//---------------------------------------------------------------------------

