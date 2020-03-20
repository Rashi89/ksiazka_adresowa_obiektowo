#ifndef PLIKIZADRESATAMI_H
#define PLIKIZADRESATAMI_H
#include <iostream>
#include <vector>
#include <windows.h>
#include <sstream>
#include <fstream>
#include <string>

#include "Adresat.h"

//#include "MetodyPomocnicze.h"

using namespace std;
class PlikiZAdresatami
{
    string NAZWA_PLIKU_Z_ADRESATAMI;
    string nazwaTymczasowegoPlikuZAdresatami;
    int idOstatniegoAdresata;
    int idUsuwanegoAdresata;

    bool czyPlikJestPusty(fstream &plikTekstowy);
    string zamienDaneAdresataNaLinieZDanymiOddzielonymiPionowymiKreskami(Adresat adresat);
    string pobierzLiczbe(string tekst, int pozycjaZnaku);
    Adresat pobierzDaneAdresata(string daneAdresataOddzielonePionowymiKreskami);
    int pobierzIdAdresataZDanychOddzielonychPionowymiKreskami(string daneJednegoAdresataOddzielonePionowymiKreskami);
    int pobierzIdUzytkownikaZDanychOddzielonychPionowymiKreskami(string daneJednegoAdresataOddzielonePionowymiKreskami);

public:
    PlikiZAdresatami(string nazwaPlikuZAdresatami): NAZWA_PLIKU_Z_ADRESATAMI(nazwaPlikuZAdresatami){
        idOstatniegoAdresata=0;
        nazwaTymczasowegoPlikuZAdresatami="tymczasowy.txt";
    }
    bool dopiszAdresataDoPliku(Adresat adresat);
    vector <Adresat> wczytajAdresatowZalogowanegoUzytkownikaZPliku(int idZalogowanegoUzytkownika);
    int pobierzIdOstatniegoAdresata();
    void usunWybranaLinieWPliku(int idUsuwanegoAdresata);
    void usunPlik(string NAZWA_PLIKU_Z_ADRESATAMI);
    void zmienNazwePliku(string nazwaTymczasowegoPlikuZAdresatami, string NAZWA_PLIKU_Z_ADRESATAMI);



};
#endif
