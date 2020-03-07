#include "Uzytkownik.h"

    void Uzytkownik::ustawID(int noweID)
    {
        if(noweID>=0)
        id=noweID;
    }
    void Uzytkownik::ustawLogin(string nowyLogin)
    {
        login=nowyLogin;
    }
    void Uzytkownik::ustawHaslo(string noweHaslo)
    {
        haslo=noweHaslo;
    }

    int Uzytkownik::pobierzID()
    {
        return id;
    }
    string Uzytkownik::pobierzLogin()
    {
        return login;
    }
    string Uzytkownik::pobierzHaslo()
    {
        return haslo;
    }
