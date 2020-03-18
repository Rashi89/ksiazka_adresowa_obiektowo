#ifndef ADRESAT_H
#define ADRESAT_H
#include <iostream>
#include <vector>


using namespace std;


class Adresat
{
    int id;
    int idUzytkownika;
    string imie;
    string nazwisko;
    string numerTelefonu;
    string email;
    string adres;

public:
    //setery
    Adresat(int id=0, int idUzytkownika=0, string imie="", string nazwisko="", string numerTelefonu="", string email="", string adres="")
    {
        this->id = id;
        this->idUzytkownika = idUzytkownika;
        this->imie = imie;
        this->nazwisko = nazwisko;
        this->numerTelefonu = numerTelefonu;
        this->email = email;
        this->adres = adres;
    }
    void ustawID(int noweID);
    void ustawIDUzytkownika(int noweIDUzytkownika);
    void ustawImie(string noweImie);
    void ustawNazwisko(string noweNazwisko);
    void ustawNumerTelefonu(string nowyNumerTelefonu);
    void ustawEmail(string nowyEmail);
    void ustawAdres(string nowyAdres);
    //getery
    int pobierzID();
    int pobierzIDUzytkownika();
    string pobierzImie();
    string pobierzNazwisko();
    string pobierzNumerTelefonu();
    string pobierzEmail();
    string pobierzAdres();

};
#endif
