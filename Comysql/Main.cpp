//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Main.h"
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
void __fastcall TForm1::Button1Click(TObject *Sender)
{
	MYSQL *mySQL;
	mySQL = mysql_init(NULL);

	if (!mysql_real_connect(mySQL, "192.168.65.233", "root", "root", "lowrence", 0, NULL, 0)) {
		// la connection a échoué
			   Button1->Caption = "echec";
	} else {
		// la connection a réussi
		Button1->Caption = "Yeah !";

		MYSQL_RES *myRES;
		MYSQL_ROW myROW;
		AnsiString aStr;
		if (!mysql_query(mySQL, "SELECT * FROM `utilisateur`")) {
			myRES = mysql_store_result(mySQL);
			if (myRES) {
				for (unsigned int i = 0; i < myRES->row_count; i++) {
					myROW = mysql_fetch_row(myRES);
					for (unsigned int j = 0; j < mysql_num_fields(myRES); j++) {
						aStr = myROW[j];
						//ListBox1->Items->Add(aStr);
						Memo1->Lines->Add(aStr)  ;
					}
				}
				mysql_free_result(myRES);
			}
		}

	}

}
//---------------------------------------------------------------------------



void __fastcall TForm1::Button2Click(TObject *Sender)
{
	MYSQL *mySQL;
	mySQL = mysql_init(NULL);

	if (!mysql_real_connect(mySQL, "192.168.65.233", "root", "root", "lowrence", 0, NULL, 0)) {
		// la connection a échoué
			   Button2->Caption = "echec";
	} else {
		// la connection a réussi
		Button2->Caption = "Données BOATS";

		MYSQL_RES *myRES;
		MYSQL_ROW myROW;
		AnsiString aStr;
		if (!mysql_query(mySQL, "SELECT * FROM `positionETvitess`")) {
			myRES = mysql_store_result(mySQL);
			if (myRES) {
				for (unsigned int i = 0; i < myRES->row_count; i++) {
					myROW = mysql_fetch_row(myRES);
					for (unsigned int j = 0; j < mysql_num_fields(myRES); j++) {
						aStr = myROW[j];
						//ListBox1->Items->Add(aStr);
						Memo2->Lines->Add(aStr)  ;
					}
				}
				mysql_free_result(myRES);
			}
		}

	}

}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button3Click(TObject *Sender)
{
	MYSQL *mySQL;
	mySQL = mysql_init(NULL);

	if (!mysql_real_connect(mySQL, "192.168.65.233", "root", "root", "lowrence", 0, NULL, 0)) {
		// la connection a échoué
			   Button3->Caption = "echec";
	} else {
		// la connection a réussi
		Button3->Caption = "Envoie réussi";

		MYSQL_RES *myRES;
		MYSQL_ROW myROW;
		AnsiString aStr;
		if (!mysql_query(mySQL, "INSERT INTO `positionETvitess`(`BateauID`) VALUES ('60')"))
		{
			myRES = mysql_store_result(mySQL);
			if (myRES) {
				for (unsigned int i = 0; i < myRES->row_count; i++) {
					myROW = mysql_fetch_row(myRES);
					for (unsigned int j = 0; j < mysql_num_fields(myRES); j++) {
						aStr = myROW[j];
						//ListBox1->Items->Add(aStr);
						Memo3->Lines->Add(aStr)  ;
					}
				}
				mysql_free_result(myRES);
			}
		}

	}

}
//---------------------------------------------------------------------------

