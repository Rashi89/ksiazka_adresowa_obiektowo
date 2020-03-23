#ifndef PLIKTEKSTOWY_H
#define PLIKTEKSTOWY_H
#include <iostream>
#include <vector>
#include <windows.h>
#include <sstream>
#include <fstream>
#include <string>

using namespace std;

class PlikTekstowy
{
    const string NAZWA_PLIKU;
    //bool czyPlikJestPusty();

    public:
    PlikTekstowy(string nazwaPliku) : NAZWA_PLIKU(nazwaPliku) {
    }

    string pobierzNazwePliku()
    {
        return NAZWA_PLIKU;
    }
    bool czyPlikJestPusty();

};


#endif
