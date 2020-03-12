#ifndef UZYTKOWNIKMENEGER_H
#define UZYTKOWNIKMENEGER_H
#include <iostream>
#include <vector>
#include <windows.h>
#include <sstream>
#include <fstream>
#include <string>

#include "Uzytkownik.h"
#include "Adresat.h"
#include "PlikiZUzytkownikami.h"
#include "PlikiZAdresatami.h"
#include "AdresatMenager.h"

using namespace std;

class UzytkownikMenager
{
    int idZalogowanegoUzytkownika;
    int idAdresata;
    vector <Uzytkownik> uzytkownicy;
    PlikiZUzytkownikami plikiZUzytkownikami;
    vector <Adresat> adresaci;
    PlikiZAdresatami plikiZAdresatami;

    Uzytkownik podajDaneNowegoUzytkownika();
    int pobierzIdNowegoUzytkownika();
    bool czyIstniejeLogin(string login);

 public:
//    AdresatMenager adresatMenager;
    UzytkownikMenager(string nazwaPlikuZUzytkownikami) : plikiZUzytkownikami(nazwaPlikuZUzytkownikami){idZalogowanegoUzytkownika=0; idAdresata=0;};
    void rejestracjaUzytkownika();
    void wypiszWszystkichUzytkownikow();
    void wczytajUzytkownikowZPliku();
    int logowanieUzytkownika();
    void zmianaHaslaZalogowanegoUzytkownika();
    int wylogowanieZalogowanegoUzytkownika();
    void dodajAdresata();
    void wyswietlWszystkichAdresatow();
    void wczytajAdresatowZalogowanegoUzytkownikaZPliku();

};
#endif
