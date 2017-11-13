#include "Loader.HPP"
#include <iostream>
#include <string>
#include <fstream>
#include <sstream>
Loader::Loader()
{
}
Sygnal Loader::wczytaj(std::string nazwa_pliku)
{
    Sygnal tablica;
    std::ifstream plik(nazwa_pliku);
    std::string linia;
    while(getline(plik,linia))
    {

        double x, t;
        std::stringstream ss(linia);
        ss>>t;
        ss.ignore();
        ss>>x;
        Probka probka1(t,x);
        tablica.dodajProbke(probka1);
    }
    plik.close();
    return tablica;

}
void Loader::zapiszSygnal(Sygnal& sygnal,std::string nazwa_pliku)
{
  std::ofstream zapis(nazwa_pliku);
    for(int i=0;i<sygnal.iloscProbek();i++)
    {
        zapis<<sygnal[i].x<<" "<<sygnal[i].t<<std::endl;
    }
    zapis.close();

}
