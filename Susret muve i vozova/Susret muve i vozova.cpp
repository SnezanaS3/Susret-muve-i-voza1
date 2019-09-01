// Susret muve i vozova.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <iomanip>

using namespace std;

int main()

{
	float va = 60.0;
	float vb = 40.0;
	float vm = 200.0;
	float d = 600.0;
	int i = 15;
	int j = 1;

	float rastojanje;
	float vrijemeEtape;
	float ukupnoVrijeme = 0;
	float duzinaEtape;
	float putA;
	float putB;
	float preostaloPutaA;
	float preostaloPutaB;
	rastojanje = d;

	for (int i = 0; i <= 15; i++)
	{

		if (i % 2 == 1) //etapa je NEPARNA ako se muva krece PREMA vozu B
		{
			vrijemeEtape = rastojanje / (vm + vb);	//vrijeme koje je potrebno da muva predje do B	
		}
		else //etapa je PARNA ako se muva krece OD voza B
		{
			vrijemeEtape = rastojanje / (vm + va);
		}
		ukupnoVrijeme += vrijemeEtape;
		putA = va * ukupnoVrijeme; //ukupni predjeni put voza A
		putB = vb * ukupnoVrijeme; //ukupni predjeni put voza B
		duzinaEtape = vm * vrijemeEtape; //put koji predje muva u etapi
		preostaloPutaA = d - putA; //preostalo da predje puta A
		preostaloPutaB = d - putB; //preostalo da predje puta B
		rastojanje = d - putA - putB; //rastojanje izmedju vozova

		cout << "------------------------------------------------" << endl;
		cout << "|" << setw(25) << "E T A P A" << "  " << j++ << setw(19) << "|" << endl;
		cout << "|----------------------------------------------|" << endl;


		cout << left << setw(3) << "|" << left << setw(25) << "Vrijeme etape je: " << right << setw(15) << vrijemeEtape << " " << "h" << right << setw(3) << "|" << endl;
		cout << left << setw(3) << "|" << left << setw(25) << "Ukupno vrijeme je: " << right << setw(15) << ukupnoVrijeme << " " << "h" << right << setw(3) << "|" << endl;

		cout << left << setw(3) << "|" << left << setw(25) << "Put A je: " << right << setw(15) << putA << " " << "km" << right << setw(2) << "|" << endl;
		cout << left << setw(3) << "|" << left << setw(25) << "Put B je: " << right << setw(15) << putB << " " << "km" << right << setw(2) << "|" << endl;

		cout << left << setw(3) << "|" << left << setw(25) << "Duzina etape: " << right << setw(15) << duzinaEtape << " " << "km" << right << setw(2) << "|" << endl;
		cout << left << setw(3) << "|" << left << setw(25) << "Preostalo rastojanje:  " << right << setw(15) << rastojanje << " " << "km" << right << setw(2) << "|" << endl;

		cout << left << setw(3) << "|" << left << setw(25) << "Preostalo A: " << right << setw(15) << preostaloPutaA << " " << "km" << right << setw(2) << "|" << endl;
		cout << left << setw(3) << "|" << left << setw(25) << "Preostalo B: " << right << setw(15) << preostaloPutaB << " " << "km" << right << setw(2) << "|" << endl;
		cout << endl;
		

		i++; //iduce etapa
	}

}