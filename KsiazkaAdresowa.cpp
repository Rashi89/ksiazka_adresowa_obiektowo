#include "KsiazkaAdresowa.h"
#include "UzytkownikMenager.h""
#include "AdresatMenager.h"

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
void KsiazkaAdresowa::zmianaHaslaZalogowanegoUzytkownika()
{
    uzytkownikMenager.zmianaHaslaZalogowanegoUzytkownika();
}
void KsiazkaAdresowa::wylogowanieZalogowanegoUzytkownika()
{
    uzytkownikMenager.wylogowanieZalogowanegoUzytkownika();
}
void KsiazkaAdresowa::dodajAdresata()
{
    uzytkownikMenager.dodajAdresata();
}
void KsiazkaAdresowa::wyswietlWszystkichAdresatow()
{
    uzytkownikMenager.wyswietlWszystkichAdresatow();
}
void KsiazkaAdresowa::wczytajAdresatowZalogowanegoUzytkownikaZPliku()
{
   uzytkownikMenager.wczytajAdresatowZalogowanegoUzytkownikaZPliku();
}
