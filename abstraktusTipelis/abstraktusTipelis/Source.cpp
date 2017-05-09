

//#include <iostream>
//// klase_pvz1.cpp
//using namespace std;
//class
//	Klase {
//private: int duomenys; // duomenys
//			public: void pradines_reiksmes( int d) // metodai
//					{
//						duomenys = d;
//					};
//					void spausdink()
//					{
//						cout << "Duomenys = "<< duomenys << endl;
//					}
//}
//;
//void
//main()
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
//	// Pagalbinë simboliø eilutë 
//	cout << "IVESKITE DATA : Metus, mënesá ir dienà.Laukus skirkite taðkais : \n";
//	cin >> t;
//	x.teksto_ivestis(t);
//	// Datos reikðmës perdavimas objektui 
//	cout <<
//		"Atskiri ivestos datos elementai:\n"
//		;
//	cout <<
//		"Metai: "
//		<< x.metai() << endl;
//	cout <<
//		"Mënuo: "
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
//	skaicius *s; s = new sveikas; // dinaminis sveikøjø skaièiø masyvas 
//	s->ivesk();
//	s->vidurkis();
//	delete s;
//	s = new realus;
//	// dinaminis realiøjø skaièiø masyvas 
//	s->ivesk();
//	s->vidurkis();
//	delete
//		s;
//	system("pause");
//};

#include <iostream>
#include <string>
using namespace std;



class asmuo {
public: struct zmogus {
	string vardas;
	float balansas;
};
		zmogus zmogutis;
public: void vardo_priskyrimas() {  //public (visiems prieinama) klases funkcija, skirta ivesti varda.

	cout << "Iveskite savo varda" << endl;
	cin >> zmogutis.vardas;

};
public: void vardo_spausdinimas() {


	cout << "zmogucio vardas yra  " << zmogutis.vardas << endl;
}



};
class pirkiniai : public  asmuo {  //isvestine klase, paveldinti pagrindines bazines klases savybes.
public: string produktai[20];
public: struct nupirkti_produktai {
	string pavadinimas;
	float kaina;
};
		nupirkti_produktai nupirkau[20];


		int reikalingu_produktu_kiekis;
		int nupirktu_produktu_kiekis;

public:void reikalingi_produktai(string kieno) {

	int i=0;
	reikalingu_produktu_kiekis = -1;

	cout << "Ko reikia nupirkti?" << endl;
	
	for (i = 0; ; i++) {
		cin >> produktai[i];
		reikalingu_produktu_kiekis++;

		if (produktai[i] == "viskas")
			break;
	}
	cout << "sarasa sudare   " << kieno << endl;

};



public: void buvau_parduotuvej() {

	cout << "NPK  " << reikalingu_produktu_kiekis<<endl;
	cout << "produkt" << produktai[0] << endl;
	cout << "Kà pirkai? Kiek kainavo? " << endl;

	for (int i = 0; ; i++) {
		cout << "ka?  " << endl;
		
		cin >> nupirkau[i].pavadinimas;
		if (nupirkau[i].pavadinimas == "viskas")
			break;
		cout << "kiek  " << endl;
		cin >> nupirkau[i].kaina;
		nupirktu_produktu_kiekis=i+1;

	}

	cout << "nupirktu_produktu_kiekis  " << nupirktu_produktu_kiekis << endl;

};
public: void balansas() {
	for (int i = 0; i <= nupirktu_produktu_kiekis; i++) {
		for (int j = 0; j <= reikalingu_produktu_kiekis; j++) {

			if (nupirkau[i].pavadinimas == produktai[j]) {
				
			}
		}
	}

};

};






int main() {
	asmuo x; //konstruktorius
	pirkiniai y;
	//reikalingi_pirkiniai sarasas; //konstruktorius
	//nupirkta pirkiniai;



	x.vardo_priskyrimas(); //kontr

	y.reikalingi_produktai(x.zmogutis.vardas);
	cout << y.produktai[0] << endl;



	x.vardo_spausdinimas();
	y.buvau_parduotuvej();
	//sarasas.reikalingi_produktai(x.zmogutis.vardas);
	//pirkiniai.nupirkau(x.zmogutis.vardas);
	//sarasas.reikalingi_produktai(x.zmogutis.vardas);
	system("pause");
};
