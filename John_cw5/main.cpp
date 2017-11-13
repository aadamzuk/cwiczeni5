#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <vector>
#include "Probka.HPP"
#include "Analizator.HPP"
#include "Loader.HPP"
#include "Sygnal.HPP"


using namespace std;

int main(int argc, char*argv[])
{
    if(argc !=2)
    {
        return -1;
    }
    Sygnal sy;
    Loader lo;
    Analizator an;
    sy=lo.wczytaj(argv[1]);
    lo.zapiszSygnal(sy,"out.csv");
    cout<<endl<<"Srednia: "<<an.srednia(sy);
    cout<<endl<<"Minimum: "<<an.minimum(sy);
    cout<<endl<<"Maksimum: "<<an.maksimum(sy);
cout<<endl<<"Calka: "<<an.calka(sy);


    return 0;
}
