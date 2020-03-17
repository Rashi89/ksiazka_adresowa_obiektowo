#ifndef ADRESATMENEGER_H
#define ADRESATMENEGER_H
#include <iostream>
#include <vector>
#include <windows.h>
#include <sstream>
#include <fstream>
#include <string>
#include <algorithm>

#include "Adresat.h"
#include "UzytkownikMenager.h"
#include "PlikiZAdresatami.h"
#include "MetodyPomocnicze.h"

using namespace std;

class AdresatMenager
{
    const int ID_ZALOGOWANEGO_UZYTKOWNIKA;
    vector <Adresat> adresaci;
    PlikiZAdresatami plikiZAdresatami;

    Adresat podajDaneNowegoAdresata();
    void wyswietlDaneAdresata(Adresat adresat);

public:
    AdresatMenager(string nazwaPlikuZAdresatami, int idZalogowanegoUzytkownika): plikiZAdresatami(nazwaPlikuZAdresatami), ID_ZALOGOWANEGO_UZYTKOWNIKA(idZalogowanegoUzytkownika)
    {
        adresaci = plikiZAdresatami.wczytajAdresatowZalogowanegoUzytkownikaZPliku(ID_ZALOGOWANEGO_UZYTKOWNIKA);
    };
    void wyswietlWszystkichAdresatow();

    void dodajAdresata();

    Adresat pobierzDaneAdresata(string daneAdresataOddzielonePionowymiKreskami);
    string zamienDaneAdresataNaLinieZDanymiOddzielonymiPionowymiKreskami(Adresat adresat);

};
#endif
