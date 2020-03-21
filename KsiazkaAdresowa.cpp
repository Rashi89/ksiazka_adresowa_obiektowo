#include "KsiazkaAdresowa.h"
#include "UzytkownikMenager.h""
#include "AdresatMenager.h"
//#include "MetodyPomocnicze.h"

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
void KsiazkaAdresowa::usunAdresata()
{
   if(uzytkownikMenager.czyUzytkownikJestZalogowany())
    {
        adresatMenager->usunAdresata();
    }
    else
    {
        cout<<"Aby usunac adresata nalezy sie zalogowac!"<<endl;
        system("pause");
    }
}
void KsiazkaAdresowa::edytujAdresata()
{
   if(uzytkownikMenager.czyUzytkownikJestZalogowany())
    {
        adresatMenager->edytujAdresata();
    }
    else
    {
        cout<<"Aby usunac adresata nalezy sie zalogowac!"<<endl;
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
void KsiazkaAdresowa::wyszukajAdresatowPoImieniu()
{
     if(uzytkownikMenager.czyUzytkownikJestZalogowany())
    {
        adresatMenager->wyszukajAdresatowPoImieniu();
    }
    else
    {
        cout<<"Aby wyszukac adresata nalezy sie zalogowac!"<<endl;
        system("pause");
    }
}

void KsiazkaAdresowa::wyszukajAdresatowPoNazwisku()
{
     if(uzytkownikMenager.czyUzytkownikJestZalogowany())
    {
        adresatMenager->wyszukajAdresatowPoNazwisku();
    }
    else
    {
        cout<<"Aby wyszukac adresata nalezy sie zalogowac!"<<endl;
        system("pause");
    }
}

bool KsiazkaAdresowa::czyUzytkownikJestZalogowany()
{
    if(uzytkownikMenager.czyUzytkownikJestZalogowany())
        return true;
    else
        return false;
}

char KsiazkaAdresowa::wybierzOpcjeZMenuGlownego()
{
    char wybor;

    system("cls");
    cout << "    >>> MENU  GLOWNE <<<" << endl;
    cout << "---------------------------" << endl;
    cout << "1. Rejestracja" << endl;
    cout << "2. Logowanie" << endl;
    cout << "9. Koniec programu" << endl;
    cout << "---------------------------" << endl;
    cout << "Twoj wybor: ";
    wybor = MetodyPomocnicze::wczytajZnak();

    return wybor;
}
char KsiazkaAdresowa::wybierzOpcjeZMenuUzytkownika()
{
    uzytkownikMenager.wybierzOpcjeZMenuUzytkownika();
    /*char wybor;

    system("cls");
    cout << " >>> MENU UZYTKOWNIKA <<<" << endl;
    cout << "---------------------------" << endl;
    cout << "1. Dodaj adresata" << endl;
    cout << "2. Wyszukaj po imieniu" << endl;
    cout << "3. Wyszukaj po nazwisku" << endl;
    cout << "4. Wyswietl adresatow" << endl;
    cout << "5. Usun adresata" << endl;
    cout << "6. Edytuj adresata" << endl;
    cout << "---------------------------" << endl;
    cout << "7. Zmien haslo" << endl;
    cout << "8. Wyloguj sie" << endl;
    cout << "---------------------------" << endl;
    cout << "Twoj wybor: ";
    wybor = MetodyPomocnicze::wczytajZnak();

    return wybor;*/
}
