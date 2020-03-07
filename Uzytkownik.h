#ifndef UZYTKOWNIK_H
#define UZYTKOWNIK_H

#include <iostream>
#include <vector>


using namespace std;


class Uzytkownik
{
    int id;
    string login;
    string haslo;

public:
    //setery
    void ustawID(int noweID);
    void ustawLogin(string nowyLogin);
    void ustawHaslo(string noweHaslo);
    //getery
    int pobierzID();
    string pobierzLogin();
    string pobierzHaslo();

};
#endif // UZYTKOWNIK_H
