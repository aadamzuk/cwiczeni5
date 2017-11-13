#ifndef Sygnal_HPP
#define Sygnal_HPP
#include <iostream>
#include <string>
#include <vector>
#include "Probka.HPP"
class Sygnal{
std::vector<Probka> probki;
public:
    Sygnal();
    void dodajProbke(const Probka& p);
    int iloscProbek() const;
    Probka& operator[](int i);
    const Probka& operator[](int i) const;
    friend std::ostream& operator<< (std::ostream& stream, const Sygnal& sygnal);
};

#endif
