#include <iostream>

#include "UzytkownikMenager.h"

using namespace std;

class KsiazkaAdresowa
{
    UzytkownikMenager uzytkownikMenager;
public:
    KsiazkaAdresowa(string NazwaPlikuZUzytkownikami): uzytkownikMenager(NazwaPlikuZUzytkownikami) {uzytkownikMenager.wczytajUzytkownikowZPliku();};
    void wczytajUzytkownikowZPliku();
    void rejestracjaUzytkownika();
    void wypiszWszystkichUzytkownikow();

};
