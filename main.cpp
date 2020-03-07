#include <iostream>

#include "KsiazkaAdresowa.h"
using namespace std;

int main()
{
    KsiazkaAdresowa ksiazkaAdesowa("Uzytkownicy.txt");
    //ksiazkaAdesowa.wczytajUzytkownikowZPliku();
    ksiazkaAdesowa.rejestracjaUzytkownika();
    //ksiazkaAdesowa.wypiszWszystkichUzytkownikow();
    ksiazkaAdesowa.rejestracjaUzytkownika();
    ksiazkaAdesowa.wypiszWszystkichUzytkownikow();
    return 0;
}
