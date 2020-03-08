#include "UzytkownikMenager.h"
#include "PlikiZUzytkownikami.h"

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
    login = MetodyPomocnicze::wczytajLinie();

    //vector <Uzytkownik>::iterator itr = uzytkownicy.begin();
   // while (itr != uzytkownicy.end())
   for(int i=0;i<uzytkownicy.size();i++)
    {
        if (uzytkownicy[i].pobierzLogin() == login)
        {
            for (int iloscProb = 3; iloscProb > 0; iloscProb--)
            {
                cout << "Podaj haslo. Pozostalo prob: " << iloscProb << ": ";
                haslo = MetodyPomocnicze::wczytajLinie();

                if (uzytkownicy[i].pobierzHaslo() == haslo)
                {
                    cout << endl << "Zalogowales sie." << endl << endl;
                    system("pause");
                    //cout<<itr->pobierzID()<<endl;
                    //idZalogowanegoUzytkownika=itr->pobierzID();
                    idZalogowanegoUzytkownika=uzytkownicy[i].pobierzID();
                    cout<<"ID po logowaniu: "<<idZalogowanegoUzytkownika<<endl;
                    return idZalogowanegoUzytkownika;
                }
            }
            cout << "Wprowadzono 3 razy bledne haslo." << endl;
            system("pause");
            return 0;
        }
        //itr++;
    }
    cout << "Nie ma uzytkownika z takim loginem" << endl << endl;
    system("pause");
    return 0;
}
