/ Jurate Baltrukenaite, PLM16014, I kursas, II semestras, LD1

#include <iostream>
#include <iomanip>
#include <cstdlib>
//man atrodo, sios bibliotekos nereikia

#include <fstream>
#include <cstring>
//#include "degalai.h"


using namespace std;
struct automobiliai {

	string marke;
	string valstybinisNr;
	int PagaminimoMetai;
	string spalva;
	string degalines_klientas;
	int gallia;
	float SanaudosMieste;
	float SanaudosUzmiesty;
	string Kebulas;
	float Kaina;
};



void spausdinimas(int &, automobiliai A[50]);
void meniu_kartojimas();
void nuskaitymas(int &, automobiliai[50]);
void rikiavimas(int &eilsk, automobiliai A[50]);
void salinimas(int &eilsk, automobiliai A[50]);
void degalu_sanaudos(int &, automobiliai[50], float, float, float, float);
void papildymas(int &eilsk, automobiliai[50]);
void spalvos_pasirinkimas(int, automobiliai[50]);
void originalo_atkurimas(int pastovuseilsk, int &, automobiliai A[50], automobiliai Kopija[50]);

int main()
{
	automobiliai A[50];
	automobiliai Kopija[50];
	char meniu;
	int eilsk, i = 0;


	nuskaitymas(eilsk, A);
	int pastovuseilsk = eilsk;

	for (i = 0; i <= eilsk; i++) { //padaroma strukturos kopija, kad visada galima butu tureti nepakeista originala;

		Kopija[i] = A[i];

	}


	// degalu kainos

	float benz = 4.09;
	float dyz = 0.94;
	float duj = 0.49;
	float el = 22.6;


	cout << setw(20) << "AUTOMOBILIAI" << endl;
	spausdinimas(eilsk, A);

	// PAGRINDINIS MENIU reikia keisti
	meniu_kartojimas();

	do {
		cin >> meniu;
		if (meniu == 'r') {
			rikiavimas(eilsk, A);
			cout << setw(20) << "SURIKIUOTI PAGAL PAGAMINIMO METUS" << endl;
			spausdinimas(eilsk, A);
			originalo_atkurimas(pastovuseilsk, eilsk, A, Kopija);
			cout << "\nKa is meniu pasirinksite dar?" << endl;
			meniu_kartojimas();
		}
		if (meniu == 'n') {
			salinimas(eilsk, A);
			cout << setw(20) << "NAUJESNI NEI 15 METU AUTOMOBILIAI" << endl;
			spausdinimas(eilsk, A);
			originalo_atkurimas(pastovuseilsk, eilsk, A, Kopija);
			cout << "test" << pastovuseilsk << eilsk;
			cout << "\nKa is meniu pasirinksite dar?" << endl;
			meniu_kartojimas();
		}
		if (meniu == '8') {
			cout << setw(20) << "VIDUTINE 1000 Km KELIONES KAINA EURAIS" << endl;
			degalu_sanaudos(eilsk, A, benz, dyz, el, duj);
			originalo_atkurimas(pastovuseilsk, eilsk, A, Kopija);
			cout << "\nKa is meniu pasirinksite dar?" << endl;
			meniu_kartojimas();
		}
		if (meniu == 'p') {
			papildymas(eilsk, A);
			cout << setw(20) << "PAPILDYTAS AUTOMOBILIU SARASAS" << endl;
			spausdinimas(eilsk, A);
			originalo_atkurimas(pastovuseilsk, eilsk, A, Kopija);
			cout << "\nKa is meniu pasirinksite dar?" << endl;
			meniu_kartojimas();
		}
		if (meniu == 's') {
			cout << setw(20) << "SPALVOS PASIRINKIMAS" << endl;
			spalvos_pasirinkimas(eilsk, A);

			cout << "\nKa is meniu pasirinksite dar?" << endl;
		}
	} while (meniu != 'b');


	cout << "Programa darba baige." << endl;


	system("pause");
	return 0;
}



void spausdinimas(int &eilsk, automobiliai A[50])
{
	//int eilsk;
	//automobiliai A[50];
	cout << left << setw(14) << 1 << left << setw(7) << 2 << setw(6) << 3 << setw(9) << 4;
	cout << setw(9) << 5 << setw(4) << 6 << setw(4) << 7 << setw(6) << 8 << setw(12) << 9 << endl;
	for (int i = 0; i <= eilsk; i++) {
		cout << left << setw(14) << A[i].marke << left << setw(7) << A[i].valstybinisNr << setw(6) << A[i].PagaminimoMetai << setw(9) << A[i].spalva;
		cout << setw(9) << A[i].degalai << setw(4) << A[i].galia << setw(4) << A[i].SanaudosMieste << setw(6) << A[i].SanaudosUzmiesty << setw(12) << A[i].Kebulas << endl;
	}
	cout << "\n1 - marke, 2 - valstybinis nr., 3 - gamybos metai, 4 - spalva, 5 - degalai, 6 - variklio galia, kW, 7 - degalu sanaudos mieste, l/100 km/ kWh/100 km, 8 - degalu sanaudos uzmiestyje, 9  - kebulo tipas." << endl;

}
void meniu_kartojimas()
{
	cout << "\nJei norite:" << endl << "matyti pagal metus surikiuotus sautomoblilius, spauskite r" << endl;
	cout << "matyti naujesnius nei 15 m. automobilius, spauskite n" << endl;
	cout << "matyti vidutine 1000 km keliones kaina, spauskite k" << endl;
	cout << "papildyti automobiliu sarasa, spauskite p" << endl;
	cout << "pasirinkti automobili pagal spalva, spauskite s" << endl;
	cout << "iseiti is meniu, spauskite b" << endl;
}
void rikiavimas(int &eilsk, automobiliai A[50])
{
	automobiliai Laik[50];
	for (int i = 0; i <= eilsk - 1; i++) {
		for (int j = i + 1; j <= eilsk; j++) {

			if (A[i].PagaminimoMetai > A[j].PagaminimoMetai) {
				Laik[i] = A[i];
				A[i] = A[j];
				A[j] = Laik[i];

			}
		}
	}

}


void salinimas(int &eilsk, automobiliai A[50]) {

	int vieta;
	int a;
	for (int i = 0; i <= eilsk; i++) {
		if (A[i].PagaminimoMetai < 2002) {
			vieta = i;
			for (a = vieta; a <= eilsk - 1; a++) {
				A[a] = A[a + 1];
			}
			i--;
			eilsk--;

		}
	}
}

void degalu_sanaudos(int &eilsk, automobiliai A[50], float benz, float dyz, float el, float duj) {
	float vidurkis[20];

	for (int i = 0; i <= eilsk; i++) {
		vidurkis[i] = (A[i].SanaudosMieste + A[i].SanaudosUzmiesty) / 2;
		if (A[i].degalai == "benzinas") {
			A[i].Kaina = (benz * vidurkis[i]) * 10;
		}
		if (A[i].degalai == "dyzelis") {
			A[i].Kaina = (dyz * vidurkis[i]) * 10;
		}
		if (A[i].degalai == "dujos") {
			A[i].Kaina = (duj * vidurkis[i]) * 10;
		}
		if (A[i].degalai == "elektra") {
			A[i].Kaina = (el * vidurkis[i]) * 10;
		}
	}
	cout << left << setw(14) << 1 << left << setw(7) << 2 << setw(6) << 3 << setw(9) << 4;
	cout << setw(9) << 5 << setw(4) << 6 << setw(4) << 7 << setw(6) << 8 << setw(12) << 9 << setw(5) << 10 << endl;
	for (int i = 0; i <= eilsk; i++) {
		cout << left << setw(14) << A[i].marke << left << setw(7) << A[i].valstybinisNr << setw(6) << A[i].PagaminimoMetai << setw(9) << A[i].spalva;
		cout << setw(9) << A[i].degalai << setw(4) << A[i].galia << setw(4) << A[i].SanaudosMieste << setw(6) << A[i].SanaudosUzmiesty << setw(12) << A[i].Kebulas << setw(5) << A[i].Kaina << endl;
	}
	cout << "\n1 - marke, 2 - valstybinis nr., 3 - gamybos metai, 4 - spalva, 5 - degalai, 6 - variklio galia, kW, 7 - degalu sanaudos mieste, l/100 km/ kWh/100 km, 8 - degalu sanaudos uzmiestyje, 9  - kebulo tipas, 10 - vidutine 1000 km kaina, Eur." << endl;
}

void  papildymas(int &eilsk, automobiliai A[50])
{
	cout << "Iveskite automobilio marke" << endl;
	cin >> A[eilsk + 1].marke;
	cout << "Iveskite automobilio valstybini numeri" << endl;
	cin >> A[eilsk + 1].valstybinisNr;
	cout << "Iveskite automobilio pagaminimo metus" << endl;
	cin >> A[eilsk + 1].PagaminimoMetai;
	cout << "Iveskite automobilio spalva" << endl;
	cin >> A[eilsk + 1].spalva;
	cout << "Iveskite automobilio degalus" << endl;
	cin >> A[eilsk + 1].degalai;
	cout << "Iveskite automobilio galia" << endl;
	cin >> A[eilsk + 1].galia;
	cout << "Iveskite degalu sanaudas mieste" << endl;
	cin >> A[eilsk + 1].SanaudosMieste;
	cout << "Iveskite degalu sanaudas uzmiestyje" << endl;
	cin >> A[eilsk + 1].SanaudosUzmiesty;
	cout << "Iveskite automobilio kebulo tipa" << endl;
	cin >> A[eilsk + 1].Kebulas;
	eilsk = eilsk + 1;


}

void spalvos_pasirinkimas(int eilsk, automobiliai A[50])
{
	string pasirink;
	int nerasta = 0;
	cout << "Kokia automobilio spalva jus domina?" << endl;
	cin >> pasirink;
	for (int i = 0; i <= eilsk; i++) {
		if (pasirink == A[i].spalva) {
			cout << "Jusu pasirinktos spalvos automobilis yra:" << endl;
			cout << left << setw(15) << A[i].marke << left << setw(7) << A[i].valstybinisNr << setw(6) << A[i].PagaminimoMetai << setw(9) << A[i].spalva;
			cout << setw(9) << A[i].degalai << setw(4) << A[i].galia << setw(4) << A[i].SanaudosMieste << setw(6) << A[i].SanaudosUzmiesty << setw(12) << A[i].Kebulas << endl;
		}
		else {
			nerasta++;
		}
	}
	if (nerasta == eilsk + 1) {
		cout << "Jusu pasirinktos spalvos automobilio nera" << endl;
	}


}

void originalo_atkurimas(int pastovuseilsk, int &eilsk, automobiliai A[50], automobiliai Kopija[50])
{
	for (int i = 0; i <= pastovuseilsk; i++) { //padaroma strukturos kopija, kad visada galima butu tureti nepakeista originala;
		A[i] = Kopija[i];
	}
	eilsk = pastovuseilsk;
}


void nuskaitymas(int &eilsk, automobiliai A[50]) {

	string failo_pav = "D:auto1.txt"; //"E:\auto1.txt"
	ifstream Open(failo_pav);
	//automobiliai A[50];
	int i = 0;
	if (!Open) {
		cout << "Klaida atidarant faila." << endl;
	}
	else {
		while (!Open.eof()) {   // nuskaitymas

			Open >> A[i].marke;
			Open >> A[i].valstybinisNr;
			Open >> A[i].PagaminimoMetai;
			Open >> A[i].spalva;
			Open >> A[i].degalai;
			Open >> A[i].galia;
			Open >> A[i].SanaudosMieste;
			Open >> A[i].SanaudosUzmiesty;
			Open >> A[i].Kebulas;
			eilsk = i;
			i++;
		}
		Open.close();
	}

}
