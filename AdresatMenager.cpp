#include "AdresatMenager.h"
#include "UzytkownikMenager.h"
#include "PlikiZAdresatami.h"
#include <string>
#include <iostream>
#include <fstream>
#include <windows.h>
#include <vector>
#include <algorithm>
#include <sstream>

AdresatMenager::AdresatMenager()
{
    idOstatniegoAdresata=0;
}

Adresat AdresatMenager::podajDaneNowegoAdresata(int &idZalogowanegoUzytkownika,int &idOstatniegoAdresata)
{
    Adresat adresat;
    adresat.ustawID(++idOstatniegoAdresata);
    adresat.ustawIDUzytkownika(idZalogowanegoUzytkownika);
    //cout<<adresat.pobierzID()<<endl;
    string imie;
    cout << "Podaj imie: ";
    //imie=wczytajLinie();
    adresat.ustawImie(wczytajLinie());
    adresat.pobierzImie() = zamienPierwszaLitereNaDuzaAPozostaleNaMale(adresat.pobierzImie());

    string nazwisko;
    cout << "Podaj nazwisko: ";
    //cin >> nazwisko;
    adresat.ustawNazwisko(wczytajLinie());
    adresat.pobierzNazwisko() = zamienPierwszaLitereNaDuzaAPozostaleNaMale(adresat.pobierzNazwisko());

    cout << "Podaj numer telefonu: ";

    adresat.ustawNumerTelefonu(wczytajLinie());

    cout << "Podaj email: ";
    adresat.ustawEmail(wczytajLinie());

    cout << "Podaj adres: ";
    adresat.ustawAdres(wczytajLinie());

    return adresat;
}
int AdresatMenager::dodajAdresata(vector <Adresat> &adresaci,int &idZalogowanegoUzytkownika,int &idOstatniegoAdresata)
{
    Adresat adresat;
    //system("cls");
    cout << " >>> DODAWANIE NOWEGO ADRESATA <<<" << endl << endl;
    adresat = podajDaneNowegoAdresata(idZalogowanegoUzytkownika,idOstatniegoAdresata);

    adresaci.push_back(adresat);
    plikiZAdresatami.dopiszAdresataDoPliku(adresat);

    return idOstatniegoAdresata+1;
}

void AdresatMenager::wyswietlWszystkichAdresatow(vector <Adresat> &adresaci)
{
    system("cls");
    if (!adresaci.empty())
    {
        cout << "             >>> ADRESACI <<<" << endl;
        cout << "-----------------------------------------------" << endl;
        for (vector <Adresat> :: iterator itr = adresaci.begin(); itr != adresaci.end(); itr++)
        {
            wyswietlDaneAdresata(*itr);
        }
        cout << endl;
    }
    else
    {
        cout << endl << "Ksiazka adresowa jest pusta." << endl << endl;
    }
    system("pause");
}

void AdresatMenager::wyswietlDaneAdresata(Adresat &adresat)
{
    cout << endl << "Id:                 " << adresat.pobierzID() << endl;
    cout << "Imie:               " << adresat.pobierzImie() << endl;
    cout << "Nazwisko:           " << adresat.pobierzNazwisko() << endl;
    cout << "Numer telefonu:     " << adresat.pobierzNumerTelefonu()<< endl;
    cout << "Email:              " << adresat.pobierzEmail() << endl;
    cout << "Adres:              " << adresat.pobierzAdres() << endl;
}



string AdresatMenager::zamienPierwszaLitereNaDuzaAPozostaleNaMale(string tekst)
{
    if (!tekst.empty())
    {
        transform(tekst.begin(), tekst.end(), tekst.begin(), ::tolower);
        tekst[0] = toupper(tekst[0]);
    }
    return tekst;
}
string AdresatMenager::wczytajLinie()
{
    string wejscie="";
    getline(cin, wejscie);
    //cin.ignore();
	//cin.get();
    return wejscie;
}
