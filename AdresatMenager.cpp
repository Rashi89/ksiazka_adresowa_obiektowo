#include "AdresatMenager.h"
#include "UzytkownikMenager.h"
#include <string>

AdresatMenager::AdresatMenager()
{
    ;
}

Adresat AdresatMenager::podajDaneNowegoAdresata(int &idZalogowanegoUzytkownika)
{
    Adresat adresat;
    adresat.ustawID(++idOstatniegoAdresata);
    adresat.ustawIDUzytkownika(idZalogowanegoUzytkownika);
    cout<<adresat.pobierzIDUzytkownika()<<endl;
    string imie;
    cout << "Podaj imie: ";
    cin>> imie;
    adresat.ustawImie(imie);
    adresat.pobierzImie() = zamienPierwszaLitereNaDuzaAPozostaleNaMale(adresat.pobierzImie());

    string nazwisko;
    cout << "Podaj nazwisko: ";
    cin >> nazwisko;
    adresat.ustawNazwisko(nazwisko);
    adresat.pobierzNazwisko() = zamienPierwszaLitereNaDuzaAPozostaleNaMale(adresat.pobierzNazwisko());

    cout << "Podaj numer telefonu: ";

    adresat.ustawNumerTelefonu(wczytajLinie());

    cout << "Podaj email: ";
    adresat.ustawEmail(wczytajLinie());

    cout << "Podaj adres: ";
    adresat.ustawAdres(wczytajLinie());

    return adresat;
}
int AdresatMenager::dodajAdresata(int &idZalogowanegoUzytkownika)
{
    Adresat adresat;
    //system("cls");
    cout << " >>> DODAWANIE NOWEGO ADRESATA <<<" << endl << endl;
    adresat = podajDaneNowegoAdresata(idZalogowanegoUzytkownika);

    adresaci.push_back(adresat);
    //dopiszAdresataDoPliku(adresat);

    return ++idOstatniegoAdresata;
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
    string wejscie;
    getline(cin, wejscie);
    cin.ignore();
	//cin.get();
    return wejscie;
}
