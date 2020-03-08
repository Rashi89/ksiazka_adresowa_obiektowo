#include "KsiazkaAdresowa.h"
#include "UzytkownikMenager.h""

/*KsiazkaAdresowa::KsiazkaAdresowa()
{
    uzytkownikMenager.wczytajUzytkownikowZPliku();
}*/

void KsiazkaAdresowa::rejestracjaUzytkownika()
{
    uzytkownikMenager.rejestracjaUzytkownika();
}
void KsiazkaAdresowa::wypiszWszystkichUzytkownikow()
{
   uzytkownikMenager.wypiszWszystkichUzytkownikow();
}
void KsiazkaAdresowa::logowanieUzytkownika()
{
    uzytkownikMenager.logowanieUzytkownika();
}
void KsiazkaAdresowa::wczytajUzytkownikowZPliku()
{
   uzytkownikMenager.wczytajUzytkownikowZPliku();
}
