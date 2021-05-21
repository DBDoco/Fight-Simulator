#include <iostream>
#include <string>
#include <ctime>
#include <sstream>
#include "Borac.h"
#include "Borba.h"
#include "Oruzje.h"

//Pocetni screen
void intro()
{
	std::cout << "\n\n\n\t\t  FIGHT";
	std::cout << "\n\n\t\tSIMULATOR";
	std::cout << "\n\n\t\t PROJECT";
	std::cout << "\n\n\n\tMADE BY : MARKO & DOMINIK";
	std::cout << "\n";
	std::cout << "\n\n\n\tPRITISNITE ENTER ZA NASTAVAK";
	std::cout << "\n";
	char temp = 'x';
	while (temp != '\n')
		std::cin.get(temp);
	system("cls");
}

//Provjera ako je uneseni broj prirodan
bool provjera(int broj)
{
	if (std::cin.fail() || broj < 1)
		return true;
	else
		return false;
}

bool istoIme(std::string ime1, std::string ime2)
{
	if (ime1 == ime2)
		return true;
	else
		return false;
}


int main() {
	intro();
	std::string ime1, ime2;
	int zivot;
	int maxDmg;
	int maxBlock;
	int oruzje;
	Borac a, b;
	char ch;
	std::srand(time(NULL));

	do
	{
		//-------------------Unos podataka za prvog borca-------------------
		std::cout << "\n\n\n\tUNOS PRVOG BORCA";
		std::cout << "\n\n\n\tUnesite ime prvog borca -> ";
		std::cin >> ime1;
		a.SetIme(ime1);
		std::cout << "\n\n\n\tUnesite zivot prvog borca -> ";
		std::cin >> zivot;
		while (provjera(zivot)) {
			std::cout << "\n\n\tPogresan unos! Molimo unesite prirodan broj." << std::endl;
			std::cout << "\tUnesite zivot prvog borca -> ";
			std::cin.clear();
			std::cin.ignore(256, '\n');
			std::cin >> zivot;
		}
		a.SetZivot(zivot);
		std::cout << "\n\n\n\tUnesite maksimalni napad prvog borca -> ";
		std::cin >> maxDmg;
		while (provjera(maxDmg)) {
			std::cout << "\n\n\tPogresan unos! Molimo unesite prirodan broj." << std::endl;
			std::cout << "\tUnesite maksimalni napad prvog borca -> ";
			std::cin.clear();
			std::cin.ignore(256, '\n');
			std::cin >> maxDmg;
		}
		a.SetNapad(maxDmg);
		std::cout << "\n\n\n\tUnesite maksimalnu obranu prvog borca -> ";
		std::cin >> maxBlock;
		while (provjera(maxBlock)) {
			std::cout << "\n\n\tPogresan unos! Molimo unesite prirodan broj." << std::endl;
			std::cout << "\tUnesite maksimalnu obranu prvog borca -> ";
			std::cin.clear();
			std::cin.ignore(256, '\n');
			std::cin >> maxBlock;
		}
		a.SetObrana(maxBlock);
		system("cls");
		do
		{
			std::cout << "\n\n\n\tUNOS PRVOG BORCA";
			std::cout << "\n\n\n\tOdaberite oruzje prvog borca:\n";
			std::cout << "\n\n\t 1. Glock (DIREKTAN NAPAD: 10 | VELICINA SPREMNIKA ZA METKE: 7)\n";
			std::cout << "\n\n\t 2. Revolver (DIREKTAN NAPAD: 20 | VELICINA SPREMNIKA ZA METKE: 4)\n";
			std::cout << "\n\n\t 3. RPG (DIREKTAN NAPAD: 40 | VELICINA SPREMNIKA ZA METKE: 1)\n";
			std::cout << "\n\n\t Odabir-> ";
			std::cin >> oruzje;
			if (oruzje != 1 && oruzje != 2 && oruzje != 3)
			{
				system("cls");
			}
		} while (oruzje != 1 && oruzje != 2 && oruzje != 3);

		switch (oruzje)
		{
		case 1:
			a.SetOruzje("Glock");
			break;
		case 2:
			a.SetOruzje("Revolver");
			break;
		case 3:
			a.SetOruzje("RPG");
			break;
		}
		std::cout << "\n";
		system("cls");
		//-------------------Kraj unosa podataka za prvog borca-------------------

		//-------------------Unos podataka za drugog borca-------------------
		std::cout << "\n\n\n\tUNOS DRUGOG BORCA";
		std::cout << "\n\n\n\tUnesite ime drugog borca -> ";
		std::cin >> ime2;
		while (istoIme(ime1, ime2)) {
			std::cout << "\n\n\tPogresan unos! Molimo unesite ime razlicito od prvog." << std::endl;
			std::cout << "\tUnesite ime drugog borca -> ";
			std::cin.clear();
			std::cin.ignore(256, '\n');
			std::cin >> ime2;
		}
		b.SetIme(ime2);
		std::cout << "\n\n\n\tUnesite zivot drugog borca -> ";
		std::cin >> zivot;
		while (provjera(zivot)) {
			std::cout << "\n\n\tPogresan unos! Molimo unesite prirodan broj." << std::endl;
			std::cout << "\tUnesite zivot prvog borca -> ";
			std::cin.clear();
			std::cin.ignore(256, '\n');
			std::cin >> zivot;
		}
		b.SetZivot(zivot);
		std::cout << "\n\n\n\tUnesite maksimalni napad drugog borca -> ";
		std::cin >> maxDmg;
		while (provjera(maxDmg)) {
			std::cout << "\n\n\tPogresan unos! Molimo unesite prirodan broj." << std::endl;
			std::cout << "\tUnesite maksimalnu obranu prvog borca -> ";
			std::cin.clear();
			std::cin.ignore(256, '\n');
			std::cin >> maxBlock;
		}
		b.SetNapad(maxDmg);
		std::cout << "\n\n\n\tUnesite maksimalnu obranu drugog borca -> ";
		std::cin >> maxBlock;
		while (provjera(maxBlock)) {
			std::cout << "\n\n\tPogresan unos! Molimo unesite prirodan broj." << std::endl;
			std::cout << "\tUnesite maksimalnu obranu prvog borca -> ";
			std::cin.clear();
			std::cin.ignore(256, '\n');
			std::cin >> maxBlock;
		}
		b.SetObrana(maxBlock);
		system("cls");
		do
		{
			std::cout << "\n\n\n\tUNOS DRUGOG BORCA";
			std::cout << "\n\n\n\tOdaberite oruzje drugog borca:\n";
			std::cout << "\n\n\t 1. Glock (DIREKT NAPAD: +10 | VELICINA SPREMNIKA ZA METKE: 7)\n";
			std::cout << "\n\n\t 2. Revolver (DIREKT NAPAD: +20 | VELICINA SPREMNIKA ZA METKE: 4)\n";
			std::cout << "\n\n\t 3. RPG (DIREKT NAPAD: +40 | VELICINA SPREMNIKA ZA METKE: 1)\n";
			std::cout << "\n\n\t Odabir-> ";
			std::cin >> oruzje;
			if (oruzje != 1 || oruzje != 2 || oruzje != 3)
			{
				system("cls");
			}
		} while (oruzje != 1 && oruzje != 2 && oruzje != 3);

		switch (oruzje)
		{
		case 1:
			b.SetOruzje("Glock");
			break;
		case 2:
			b.SetOruzje("Revolver");
			break;
		case 3:
			b.SetOruzje("RPG");
			break;
		}
		std::cout << "\n";
		system("cls");
		//-------------------Kraj unosa podataka za drugog borca-------------------


		//Metoda koja izvrsava borbu
		Borba::ZapocniBorbu(a, b);

		//Provjera za novu igru
		std::cout << "Igraj ponovno? y/n \n";
		std::cout << "Odgovor -> ";
		std::cin >> ch;
		if (ch != 'y' && ch != 'n')
		{
			do
			{
				std::cout << "Pogresan unos.. Pokusajte ponovno.\n";
				std::cout << "Odgovor -> ";
				std::cin >> ch;
			} while (ch != 'y' && ch != 'n');
		}

		if (ch == 'n')
			break;
	system("cls");
	} while (ch == 'y');
	system("cls");
	return 0;
}