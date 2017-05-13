


#include <iostream>
#include <string>
using namespace std;



class asmuo { //Sukuriama klase, turinti tam objektus  ir metodus, nurodoma, ar jie bus privatus, ar viesi. 
public: string vardas; //klases objektas


public: void vardo_priskyrimas() {  //public (visiems prieinama)s klases metodas, skirtas ivesti varda.

	cout << "Iveskite savo varda" << endl;
	cin >> vardas;

}
public:  virtual void spausdink() { //spausdinimo metodas, i kuri galima kreiptis is bet kurios programos vietos ir jis atspausdins pries tai esancio metodo suzinota varda.


	cout << "Aciu, " << vardas << endl;
}



};
class pirkiniai : public  asmuo {  //isvestine klase, paveldinti pagrindines bazines klases savybes. Šiai klasei prieinami klases "asmuo" duomenys.
public: string produktai[50];
public: string nupirkti_produktai[50];
		int kiekis;
		int nupirktu_kiekis;

public:void reikalingi_produktai() {   //klases metodas , kuriuo formuojamas masyvas. Tai iprastinis budas, toliau parodyta, kaip galima suformuoti dinaminį masyva naudojant rodykles.

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


public: void balansas() { //klases "pirkiniai" metodas, pasiimantis prieš tai einančiais metodais surinktus duomenis ir juos palyginantis, jai randa pasikartojančiu string tipo kintamuju, iš vieno masyvo juos pasalina.

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
		public: void spausdink() {
			cout << "Dekojame uz rupesti, " << vardas << endl;
		}
public:void spausdink1(string mas[50], int elkiek, int kas, string vardas){//spausdinimo metodas, priklausantis klasei "pirkiniai", tai viesas metodas, todel gali buti naudojamas kitiems sios klases metodams ir priklausomai nuo poreikio pasiimti duomenis is klaseje naudojamu objektu (masyvu) ar metodu.
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
	asmuo x; // konstruktorius
	pirkiniai y;// kitos klases konstruktorius
	asmuo*rodyk; //rodykle
	
	x.vardo_priskyrimas(); 
	y.reikalingi_produktai();
	//y.spausdink1(y.produktai, y.kiekis, 1, x.vardas); // taip funkcija spausdink pasiekiama paprastai - per objekta, toliau bus iliustruota, kaip polimorfines funkcijos realizuojamos naudojant rodykles.
	//x.spausdink();
	y.buvau_parduotuvej();
	//y.spausdink1(y.nupirkti_produktai, y.nupirktu_kiekis, 2, x.vardas);
	y.balansas();
	//y.spausdink1(y.produktai, y.kiekis, 1, x.vardas);
	//x.spausdink();
	rodyk = &x;// rodykle nukreipiama i klases asmuo objekta x;
	rodyk->spausdink(); //bus vykdoma spausdink funkcija, kuri nurodyta klaseje asmuo, nes butent i ja nukreipta rodykle, o ne i taip pat pavadinta funkcija is klases pirkianiai. polimorfizmo iliustracija
	rodyk = &y;
	rodyk->spausdink(); //vykdoma nebe klaseje asmuo esanti funkcija, o esanti klaseje pirkiniai.
	
	system("pause");
};


