#ifndef Probka_HPP
#define Probka_HPP
#include <iostream>
#include <string>

class Probka
{
    public:
    double t,x;
    Probka();
    Probka(double t1, double x1);
    friend std::ostream& operator<<(std::ostream& stream,const Probka& probka );
};

#endif
