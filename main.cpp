#include <iostream>

#include "KsiazkaAdresowa.h"
using namespace std;

int main()
{
    KsiazkaAdresowa ksiazkaAdresowa("Uzytkownicy.txt");
    //ksiazkaAdresowa.logowanieUzytkownika();
    ksiazkaAdresowa.logowanieUzytkownika();
    ksiazkaAdresowa.wczytajAdresatowZalogowanegoUzytkownikaZPliku();
    //ksiazkaAdresowa.dodajAdresata();
    //ksiazkaAdresowa.wylogowanieZalogowanegoUzytkownika();
    //ksiazkaAdresowa.logowanieUzytkownika();
   // ksiazkaAdresowa.dodajAdresata();
    //ksiazkaAdresowa.dodajAdresata();
    //ksiazkaAdresowa.wylogowanieZalogowanegoUzytkownika();

    ksiazkaAdresowa.wyswietlWszystkichAdresatow();
    return 0;
}
