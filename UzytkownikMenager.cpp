#include "UzytkownikMenager.h"
#include "PlikiZUzytkownikami.h"
#include <string>
#include "AdresatMenager.h"


void UzytkownikMenager::rejestracjaUzytkownika()
{
    Uzytkownik uzytkownik = podajDaneNowegoUzytkownika();

    uzytkownicy.push_back(uzytkownik);
    plikiZUzytkownikami.dopiszUzytkownikaDoPliku(uzytkownik);

    cout << endl << "Konto zalozono pomyslnie" << endl << endl;
    system("pause");
}

Uzytkownik UzytkownikMenager::podajDaneNowegoUzytkownika()
{
    Uzytkownik uzytkownik;

    uzytkownik.ustawID(pobierzIdNowegoUzytkownika());

    string login;

    do
    {
        cout << "Podaj login: ";
        cin >> login;
        uzytkownik.ustawLogin(login);

    } while (czyIstniejeLogin(uzytkownik.pobierzLogin()) == true);
    string haslo;
    cout << "Podaj haslo: ";
    cin>>haslo;
    uzytkownik.ustawHaslo(haslo);

    return uzytkownik;
}

int UzytkownikMenager::pobierzIdNowegoUzytkownika()
{
    if (uzytkownicy.empty() == true)
        return 1;
    else
        return uzytkownicy.back().pobierzID() + 1;
}

bool UzytkownikMenager::czyIstniejeLogin(string login)
{
     //refaktoryzacja kodu
    for(int i=0;i<uzytkownicy.size();i++)
    {
        if(uzytkownicy[i].pobierzLogin()==login)
            {
                cout << endl << "Istnieje uzytkownik o takim loginie." << endl;
                return true;
            }
    }
    return false;
}

void UzytkownikMenager::wypiszWszystkichUzytkownikow()
{
     for(int i=0;i<uzytkownicy.size();i++)
    {
        cout<<uzytkownicy[i].pobierzID()<<endl;
        cout<<uzytkownicy[i].pobierzLogin()<<endl;
        cout<<uzytkownicy[i].pobierzHaslo()<<endl;
    }
}

void UzytkownikMenager::wczytajUzytkownikowZPliku()
{
        uzytkownicy = plikiZUzytkownikami.wczytajUzytkownikowZPliku();
}

int UzytkownikMenager::logowanieUzytkownika()//vector <Uzytkownik> &uzytkownicy
{
    Uzytkownik uzytkownik;
    string login = "", haslo = "";

    cout << "Podaj login: ";
    //cin>>login;
    login = MetodyPomocnicze::wczytajLinie(); //<-to nie chce dzialac

    vector <Uzytkownik>::iterator itr = uzytkownicy.begin();
    while (itr != uzytkownicy.end())
   //for(int i=0;i<uzytkownicy.size();i++)
    {
        if (itr -> pobierzLogin() == login)
        //if(uzytkownicy[i].login == login)
        {
            for (int iloscProb = 3; iloscProb > 0; iloscProb--)
            {
                cout << "Podaj haslo. Pozostalo prob: " << iloscProb << ": ";
                haslo = MetodyPomocnicze::wczytajLinie();

                if (itr -> pobierzHaslo() == haslo)
                //if(uzytkownicy[i].haslo == haslo)
                {
                    cout << endl << "Zalogowales sie." << endl << endl;
                    system("pause");
                    //cout<<itr->pobierzID()<<endl;
                    idZalogowanegoUzytkownika=itr -> pobierzID();
                    //cout<<"ID po logowaniu: "<<idZalogowanegoUzytkownika<<endl;
                    //idZalogowanegoUzytkownika=uzytkownicy[i].id;
                    return idZalogowanegoUzytkownika;
                }
            }
            cout << "Wprowadzono 3 razy bledne haslo." << endl;
            system("pause");
            return 0;
        }
        itr++;
    }
    cout << "Nie ma uzytkownika z takim loginem" << endl << endl;
    system("pause");
    return 0;
}
int UzytkownikMenager::wylogowanieZalogowanegoUzytkownika()
{
    idZalogowanegoUzytkownika=0;
    cout<<"Wylogowales sie! "<<endl;
    //cout <<idZalogowanegoUzytkownika<<endl;
    //uzytkownicy.clear();
    return idZalogowanegoUzytkownika;
}

void UzytkownikMenager::zmianaHaslaZalogowanegoUzytkownika()
{
    string noweHaslo = "";
    cout << "Podaj nowe haslo: ";
    cin>>noweHaslo;//= MetodyPomocnicze::wczytajLinie();

    for (vector <Uzytkownik>::iterator itr = uzytkownicy.begin(); itr != uzytkownicy.end(); itr++)
    {
        if (itr -> pobierzID() == idZalogowanegoUzytkownika)
        {
            itr -> ustawHaslo(noweHaslo);
            cout << "Haslo zostalo zmienione." << endl << endl;
            system("pause");
        }
    }
    plikiZUzytkownikami.zapiszWszystkichUzytkownikowDoPliku(uzytkownicy);
}
void UzytkownikMenager::dodajAdresata()
{
    AdresatMenager adresatMenager;
    adresatMenager.dodajAdresata(adresaci,idZalogowanegoUzytkownika);
}
void UzytkownikMenager::wyswietlWszystkichAdresatow()
{
    AdresatMenager adresatMenager;
    adresatMenager.wyswietlWszystkichAdresatow(adresaci);
}
void UzytkownikMenager::wczytajAdresatowZalogowanegoUzytkownikaZPliku()
{
    AdresatMenager adresatMenager;
    adresatMenager.wczytajAdresatowZalogowanegoUzytkownikaZPliku(adresaci,idZalogowanegoUzytkownika);
}

