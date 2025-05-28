#pragma once
#include "Figura.hpp"

class Circulo : public Figura {
private:
    double radio;
public:
    Circulo(const Punto& centro = Punto(), double r = 0);
    double getRadio() const;
    void setRadio(double r);
}; 