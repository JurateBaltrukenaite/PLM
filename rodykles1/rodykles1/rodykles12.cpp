
//#include <iostream> //01_cpp.cpp
//using namespace std;
//int main()
//{
//	int a = 10;
//	cout <<"kintamojo a reiksme "<< a << endl; //atspausdina a reiksme, t.y. 10
//	cout <<"kintamojo a adresas "<< &a << endl; //& zenklas prie kintamaji nurodo jo adresa atmintyje, o ne reiksme
//
//	system("pause");
//	return 0;
//}


//#include <iostream> //02_cpp.cpp 
//using namespace std;
//void asmuo()
//{
//	cout << "Vytautas Barzdaitis" << endl;
//	cout << "\n         VDU " << endl;
//}
//int
//main()
//{
//	cout << "Funkcijos adresas " << &asmuo << endl; // &zenklas prie bet kokio kinamojo rodo jo adresa, adresa gali tureti ir funkcija, ne tik kintamasis
//	asmuo();
//
//	system("pause");
//	return 0;
//}

//#include <iostream> //03_cpp.cpp
//using namespace std;
//int main()
//{
//	int kintamasis = 24; // kinamajam priskiriama reiksme = 24 */ 
//	int *rodykle; // deklaruojamas kintamasis rodykle,  dar sakoma: "rodykle � .//.."  
//	rodykle = &kintamasis;// rodykle atsimena kintamojo adres� // rodykl� rodo � kintamojo adres� 
//	cout << "Kintamojo reik�me " << *rodykle << endl; // atsausdina 24;// spausdiname rodykles rodomo kintamojo adreso saugoma reik�me
//
//	cout << rodykle << endl; // kai rodykle be *, ji rodo kintamojo adresa, bet ne jo reiksme
//	cout << &kintamasis << endl; //spausdina ta pati, ka ir pries tai esanti eilute - kintamojo adresa.
//	system("pause");
//	return 0;
//}


//#include <iostream> // 05_cpp.cpp
//using namespace std;
//int main()
//{
//	int a = 24, *p; // kintamas a  yra sveikasis sk. 
//					// kintamasis p yra rodykle 
//	p = &a; /* rodykle p rodo  i kint. a adres� */
//	//  kintamo a reiksme ir adresas 
//	cout <<"Kintamojo a reik�me "<< a << endl;
//	cout <<"Kintamojo a adresas "<< &a << endl;
//	cout <<"___________________________________\n\n";
//	//  naudojame rodykle p, keli variantai :
//	cout <<"rodykles  p reik�me "<< p << endl;  // spausdinamas a adresas
//	cout <<"rodykles  p adresas "<< &p << endl; //spausdinamas p adresas (jis nesutampa su a adresu
//	cout <<"Rodykles *p rodomas turinys "<< *p << endl; //spausdinama a reik�me, t.y. 24
//	
//	system("pause");
//	return 0;
//}


												////Aritmetiniai veiksmai


//#include <iostream> // 06_cpp.cpp 
//using namespace std;
//int main()
//{
//	int a; // kintamas a  - sveikasis sk. 
//	int *p; // kintamasis p - rodykle 
//	a = 99;
//	p = &a; /* rodykle p rodo  i kint. a adres� */
//	//     Aritmetinis veiksmas 
//	(*p)++; // padidinama rodykl�s rodomareik�me VIENETU
//
//	cout << "Rodykles *p rodomas turinys " << *p << endl; //spausdina 100, t.y. rodykl�s rodoma reiksm�, padidint� vienetu
//	cout << "rodykles rodomas adresas" << p << endl; //spausdina  a adresa
//	cout << "kintamojo a adesas" << &a << endl; //spausdina ta pati, ka ir pries tai esanti eilute
//
//	// spausdinama kintamojo a reiksm�  
//	// jokiu b�du ne p* 
//	cout << "kintamojo a reiksme " << a << endl; //spausdina 100, tokia reiksme kintamasis gavo naudojantis rodykle (prie jos rodomos reiksmes pridejus vieneta)
//	system("pause");
//	return 0;
//}


//#include <iostream> // 07_cpp.cpp 
//using namespace std;
//int main()
//{
//	int a;// kintamas a  yra sveikasis sk. 
//	int *p; // kintamasis p yra rodykle 
//	a = 99;
//	p = &a; /* rodykle p rodo  i kint. a adres� */
////     Aritmetinis veiksmas 
//	*p++; // padidinama rodykl�s rodomas adresas 
//	cout << "Rodykles *p rodomas turinys " << *p << endl;  // turetu spausdinti kintamojo a reiksme, bet parasius P++ rodykle nustumiama per viena vieta nuo a adreso ir rodo i neaisku kokia reiksme.  
//	*p--; //graziname rodykle ties buvusia vieta, t,y, kinamojo a adresu
//	cout << " 99-5 yra  " << (*p) - 5 << endl;
//	cout << "99*2 yra   " << (*p) * 2 << endl;
//	system("pause");
//	return 0;
//}

				  //MASYVAI IR RODYKLES

//#include <iostream> // 08_cpp.cpp
//using namespace std;
//int main()
//{
//	int i;
//	int sk[5] = { 10, 20, 30, 40, 50 };
//	for (i = 0; i < 5; i++)
//		cout << sk[i] << endl; // �ptrastinis masyvo elem. spausdinimas
//	system("pause");
//	return 0;
//}

//#include <iostream> // 09_cpp.cpp
//using namespace std;
//int main()
//{
//	int i;
//	int sk[5] = { 10, 20, 30, 40, 50 };
//	for (i = 0; i < 5; i++)
//		cout << *(sk + i) << endl; // masyvo element� spausdiname naudodami
//								   // rodykles rodomo adreso reik�m�     Bet kodel??? rodykle niekur nedeklaruota!!
//	system("pause");
//	return 0;
//}

//#include <iostream> // 10_cpp.cpp
//using namespace std;
//int main()
//{
//	int i;
//	int sk[5] = { 10, 20, 30, 40, 50 };
//	int *p;
//	p = sk; // rodykle rodo � pirm� masyvo element�
//	for (i = 0; i < 5; i++)
//		cout << *(p + i) << endl; // masyvo elementu, i kuriuos nukreipta rodykle, reiksmes
//	system("pause");
//	return 0;
//}


//#include <iostream> // 11_cpp.cpp
//using namespace std;
//int main()
//{
//	int i;
//	int sk[] = { 10, 20, 30, 40, 50 }; // !!!
//	int *p;
//	p = sk;
//	for (i = 0; i < 5; i++)
//		cout << *p++ << endl; // spausdiname rodykl�s rodom� reik�m�
//	cout << *(p + i) << endl;				  // ir pereiname prie tolimesnio elemento
//	system("pause");
//	return 0;
//}

//#include <iostream> // 12_cpp.cpp
//using namespace std;
//int main()
//{
//	char str1[] = "Pirma eilute"; //paprastas masyvas
//	char *str2 = "Antra eilute"; //rodyklinis masyvas??
//	cout << "str1 " << str1 << endl;
//	cout << "str2 " << str2 << endl;
//	 //str1++; // Neteisinga i�rai�ka, Kodel
//	// cout << "str1++ " << str1 << endl;
//	str2=str2+2; // Teisinga i�rai�ka, KOD�L - pakinta adresas
//	cout << "str2++ " << str2 << endl; //spausdina  "tra eilute", t.y. pradeda spausdinti dviem zenklais toliau, kadangi str2+2 reiskia perejima prie kito adreso
//	system("pause");
//	return 0;
//}


//#include <iostream> // 13_cpp.cpp
//using namespace std;
//void spausdink(char *rodykle);
//int main()
//{
//	char str[] = "Sveiki!! Kaip veikia RODYKLES?";
//	spausdink(str);
//	cout << endl;
//	system("pause");
//	return 0;
//}
//void spausdink(char *rodykle)
//{
//	while (*rodykle)
//		cout << *rodykle++; // spausdiname po vien� raid�
//							// nereik�jo su�inoti masyvo ilgio !!!
//}

//#include <iostream> // 14_cpp.cpp
//using namespace std;
//int main()
//{
//	char *savaites_diena[7] = { "Pirmadienis", "Antradienis",
//		"Treciadienis", "Ketvirtadienis", "Penktadienis", "Sestadienis",
//		"Sekmadienis" };
//	int i;
//	for (i = 0; i<7; i++)
//		cout << savaites_diena[i] << endl;
//	system("pause");
//	return 0;
//}

//#include <iostream> // 15_cpp.cpp
//using namespace std;
//int main()
//{
//	int *masyvas[4]; /* Rodykli� masyvas */
//	int i = 10, j = 20, k = 30, l = 40;
//	int m;
//	masyvas[0] = &i;
//	masyvas[1] = &j;
//	masyvas[2] = &k;
//	masyvas[3] = &l;
//	for (m = 0; m <= 3; m++)
//		cout << *(masyvas[m]) << endl;
//	system("pause");
//	return 0;
//}

  //Uzduotis


//#include <iostream> 
//using namespace std;
//
//struct data
//{
//	int diena;
//	int menuo;
//	int metai;
//} 
//d = { 24, 8, 2009 }; //kai duomenys nurodomi is karto
//int main() {
//
//	cout << d.diena << endl;
//	cout << d.menuo << endl;
//	cout << d.metai << endl;
//
//	system("pause");
//	return 0;
//}

//#include <iostream> 
//using namespace std;
//
//struct data {// data 9 strukt�ros duomen� tipas // duomen� tipas turi tris narius (laukus) 
//	int diena; // laukas (narys) diena. 
//	int menuo; // laukas (narys) menuo. 
//	int metai; // laukas (narys) metai. 
//};
////data d; // sukurimas kintamasis d, kuris bus data duomen� tipo
//int main() {
//	struct data d; // sukurimas kintamasis d, kuris bus data duomen� tipo
//	d.diena = 24;// strukt�ros kint. D nariui diena priskiriama reik�me 24
//	d.menuo = 8;// strukt�ros kint. D nariui menuo priskiriama reik�m� 8
//	d.metai = 2009;// strukt�ros kint. D nariui metai priskiriama reik�m� 2009
//
//	cout << d.diena << endl;
//	cout << d.menuo << endl;
//	cout << d.metai << endl;
//
//	system("pause");
//	return 0;
//}

//#include <iostream> 
//using namespace std;
//
//struct data {// data 9 strukt�ros duomen� tipas // duomen� tipas turi tris narius (laukus) 
//	int diena; // laukas (narys) diena. 
//	int menuo; // laukas (narys) menuo. 
//	int metai; // laukas (narys) metai. 
//};
////data d; // sukurimas kintamasis d, kuris bus data duomen� tipo
//
//int main() {
//	struct data d; // sukurimas kintamasis d, kuris bus data duomen� tipo
//
//
//	cout << "IVESKITE dien� (sveikasis skai�ius) ";
//	cin >> d.diena;
//	cout << "IVESKITE m�nes� (sveikasis skai�ius) ";
//	cin >> d.menuo;
//	cout << "IVESKITE metus (sveikasis skai�ius) ";
//	cin >> d.metai;
//
//	cout << "diena  " <<d.diena << endl;
//	cout <<"menuo  " << d.menuo << endl;
//	cout <<" metai  " << d.metai << endl;
//
//
//	system("pause");
//	return 0;
//}




