#include "../headers/Elipse.hpp"
#include <cmath>

Elipse::Elipse(const Punto& centro, double a, double b) : 
    Figura(centro), a(a), b(b) 
    {}
double Elipse::getA() const { return a; }
double Elipse::getB() const { return b; }
void Elipse::setA(double na) { a = na; }
void Elipse::setB(double nb) { b = nb; } 