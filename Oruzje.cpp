#include "Oruzje.h"
#include "Borac.h"
#include <iostream>
#include <string>
#include <ctime>
#include <sstream>


Oruzje::Oruzje(std::string vrsta, int municija)
{
	this->vrsta = vrsta;
	this->municija = municija;
}

void Oruzje::SetVrsta(std::string vrsta)
{
	this->vrsta = vrsta;
}

void Oruzje::SetMunicija(int municija)
{
	this->municija = municija;
}

std::string Oruzje::GetVrsta() {return this->vrsta;}


int Oruzje::GetMunicija() { return this->municija; }

