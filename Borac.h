#pragma once
#include <iostream>
#include <string>
#include <ctime>
#include <sstream>


class Borac
{
private:
    std::string ime;
    int zivot;
    int napad;
    int obrana;
    std::string oruzje;

public:
    Borac();
    std::string GetIme();
    void SetIme(std::string);
    int GetZivot();
    void SetZivot(int);
    int GetNapad();
    void SetNapad(int);
    int GetObrana();
    void SetObrana(int);
    std::string GetOruzje();
    void SetOruzje(std::string);
    void Napad(int steta);
    std::string Prikaz();
};

