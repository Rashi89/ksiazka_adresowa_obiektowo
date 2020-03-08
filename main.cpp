#include <iostream>

#include "KsiazkaAdresowa.h"
using namespace std;

int main()
{
    KsiazkaAdresowa ksiazkaAdesowa("Uzytkownicy.txt");
    //ksiazkaAdesowa.wczytajUzytkownikowZPliku();
    //ksiazkaAdesowa.rejestracjaUzytkownika();
    ksiazkaAdesowa.wypiszWszystkichUzytkownikow();
    //ksiazkaAdesowa.wczytajUzytkownikowZPliku();
    //ksiazkaAdesowa.wypiszWszystkichUzytkownikow();
    ksiazkaAdesowa.logowanieUzytkownika();
    return 0;
}
