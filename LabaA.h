//---------------------------------------------------------------------------

#ifndef LabaAH
#define LabaAH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <FMX.Controls.hpp>
#include <FMX.Forms.hpp>
#include <FMX.Controls.Presentation.hpp>
#include <FMX.StdCtrls.hpp>
#include <FMX.Types.hpp>
#include <FMX.Ani.hpp>
#include <FMX.Edit.hpp>
//---------------------------------------------------------------------------
class TForm1 : public TForm
{
__published:	// IDE-managed Components
	TButton *Negative;		//+-
	TButton *Persent;  		//%
	TButton *Divide;   		// /
	TButton *Multiply; 		// *
	TButton *Subtraction; 	// -
	TButton *Addition;    	// +
	TButton *Dot;         	// .

	TEdit *result;

	TButton *Pow2;        	// x^2
	TButton *pow3;         	// x^3
	TButton *Powxy;
	TButton *Sqrt;  	    // sqrt

	TButton *AC;        	// delete
	TButton *Equals;      	// =


	TButton *n0;
	TButton *n1;
	TButton *n2;
	TButton *n3;
    TButton *n4;
	TButton *n5;
	TButton *n6;
	TButton *n7;
	TButton *n8;
	TButton *n9;

	void __fastcall ACClick(TObject *Sender);
	void __fastcall PersentClick(TObject *Sender);
	void __fastcall NegativeClick(TObject *Sender);
	void __fastcall DivideClick(TObject *Sender);
	void __fastcall MultiplyClick(TObject *Sender);
	void __fastcall SubtractionClick(TObject *Sender);
	void __fastcall AdditionClick(TObject *Sender);
	void __fastcall EqualsClick(TObject *Sender);
	void __fastcall n0Click(TObject *Sender);
	void __fastcall n1Click(TObject *Sender);
	void __fastcall n2Click(TObject *Sender);
	void __fastcall n3Click(TObject *Sender);
	void __fastcall n4Click(TObject *Sender);
	void __fastcall n5Click(TObject *Sender);
	void __fastcall n6Click(TObject *Sender);
	void __fastcall n7Click(TObject *Sender);
	void __fastcall n8Click(TObject *Sender);
	void __fastcall n9Click(TObject *Sender);
	void __fastcall DotClick(TObject *Sender);
	void __fastcall Pow2Click(TObject *Sender);
	void __fastcall pow3Click(TObject *Sender);
	void __fastcall PowxyClick(TObject *Sender);
	void __fastcall SqrtClick(TObject *Sender);
	void __fastcall FormMouseDown(TObject *Sender, TMouseButton Button, TShiftState Shift,
          float X, float Y);
	void __fastcall FormMouseUp(TObject *Sender, TMouseButton Button, TShiftState Shift,
          float X, float Y);

private:	// User declarations
public:		// User declarations
	__fastcall TForm1(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm1 *Form1;
//---------------------------------------------------------------------------
#endif
