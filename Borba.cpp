#include "Borba.h"
#include "Borac.h"
#include "Oruzje.h"
#include <iostream>
#include <string>
#include <ctime>
#include <sstream>

void Borba::ZapocniBorbu(Borac prvi, Borac drugi) {
    //Prikaz informacije o borcima
    std::cout << "Borba:\n" << prvi.Prikaz() << "vs\n" << drugi.Prikaz() << "\n";

    int odabir1, odabir2;
    Oruzje glock1("Glock", 7), glock2("Glock", 7), revolver1("Revolver", 4), revolver2("Revolver", 4), rpg1("RPG", 1), rpg2("RPG", 1);
    int prva_steta = 0;
    int druga_steta = 0;

    //Beskonacna petlja koja zavrsava ako jedan od boraca izgubi sav zivot odnosno zdravlje
    while (true) {
            if (glock1.GetMunicija() > 0 && revolver1.GetMunicija() > 0 && rpg1.GetMunicija() > 0)
            {
                do
                {
                    std::cout << "\n\n\n\tSto " << prvi.GetIme() << " planira uciniti:";
                    std::cout << "\n\n\t 1. Napadni\n";
                    std::cout << "\n\n\t 2. Preskoci napad (borac vraca zdravlje za 20)\n";
                    std::cout << "\n\n\t 3. Pucaj (metak se trosi + metak je nemoguce obraniti)\n";
                    std::cout << "\n\n\t Odabir-> ";
                    std::cin >> odabir1;
                    std::cout << "\n";
                    if (odabir1 != 1 && odabir1 != 2 && odabir1 != 3)
                    {
                        system("cls");
                    }
                } while (odabir1 != 1 && odabir1 != 2 && odabir1 != 3);
            }

            else
            {
                do
                {
                    std::cout << "\n\n\n\tSto " << prvi.GetIme() << " planira uciniti:";
                    std::cout << "\n\n\t 1. Napadni\n";
                    std::cout << "\n\n\t 2. Preskoci napad (borac vraca zdravlje za 20)\n";
                    std::cout << "\n\n\t" << prvi.GetOruzje() << " nema municije.\n";
                    std::cout << "\n\n\t Odabir-> ";
                    std::cin >> odabir1;
                    std::cout << "\n";
                    if (odabir1 != 1 && odabir1 != 2)
                    {
                        system("cls");
                    }
                } while (odabir1 != 1 && odabir1 != 2);
            }

        if (odabir1 == 1)
        {
            std::cout << "______________________________________\n";
            std::cout << "\n";
            std::cout << "\t" << prvi.GetIme() << " NAPADA..\n\n";
            int prva_steta = prvi.GetNapad() - drugi.GetObrana();
            drugi.Napad(prva_steta);
            std::cout << "\n";
            std::cout << "______________________________________\n";
            if (drugi.GetZivot() <= 0) break;
        }

        else if (odabir1 == 2)
        {
            std::cout << "______________________________________\n";
            std::cout << "\n";
            prvi.SetZivot(prvi.GetZivot() + 20);
            std::cout << "Zdravlje od borca: "<<prvi.GetIme()<<" vraceno je za 20.\n";
            std::cout << prvi.GetIme() << " sada ima " << prvi.GetZivot() << " zdravlja.\n";
            std::cout << "______________________________________\n";
        }
        
        else if (odabir1==3)
        {
            if (prvi.GetOruzje() == "Glock")
            {
                glock1.SetMunicija(glock1.GetMunicija() - 1);
                std::cout << "______________________________________\n";
                std::cout << "\n";
                std::cout << "\t" << prvi.GetIme() << " PUCA..\n\n";
                prva_steta = 10;
                std::cout << "Metak je napravio: " << prva_steta << " stete.\n";
                drugi.Napad(prva_steta);
                std::cout << "Stanje municije: " << glock1.GetMunicija();
                std::cout << "\n";
                std::cout << "______________________________________\n";
                if (drugi.GetZivot() <= 0) break;
            }

            else if (prvi.GetOruzje() == "Revolver")
            {
                revolver1.SetMunicija(revolver1.GetMunicija() - 1);
                std::cout << "______________________________________\n";
                std::cout << "\n";
                std::cout << "\t" << prvi.GetIme() << " PUCA..\n\n";
                prva_steta = 20;
                std::cout << "Metak je napravio: " << prva_steta << " stete.\n";
                drugi.Napad(prva_steta);
                std::cout << "Stanje municije: " << revolver1.GetMunicija();
                std::cout << "\n";
                std::cout << "______________________________________\n";
                if (drugi.GetZivot() <= 0) break;
            }

            else if (prvi.GetOruzje() == "RPG")
            {
                rpg1.SetMunicija(rpg1.GetMunicija() - 1);
                std::cout << "______________________________________\n";
                std::cout << "\n";
                std::cout << "\t" << prvi.GetIme() << " PUCA..\n\n";
                prva_steta = 40;
                std::cout << "Metak je napravio: " << prva_steta << " stete.\n";
                drugi.Napad(prva_steta);
                std::cout << "Stanje municije: " << rpg1.GetMunicija();
                std::cout << "\n";
                std::cout << "______________________________________\n";
                if (drugi.GetZivot() <= 0) break;
            }
        }

            if (glock2.GetMunicija() > 0 && revolver2.GetMunicija() > 0 && rpg2.GetMunicija() > 0)
            {
                do
                {
                    std::cout << "\n\n\n\tSto " << drugi.GetIme() << " planira uciniti:";
                    std::cout << "\n\n\t 1. Napadni\n";
                    std::cout << "\n\n\t 2. Preskoci napad (borac vraca zdravlje za 20)\n";
                    std::cout << "\n\n\t 3. Pucaj (metak se trosi + metak je nemoguce obraniti)\n";
                    std::cout << "\n\n\t Odabir-> ";
                    std::cin >> odabir2;
                    std::cout << "\n";
                    if (odabir2 != 1 && odabir2 != 2 && odabir2 != 3)
                    {
                        system("cls");
                    }
                } while (odabir2 != 1 && odabir2 != 2 && odabir2 != 3);
            }

            else
            {
                do
                {
                    std::cout << "\n\n\n\tSto " << drugi.GetIme() << " planira uciniti:";
                    std::cout << "\n\n\t 1. Napadni\n";
                    std::cout << "\n\n\t 2. Preskoci napad (borac vraca zdravlje za 20)\n";
                    std::cout << "\n\n\t" << drugi.GetOruzje() << " nema municije.\n";
                    std::cout << "\n\n\t Odabir-> ";
                    std::cin >> odabir2;
                    std::cout << "\n";
                    if (odabir2 != 1 && odabir2 != 2)
                    {
                        system("cls");
                    }
                } while (odabir2 != 1 && odabir2 != 2);
            }

        if (odabir2 == 1)
        {
            std::cout << "______________________________________\n";
            std::cout << "\n";
            std::cout << "\t" << drugi.GetIme() << " NAPADA..\n\n";
            int druga_steta = drugi.GetNapad() - prvi.GetObrana();
            prvi.Napad(druga_steta);
            std::cout << "\n";
            std::cout << "______________________________________\n";
            if (prvi.GetZivot() <= 0) break;
        }

        else if (odabir2 == 2)
        {
            std::cout << "______________________________________\n";
            std::cout << "\n";
            drugi.SetZivot(drugi.GetZivot() + 20);
            std::cout << "Zdravlje od borca: " << drugi.GetIme() << " vraceno je za 20.\n";
            std::cout << drugi.GetIme() << " sada ima " << drugi.GetZivot() << " zdravlja.\n";
            std::cout << "______________________________________\n";
        }

        else if (odabir2 == 3)
        {
            if (drugi.GetOruzje() == "Glock")
            {
                glock2.SetMunicija(glock2.GetMunicija() - 1);
                std::cout << "______________________________________\n";
                std::cout << "\n";
                std::cout << "\t" << drugi.GetIme() << " PUCA..\n\n";
                druga_steta = 10;
                prvi.Napad(druga_steta);
                std::cout << "Stanje municije: " << glock2.GetMunicija();
                std::cout << "\n";
                std::cout << "______________________________________\n";
                if (prvi.GetZivot() <= 0) break;
            }

            else if (drugi.GetOruzje() == "Revolver")
            {
                revolver2.SetMunicija(revolver2.GetMunicija() - 1);
                std::cout << "______________________________________\n";
                std::cout << "\n";
                std::cout << "\t" << drugi.GetIme() << " PUCA..\n\n";
                druga_steta = 20;
                prvi.Napad(druga_steta);
                std::cout << "Stanje municije: " << revolver2.GetMunicija();
                std::cout << "\n";
                std::cout << "______________________________________\n";
                if (prvi.GetZivot() <= 0) break;
            }

            else if (drugi.GetOruzje() == "RPG")
            {
                rpg2.SetMunicija(rpg2.GetMunicija() - 1);
                std::cout << "______________________________________\n";
                std::cout << "\n";
                std::cout << "\t" << drugi.GetIme() << " PUCA..\n\n";
                druga_steta = 40;
                prvi.Napad(druga_steta);
                std::cout << "Stanje municije: " << rpg2.GetMunicija();
                std::cout << "\n";
                std::cout << "______________________________________\n";
                if (prvi.GetZivot() <= 0) break;
            }
        }
    }
    //Objava pobjednika odnosno gubitnika
    if (drugi.GetZivot() <= 0) {
        std::cout << drugi.GetIme() << " Je umro/la!\n";
        std::cout << prvi.GetIme() << " Pobjedjuje!\n";
    }
    else {
        std::cout << prvi.GetIme() << " Je umro/la!\n";
        std::cout << drugi.GetIme() << " Pobjedjuje!\n";
    }
}
