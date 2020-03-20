#ifndef METODYPOMOCNICZE_H
#define METODYPOMOCNICZE_H
#include <iostream>
#include <fstream>
#include <windows.h>
#include <vector>
#include <algorithm>
#include <sstream>

using namespace std;

class MetodyPomocnicze
{
    public:
    static string zamienPierwszaLitereNaDuzaAPozostaleNaMale(string tekst);
    static string pobierzLiczbe(string tekst, int pozycjaZnaku);
    static int konwersjaStringNaInt(string liczba);
    static string konwerjsaIntNaString(int liczba);
    static string wczytajLinie();
    static char wczytajZnak();
};
#endif
