#ifndef PLIKIZUZYTKOWNIKAMI_H
#define PLIKIZUZYTKOWNIKAMI_H
#include <iostream>
#include <vector>
#include <fstream>

#include "Uzytkownik.h"

using namespace std;

class PlikiZUzytkownikami
{
    const string nazwaPlikuZUzytkownikami;

    bool czyPlikJestPusty();
    string zamienDaneUzytkownikaNaLinieZDanymiOddzielonaPionowymiKreskami(Uzytkownik uzytkownik);

public:
    PlikiZUzytkownikami(string NAZWAPLIKUZUZYTKOWNIKAMI): nazwaPlikuZUzytkownikami(NAZWAPLIKUZUZYTKOWNIKAMI){};
    void dopiszUzytkownikaDoPliku(Uzytkownik uzytkownik);
    vector <Uzytkownik> wczytajUzytkownikowZPliku();
    Uzytkownik pobierzDaneUzytkownika(string daneJednegoUzytkownikaOddzielonePionowymiKreskami);

};
#endif
