#include <iostream>

#include "UzytkownikMenager.h"
#include "AdresatMenager.h"

using namespace std;

class KsiazkaAdresowa
{
    UzytkownikMenager uzytkownikMenager;
    AdresatMenager *adresatMenager;
    const string NAZWA_PLIKU_Z_ADRESATAMI;


public:
    KsiazkaAdresowa(string nazwaPlikuZUzytkownikami, string nazwaPlikuZAdresatami) : uzytkownikMenager(nazwaPlikuZUzytkownikami), NAZWA_PLIKU_Z_ADRESATAMI(nazwaPlikuZAdresatami)
     {
         adresatMenager=NULL;
    };
    ~KsiazkaAdresowa()
    {
        delete adresatMenager;
        adresatMenager=NULL;
    }

    void rejestracjaUzytkownika();
    void wypiszWszystkichUzytkownikow();
    void logowanieUzytkownika();
    void zmianaHaslaZalogowanegoUzytkownika();
    void wylogowanieZalogowanegoUzytkownika();
    void dodajAdresata();
    void usunAdresata();
    void wyswietlWszystkichAdresatow();
    bool czyUzytkownikJestZalogowany();
    char wybierzOpcjeZMenuGlownego();
    char wybierzOpcjeZMenuUzytkownika();



};
