
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
//	int *rodykle; // deklaruojamas kintamasis rodykle,  dar sakoma: "rodykle á .//.."  
//	rodykle = &kintamasis;// rodykle atsimena kintamojo adresà // rodykl÷ rodo á kintamojo adresà 
//	cout << "Kintamojo reikðme " << *rodykle << endl; // atsausdina 24;// spausdiname rodykles rodomo kintamojo adreso saugoma reikðme
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
//	p = &a; /* rodykle p rodo  i kint. a adresà */
//	//  kintamo a reiksme ir adresas 
//	cout <<"Kintamojo a reikðme "<< a << endl;
//	cout <<"Kintamojo a adresas "<< &a << endl;
//	cout <<"___________________________________\n\n";
//	//  naudojame rodykle p, keli variantai :
//	cout <<"rodykles  p reikðme "<< p << endl;  // spausdinamas a adresas
//	cout <<"rodykles  p adresas "<< &p << endl; //spausdinamas p adresas (jis nesutampa su a adresu
//	cout <<"Rodykles *p rodomas turinys "<< *p << endl; //spausdinama a reikðme, t.y. 24
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
//	p = &a; /* rodykle p rodo  i kint. a adresà */
//	//     Aritmetinis veiksmas 
//	(*p)++; // padidinama rodyklës rodomareikðme VIENETU
//
//	cout << "Rodykles *p rodomas turinys " << *p << endl; //spausdina 100, t.y. rodyklës rodoma reiksmæ, padidintà vienetu
//	cout << "rodykles rodomas adresas" << p << endl; //spausdina  a adresa
//	cout << "kintamojo a adesas" << &a << endl; //spausdina ta pati, ka ir pries tai esanti eilute
//
//	// spausdinama kintamojo a reiksm÷  
//	// jokiu bûdu ne p* 
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
//	p = &a; /* rodykle p rodo  i kint. a adresà */
////     Aritmetinis veiksmas 
//	*p++; // padidinama rodykl÷s rodomas adresas 
//	cout << "Rodykles *p rodomas turinys " << *p << endl;  // spausdinama kintamojo a reiksm÷  
//
//	system("pause");
//	return 0;
//}



