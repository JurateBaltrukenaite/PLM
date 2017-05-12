
//
//#include <iostream>
//// klase_pvz1.cpp
//using namespace std;
//class Klase {
//private: int duomenys; // duomenys
//			public: void pradines_reiksmes( int d) // metodai
//			{
//						duomenys = d;
//					};
//					void spausdink()
//					{
//						cout << "Duomenys = "<< duomenys << endl;
//					}
//};
//void main()
//{
//	Klase s1, s2;
//	s1.pradines_reiksmes(111);
//	s2.pradines_reiksmes(222);
//	s1.spausdink();
//	s2.spausdink();
//	system(
//		"pause"
//	);
//}

//#include <iostream>
//// klase_pvz2.cpp
//using
//namespace
//	std;
//class
//	Klase {
//	private
//		:
//			int
//				duomenys;
//			// duomenys
//			public
//				:
//					void
//						pradines_reiksmes()
//						// metodai
//					{
//						cout <<
//							"Iveskite skaiciu "
//							<< endl;
//						cin >> duomenys;
//					};
//					void
//						spausdink()
//					{
//						cout <<
//							"Duomenys = "
//							<< duomenys << endl;
//					}
//}
//;
//void
//main()
//{
//	Klase s1, s2;
//	s1.pradines_reiksmes();
//	s2.pradines_reiksmes();
//	s1.spausdink();
//	s2.spausdink();
//	system(
//		"pause"
//	);
//}


//#include <iostream> // ivestos_datos_isskaidymas
//#include <cstring>
//using
//namespace std;
//class Klase_data
//{
//	private: char vartotojo_data[11]; // duomenu aprasymas 
//			public:      // KLASES METODAI 
//				void
//					teksto_ivestis(char *a) {
//
//					strcpy_s(vartotojo_data, a);
//				} // strcpy_s TAPATU strcpy
//					int metai(); // METODU PROTOTIPAI 
//					int menuo();
//					int data();
//				
//};
////     ISORINIU METODU REALIZACIJA (APRASAI)     
//int Klase_data::metai()
//// METU isskyrimo is teksto metodas 
//{
//	char
//		temp[5];
//	strncpy_s(temp, vartotojo_data, 4);
//	
//		return atoi(temp);
//	// simboliu vertimas skaiciumi 
//}
//int Klase_data::menuo()
//// MENESIO isskyrimo is teksto metodas 
//{
//	char
//		temp[3];
//	strncpy_s(temp, vartotojo_data + 5, 2);
//	return
//		atoi(temp);
//}
//int Klase_data::data()
//// DIENOS isskyrimo is teksto metodas 
//{
//	char
//		temp[3];
//	strncpy_s(temp, vartotojo_data + 8, 2);
//	return
//		atoi(temp);
//};
//int main()
//{
//	Klase_data x;
//	// konstruktorius (objekto x deklaravimas) 
//	char
//		t[11];
//	// Pagalbinė simbolių eilutė 
//	cout << "IVESKITE DATA : Metus, mėnesį ir dieną.Laukus skirkite taškais : \n";
//	cin >> t;
//	x.teksto_ivestis(t);
//	// Datos reikšmės perdavimas objektui 
//	cout <<
//		"Atskiri ivestos datos elementai:\n"
//		;
//	cout <<
//		"Metai: "
//		<< x.metai() << endl;
//	cout <<
//		"Mėnuo: "
//		<< x.menuo() << endl;
//
//	cout <<
//		"Diena: "
//		<< x.data() << endl;
//	system("pause");
//	return 0;
//}

//#include <iostream>
//using namespace std;
//class skaicius { 
//	public:virtual void vidurkis() {};
//			virtual void ivesk() {};
//};
//class realus :public skaicius {
//	float sk[5];
//	public: void vidurkis() {
//				float vid = 0;
//				for (int i = 0; i<5; i++)
//					vid = vid + this->sk[i];
//				cout <<"Realiu skaiciu vidurkis = "<< vid / 5 << endl;
//			}
//			void ivesk() {
//				for(int i = 0; i<5; i++) {
//					cout <<"iveskite keturis realius skaicius: ";
//					cin >>this->sk[i];
//				}
//			}
//};
//class sveikas : public skaicius {
//	int sk[5];
//	public: void vidurkis() {
//				float vid = 0;
//				for (int i = 0; i<5; i++)
//					vid = vid + this->sk[i];
//				cout <<"Sveikuju skaiciu vidurkis = "<< (float)vid / 5 << endl;
//			}
//			void ivesk() {
//				for(int i = 0; i<5; i++) {
//					cout <<"iveskite keturis sveikus skaicius: ";
//					cin >>this->sk[i];
//				}
//			}
//};
//int
//main() {
//	skaicius *s; s = new sveikas; // dinaminis sveikųjų skaičių masyvas 
//	s->ivesk();
//	s->vidurkis();
//	delete s;
//	s = new realus;
//	// dinaminis realiųjų skaičių masyvas 
//	s->ivesk();
//	s->vidurkis();
//	delete
//		s;
//	system("pause");

//};


//// SUSIETAS SĄRAŠAS
//#include <iostream> // 21_cpp.cpp
//using namespace std;
//struct sarasas {
//	int skaicius;
//	sarasas* tolimesnis;
//	int skaicius2;
//	int skaicius3;
//	int skaicius4;
//};
////=============================================== prototypes
//void naikink(sarasas* kazkas); // saraso elem. trynimas
//void spausdink(sarasas* pradzia); // saraso elem. spausdinimas
//sarasas* formuok(istream& ivestis); // saraso elem. formavimas
//int main() {
//	sarasas* sar1;
//	cout << "Iveskite skaicius ";
//	cout << "pabaigoje paspauskite bet kokią raidę " << endl;
//	sar1 = formuok(cin); // sąrašo formavimas iš CIN (ekrano)
//	cout << endl;
//	spausdink(sar1); // spausdiname sąrašo elementus
//	naikink(sar1); // triname sąrašo elementus
//	system("PAUSE");
//	return 0;
//}
////=============================================== spausdink
//void spausdink(sarasas* pradzia) {
//	for (; pradzia != NULL; pradzia = pradzia->tolimesnis) {
//		cout << pradzia->skaicius << " "; // spausdiname skaicius lauko reikšmę
//	}
//	cout << endl;
//}
////=============================================== formuok
//sarasas* formuok(istream& ivestis) {
//	sarasas* pradzia = NULL; // rodykle i pirma elementa
//	sarasas* pabaiga = NULL; // rodykle i paskutini elementa
//	int x;
//	while (ivestis >> x) {
//		sarasas* naujas = new sarasas();
//		naujas->skaicius = x; // skaicius lauko reiksme
//		naujas->tolimesnis = NULL; // tolimesnis lauko reiksme
//		if (pradzia == NULL) { // jeigu tai pirmasis elementas
//			pradzia = naujas; // pradžia ir pabaiga sutampa.
//			pabaiga = naujas;
//		}
//		else {
//			pabaiga->tolimesnis = naujas; // paskutinis rodykl÷ rodo į tolimesnį
//		}
//		pabaiga = naujas; // rodykle naujas rodo į pabaigą
//	}
//	return pradzia;
////end formuok
//void naikink(sarasas* kazkas) {
//	sarasas* laikinas;
//	for (sarasas* kuris = kazkas; kuris != NULL; kuris = laikinas) {
//		laikinas = kuris->tolimesnis; // prieš ištrinime pakopijuojame reikšmes
//		delete kuris;
//	}
//}


#include <iostream>
#include <string>
using namespace std;



class asmuo {
public: string vardas;


public: void vardo_priskyrimas() {  //public (visiems prieinama) klases funkcija, skirta ivesti varda.

	cout << "Iveskite savo varda" << endl;
	cin >> vardas;

}
public: void spausdink() {


	cout << "Aciu, " << vardas << endl;
}



};
class pirkiniai : public  asmuo {  //isvestine klase, paveldinti pagrindines bazines klases savybes.
public: string produktai[50];
public: string nupirkti_produktai[50];
		int kiekis;
		int nupirktu_kiekis;

public:void reikalingi_produktai() {

	cout << "Kiek produktu reikes nupirkti?" << endl;
	cin >> kiekis;
	cout << "Ka reikia nupirkti? " << endl;

	for (int i = 0; i < kiekis; i++) {
		cout << i + 1 << " ";
		cin >> produktai[i];

	}

}
	   /*----------------------------------------------------------------
	   Taip galima naudoti dinamini masyva
	   ---------------------------------------------------------------*/
	   /*{
		   string*produktai = NULL;

		   cout << "kiek produktu reikes nupirkti?" << endl;
		   cin >> kiekis;
		   produktai = new string[kiekis];
		   string laikinas;
		   for (int i = 0; i < kiekis; i++) {
			   cout << "Ka reikia nupirkti? " << i + 1 << endl;
			   cin >> laikinas;
			   *(produktai + i) = laikinas;

		   }
		   cout << "tavo sarasas ya.." << endl;
		   for (int i = 0; i < kiekis; i++) {
			   cout << *(produktai + i) << endl;

		   }

		   cout << "produktu kiekis yra.." << kiekis << endl;
		   delete[] produktai;

	   }
   */

public: void buvau_parduotuvej() {   //klases pirkiniai metodas, skirtas issiaiskinti, sarasa produktu, kuriuos zmogus nupirko.

	cout << "Kiek pirkiniu parnesei?" << endl;
	cin >> nupirktu_kiekis;

	for (int i = 0; i < nupirktu_kiekis; i++) {
		cout << i + 1 << " ";
		cin >> nupirkti_produktai[i];

	}
}
		/*}
		cout << "nupirkai  " << endl;
		for (int i = 0; i < nupirktu_kiekis; i++) {
		cout << nupirkti_produktai[i] << endl;

		}
		cout << "nupirktu produktu kiekis yra.." << nupirktu_kiekis << endl;

		}*/
		/*-------------------------------------------------
			taip butu gaunamos reiksmes dinaminiam masyvui
		----------------------------------------------------*/
		/*cout << "Kiek pirkiniu parnesei?" << endl;
		cin >> nupirktu_kiekis;
		string* nupirkti_produktai = 0;
		nupirkti_produktai = new string[nupirktu_kiekis];
		string nepastovus;
		for (int i = 0; i < nupirktu_kiekis; i++) {
			cout  << i + 1<<"  ";
			cin >> nepastovus;
			*(nupirkti_produktai + i) = nepastovus;

		}
		cout << "nupirkai  " << endl;
		for (int i = 0; i < nupirktu_kiekis; i++) {
			cout << *(nupirkti_produktai + i) << endl;

		}
		cout << "nupirktu produktu kiekis yra.." << nupirktu_kiekis << endl;
		delete[] nupirkti_produktai;
	}
	*/


public: void balansas() {

	for (int i = 0; i < kiekis; i++) {

		for (int j = 0; j < nupirktu_kiekis; j++) {

			if (nupirkti_produktai[j] == produktai[i]) {
				cout << "Jau nebereikia " << produktai[i] << endl;
				for (int a = i; a < kiekis; a++) {
					produktai[i] = produktai[i + 1];
				}
				i--;
				kiekis = kiekis - 1;
			}
		}
	}


}
public:void spausdink(string mas[50], int elkiek, int kas){
	int x = kas; 
	if (x = 1) {
		cout << "Reikalingu pirkiniu sarasas " << endl;
	};
	if (kas = 2) {
		cout << "Nupirktu produktu sarasas " << endl;
	};
	for (int i = 0; i < elkiek; i++) {
		cout << mas[i] << endl;

	}
}


};






int main() {
	asmuo x; //konstruktorius
	pirkiniai y;
	x.vardo_priskyrimas();
	y.reikalingi_produktai();
	y.spausdink(y.produktai, y.kiekis, 1);
	x.spausdink();
	y.buvau_parduotuvej();
	y.spausdink(y.nupirkti_produktai, y.nupirktu_kiekis, 2);
	y.balansas();
	y.spausdink(y.produktai, y.kiekis, 1);
	x.spausdink();
	system("pause");
};


//#include <iostream>
//#include <string>
//using namespace std;
//class DinaminisMasyvas {
//public:  string produktai[];
//public: void saraso_sudarymas() {
//	string*produktai = NULL;
//	int kiekis;
//	cout << "kiek produktu reikes nupirkti?" << endl;
//	cin >> kiekis;
//	produktai = new string[kiekis];
//	string laikinas;
//	for (int i = 0; i < kiekis; i++) {
//		cout << "Ka reikia nupirkti? " << i + 1 << endl;
//		cin >> laikinas;
//		*(produktai + i) = laikinas;
//
//	}
//	cout << "tavo sarasas ya.." << endl;
//	for (int i = 0; i < kiekis; i++) {
//		cout << *(produktai + i) << endl;
//
//	}
//	cout << "produktu kiekis yra.." << kiekis << endl;
//	delete [] produktai;
//};
//};
//int main(){
//	DinaminisMasyvas x;
//	x.saraso_sudarymas();
//	cout << x.produktai[0];
//
//
//
//system("pause");
//};