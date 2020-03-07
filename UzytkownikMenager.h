#ifndef UZYTKOWNIKMENEGER_H
#define UZYTKOWNIKMENEGER_H
#include <iostream>
#include <vector>
#include <windows.h>
#include <sstream>
#include <fstream>

#include "Uzytkownik.h"
#include "PlikiZUzytkownikami.h"

using namespace std;

class UzytkownikMenager
{
     int idZalogowanegoUzytkownika;
     vector <Uzytkownik> uzytkownicy;

    Uzytkownik podajDaneNowegoUzytkownika();
    int pobierzIdNowegoUzytkownika();
    bool czyIstniejeLogin(string login);
    PlikiZUzytkownikami plikZUzytkownikami;


 public:
    void rejestracjaUzytkownika();
    void wypiszWszystkichUzytkownikow();
};
#endif
