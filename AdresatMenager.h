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

using namespace std;

class AdresatMenager
{
    int idOstatniegoAdresata;
    int idUsunietegoAdresata;
    vector <Adresat> adresaci;
    PlikiZAdresatami plikiZAdresatami;
    //int idZalogowanegoUzytkownika;

public:
    AdresatMenager();
    int dodajAdresata(vector <Adresat> &adresaci,int &idZalogowanegoUzytkownika,int &idOstatniegoAdresata);
    Adresat podajDaneNowegoAdresata(int &idZalogowanegoUzytkownika,int &idOstatniegoAdresata);
    string zamienPierwszaLitereNaDuzaAPozostaleNaMale(string tekst);
    string wczytajLinie();
    void wyswietlWszystkichAdresatow(vector <Adresat> &adresaci);
    void wyswietlDaneAdresata(Adresat &adresat);
    //void dopiszAdresataDoPliku(Adresat adresat);
    //string zamienDaneAdresataNaLinieZDanymiOddzielonymiPionowymiKreskami(Adresat adresat);
};
#endif
