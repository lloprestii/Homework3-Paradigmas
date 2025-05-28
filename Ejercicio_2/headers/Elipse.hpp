#pragma once
#include "Figura.hpp"

class Elipse : public Figura {
private:
    double a; // semieje mayor
    double b; // semieje menor
public:
    Elipse(const Punto& centro = Punto(), double a = 0, double b = 0);
    double getA() const;
    double getB() const;
    void setA(double na);
    void setB(double nb);
}; 