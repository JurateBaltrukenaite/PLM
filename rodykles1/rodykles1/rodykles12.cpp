// 1 pavyzdys. Kiekvienas kintamasis turi sav reiksme ir adresa


#include <iostream> //01_cpp.cpp
using namespace std;
int main()
{
	int a = 10;
	cout << "kintamojo a reiksme " << a << endl;
	cout << "kintamojo a adresas " << &a << endl;
	system("pause");

	return 0;
}

//#include <iostream>
////02_cpp.cpp 
//using namespace std;
//void
//asmuo()
//{
//	cout << "Vytautas Barzdaitis" << endl;
//	cout << "\n         VDU " << endl;
//}
//int
//main()
//{
//	cout << "Funkcijos adresas " << &asmuo << endl; // &zenklas prie bet kokio kinamojo rodo jo adresa
//	cout << asmuo << endl;
//	system("pause");
//	return 0;
//}

#include <iostream> //03_cpp.cpp
using namespace std;
int main()
{
	int kintamasis = 24;
	// kinamajam priskiriama reiksme = 24 */ 
	int *rodykle; // deklaruojamas kintamasis rodykle,  dar sakoma: "rodykle � .//.."  
	rodykle = &kintamasis;
	// rodykle atsimena kintamojo adres� 
	// rodykl� rodo � kintamojo adres� 
	cout <<
		"Kintamojo reik�m� " << *rodykle << endl; // atsausdina 24;
	// spausdiname rodykl�s rodomo kintamojo adreso sau
	//goma reik�m�
		// 
		//�sid�m�kite, kad rodykl�s reik�m� :
	//*p
	cout << rodykle << endl; // kai rodykle be *, ji rodo kintamojo adresa, bet ne jo reiksme

	system("pause");
	return 0;
}

//#include <iostream>
//// 05_cpp.cpp
//using namespace std;
//int main()
//{
//	int a = 24, *p;
//	// kintamas a  9 sveikasis sk. 
//	// kintamasis p 9 rodykl� 
//	p = &a;
//	/* rodykle p rodo  i kint. a adres� */
//	//  kintamo a reiksme ir adresas 
//	cout <<"Kintamojo a reik�m� "<< a << endl;
//	cout <<"Kintamojo a adresas "<< &a << endl;
//	cout <<"99999999999999999999999999999999999999999\n\n"
//		;
//	//  naudojame rodykle p, keli variantai :
//	cout <<"rodykles  p reik�m� "<< p << endl;
//	cout <<"rodykles  p adresas "<< &p << endl;
//	cout <<"Rodykles *p rodomas turinys "<< *p << endl;
//	// PASTABA:   jokiu budu ne p* 
//	system("pause");
//	return 0;
//}


////aritmetiniai veiksmai
//#include <iostream> // 06_cpp.cpp 
//using namespace std;
//int main()
//{
//	int a;
//	// kintamas a  9 sveikasis sk. 
//	int *p;
//	// kintamasis p 9 rodykl� 
//	a = 99;
//	p = &a;
//	/* rodykle p rodo  i kint. a adres� */
//	//     Aritmetinis veiksmas 
//	(*p)++;
//	// padidinama rodykl�s rodomareik�m� VIENETU
//
//	cout << "Rodykles *p rodomas turinys " << *p << endl;
//	cout << "rodykles rodomas adresas" << p << endl;
//	cout << "kintamojo a adesas" << &a << endl;
//
//	// spausdinama kintamojo a reiksm�  
//	// jokiu b�du ne p* 
//	system("pause");
//	return 0;
//}