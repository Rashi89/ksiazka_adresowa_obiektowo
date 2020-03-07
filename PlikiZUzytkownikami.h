#ifndef PLIKIZUZYTKOWNIKAMI_H
#define PLIKIZUZYTKOWNIKAMI_H
#include <iostream>
#include <vector>
#include <fstream>

#include "Uzytkownik.h"

using namespace std;

class PlikiZUzytkownikami
{
    string nazwaPlikuZUzytkownikami;
    fstream plikTekstowy;

    bool czyPlikJestPusty();
    string zamienDaneUzytkownikaNaLinieZDanymiOddzielonaPionowymiKreskami(Uzytkownik uzytkownik);

public:
    PlikiZUzytkownikami();
    void dopiszUzytkownikaDoPliku(Uzytkownik uzytkownik);

};
#endif
