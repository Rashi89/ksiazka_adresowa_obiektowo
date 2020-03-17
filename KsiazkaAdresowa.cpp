#include "KsiazkaAdresowa.h"
#include "UzytkownikMenager.h""
#include "AdresatMenager.h"

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
    if(uzytkownikMenager.czyUzytkownikJestZalogowany())
    {
        adresatMenager = new AdresatMenager(NAZWA_PLIKU_Z_ADRESATAMI,uzytkownikMenager.pobierzIdZalogowanegoUzytkownika());
    }
}

void KsiazkaAdresowa::zmianaHaslaZalogowanegoUzytkownika()
{
    uzytkownikMenager.zmianaHaslaZalogowanegoUzytkownika();
}
void KsiazkaAdresowa::wylogowanieZalogowanegoUzytkownika()
{
    uzytkownikMenager.wylogowanieZalogowanegoUzytkownika();
    delete adresatMenager;
    adresatMenager=NULL;
}
void KsiazkaAdresowa::dodajAdresata()
{
    if(uzytkownikMenager.czyUzytkownikJestZalogowany())
    {
        adresatMenager->dodajAdresata();
    }
    else
    {
        cout<<"Aby dodac adresata nalezy sie zalogowac!"<<endl;
        system("pause");
    }
}
void KsiazkaAdresowa::wyswietlWszystkichAdresatow()
{
    if(uzytkownikMenager.czyUzytkownikJestZalogowany())
    {
        adresatMenager->wyswietlWszystkichAdresatow();
    }

}


