#include "Borac.h"
#include <iostream>
#include <string>
#include <ctime>
#include <sstream>

//Konstruktor koji stavlja sve atribute na neutralno
Borac::Borac()
{
    this->ime = "NULL";
    this->zivot = 0;
    this->napad = 0;
    this->obrana = 0;
}

//-----------------Geter i seter metode-----------------
std::string Borac::GetIme() { return this->ime; }

int Borac::GetZivot() { return this->zivot; }

int Borac::GetNapad() {
    int napadni_ovu_rundu = std::rand() % this->napad;
    std::cout << this->ime << " je nanio/la " << napadni_ovu_rundu << " stete.\n";
    return napadni_ovu_rundu;
}

int Borac::GetObrana() {
    int obrani_ovu_rundu = std::rand() % this->obrana;
    std::cout << this->ime << " je obranio/la " << obrani_ovu_rundu << " stete.\n";
    return obrani_ovu_rundu;
}

std::string Borac::GetOruzje() { return this->oruzje; }

void Borac::SetIme(std::string ime)
{
    this->ime = ime;
}

void Borac::SetZivot(int zivot)
{
    this->zivot = zivot;
}

void Borac::SetNapad(int napad)
{
    this->napad = napad;
}

void Borac::SetObrana(int obrana)
{
    this->obrana = obrana;
}

void Borac::SetOruzje(std::string oruzje)
{
    this->oruzje = oruzje;
}
//-----------------Kraj geter i seter metoda-----------------

//Metoda za racunanje stete
void Borac::Napad(int steta) {
    if (steta > 0) this->zivot -= steta;
    std::cout << this->ime << " sada ima " << this->zivot << " zivota.\n";
}



//Metoda za prikaz podataka o borcima
std::string Borac::Prikaz() {
    std::stringstream ss;
    ss << this->ime <<
        " { Zivot: " << this->zivot <<
        ", Napad: " << this->napad <<
        ", Oruzje: " << this->oruzje <<
        ", Obrana: " << this->obrana << " }\n";
    return ss.str();
}