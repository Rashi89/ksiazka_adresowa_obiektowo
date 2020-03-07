#include <iostream>

#include "KsiazkaAdresowa.h"
using namespace std;

int main()
{
    KsiazkaAdresowa ksiazkaAdesowa;
    ksiazkaAdesowa.wczytajUzytkownikowZPliku();
    ksiazkaAdesowa.rejestracjaUzytkownika();
    ksiazkaAdesowa.rejestracjaUzytkownika();
    ksiazkaAdesowa.wypiszWszystkichUzytkownikow();
    return 0;
}
