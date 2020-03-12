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
    string nazwaPlikuZAdresatami;
    int idZalogowanegoUzytkownika;

public:
    AdresatMenager();
    //int idOstatniegoAdresata;
    void wyswietlWszystkichAdresatow(vector <Adresat> &adresaci);
    void wyswietlDaneAdresata(Adresat adresat);
    int dodajAdresata(vector <Adresat> &adresaci,int idZalogowanegoUzytkownika);
    Adresat podajDaneNowegoAdresata(int idZalogowanegoUzytkownika,int &idOstatniegoAdresata);
    string zamienPierwszaLitereNaDuzaAPozostaleNaMale(string tekst);
    string wczytajLinie();
    int wczytajAdresatowZalogowanegoUzytkownikaZPliku(vector <Adresat> &adresaci, int idZalogowanegoUzytkownika);
    int pobierzIdUzytkownikaZDanychOddzielonychPionowymiKreskami(string daneJednegoAdresataOddzielonePionowymiKreskami);
    int konwersjaStringNaInt(string liczba);
    string pobierzLiczbe(string tekst, int pozycjaZnaku);
    Adresat pobierzDaneAdresata(string daneAdresataOddzielonePionowymiKreskami);
    int pobierzIdAdresataZDanychOddzielonychPionowymiKreskami(string daneJednegoAdresataOddzielonePionowymiKreskami);
    void dopiszAdresataDoPliku(Adresat adresat);
    string zamienDaneAdresataNaLinieZDanymiOddzielonymiPionowymiKreskami(Adresat adresat);
    string konwerjsaIntNaString(int liczba);
    bool czyPlikJestPusty(fstream &plikTekstowy);
};
#endif
