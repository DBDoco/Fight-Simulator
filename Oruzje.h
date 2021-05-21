#pragma once
#include <iostream>
#include <string>
#include <ctime>
#include <sstream>
#include "Borac.h"

class Oruzje
{
private:
	std::string vrsta;
	int municija;
public:
	Oruzje(std::string vrsta, int municija);
	void SetVrsta(std::string vrsta);
	void SetMunicija(int);
	std::string GetVrsta();
	int GetMunicija();
};

