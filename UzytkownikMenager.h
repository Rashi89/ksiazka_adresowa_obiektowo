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
    PlikiZUzytkownikami plikiZUzytkownikami;

    Uzytkownik podajDaneNowegoUzytkownika();
    int pobierzIdNowegoUzytkownika();
    bool czyIstniejeLogin(string login);


 public:
    UzytkownikMenager(string nazwaPlikuZUzytkownikami) : plikiZUzytkownikami(nazwaPlikuZUzytkownikami){idZalogowanegoUzytkownika=0;};
    void rejestracjaUzytkownika();
    void wypiszWszystkichUzytkownikow();
    void wczytajUzytkownikowZPliku();
    int logowanieUzytkownika();
};
#endif
