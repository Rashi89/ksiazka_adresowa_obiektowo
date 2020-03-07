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

    string login,haslo;

    do
    {
        cout << "Podaj login: ";
        cin >> login;
        uzytkownik.ustawLogin(login);

    } while (czyIstniejeLogin(uzytkownik.pobierzLogin()) == true);

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
