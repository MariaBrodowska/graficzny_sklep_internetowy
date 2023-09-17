
#ifndef PRODUKTY_H
#define PRODUKTY_H

#include <iostream>
#include <fstream>
#include <vector>
using namespace std;

class Produkt{
private:
    string nazwa;
    float cena, cenaVAT;
    int ilePozostalo, ileZamowiono;
public:
    static void aktualizujZapis(vector <Produkt>& produkty);
    static void pobierzProdukty(vector <Produkt>& produkty);
    friend class Zamowienie;
    friend class Klient;
};

#endif // PRODUKTY_H
