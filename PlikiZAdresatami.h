#ifndef PLIKIZADRESATAMI_H
#define PLIKIZADRESATAMI_H
#include <iostream>
#include <vector>
#include <fstream>
#include <cstdlib>

#include "Adresat.h"
//#include "MetodyPomocnicze.h"

using namespace std;
class PlikiZAdresatami
{
    string nazwaPlikuZAdresatami;

    string zamienDaneAdresataNaLinieZDanymiOddzielonymiPionowymiKreskami(Adresat adresat);
    bool czyPlikJestPusty(fstream &plikTekstowy);



public:
    PlikiZAdresatami();
    void dopiszAdresataDoPliku(Adresat adresat);
};
#endif
