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

using namespace std;

class AdresatMenager
{
    int idOstatniegoAdresata;
    int idUsunietegoAdresata;
    vector <Adresat> adresaci;
    //int idZalogowanegoUzytkownika;

public:
    AdresatMenager();
    int dodajAdresata(int &idZalogowanegoUzytkownika);
    Adresat podajDaneNowegoAdresata(int &idZalogowanegoUzytkownika);
    string zamienPierwszaLitereNaDuzaAPozostaleNaMale(string tekst);
    string wczytajLinie();
};
#endif
