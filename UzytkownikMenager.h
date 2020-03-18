#ifndef UZYTKOWNIKMENEGER_H
#define UZYTKOWNIKMENEGER_H
#include <iostream>
#include <vector>
#include <windows.h>
#include <sstream>
#include <fstream>
#include <string>

#include "Uzytkownik.h"
#include "Adresat.h"
#include "PlikiZUzytkownikami.h"
#include "AdresatMenager.h"

using namespace std;

class UzytkownikMenager
{
    int idZalogowanegoUzytkownika;
    //int idOstatniegoAdresata;
    vector <Uzytkownik> uzytkownicy;
    PlikiZUzytkownikami plikiZUzytkownikami;
    //vector <Adresat> adresaci;

    Uzytkownik podajDaneNowegoUzytkownika();
    int pobierzIdNowegoUzytkownika();
    bool czyIstniejeLogin(string login);


 public:
    UzytkownikMenager(string nazwaPlikuZUzytkownikami) : plikiZUzytkownikami(nazwaPlikuZUzytkownikami){
        idZalogowanegoUzytkownika=0;
        uzytkownicy =plikiZUzytkownikami.wczytajUzytkownikowZPliku();
        };
    void rejestracjaUzytkownika();
    void wypiszWszystkichUzytkownikow();
    void logowanieUzytkownika();
    void zmianaHaslaZalogowanegoUzytkownika();
    void wylogowanieZalogowanegoUzytkownika();
    bool czyUzytkownikJestZalogowany();
    int pobierzIdZalogowanegoUzytkownika();
    char wybierzOpcjeZMenuUzytkownika();
    //void wybierzOpcjeZMenuGlownego();



};
#endif
