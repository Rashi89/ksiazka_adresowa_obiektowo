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
    void wyswietlWszystkichAdresatow(vector <Adresat> &adresaci);
    void wyswietlDaneAdresata(Adresat &adresat);
    int dodajAdresata(vector <Adresat> &adresaci,int &idZalogowanegoUzytkownika,int &idOstatniegoAdresata);
    Adresat podajDaneNowegoAdresata(int &idZalogowanegoUzytkownika,int &idOstatniegoAdresata);
    string zamienPierwszaLitereNaDuzaAPozostaleNaMale(string tekst);
    string wczytajLinie();
};
#endif
