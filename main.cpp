#include <iostream>

#include "KsiazkaAdresowa.h"
using namespace std;

int main()
{
    KsiazkaAdresowa ksiazkaAdresowa("Uzytkownicy.txt");
    ksiazkaAdresowa.logowanieUzytkownika();
    ksiazkaAdresowa.dodajAdresata();
    //ksiazkaAdresowa.wylogowanieZalogowanegoUzytkownika();

    //ksiazkaAdresowa.dodajAdresata();

    ksiazkaAdresowa.wyswietlWszystkichAdresatow();
    return 0;
}
