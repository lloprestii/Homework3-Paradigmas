#include "../headers/Circulo.hpp"
#include <cmath>

Circulo::Circulo(const Punto& centro, double r) : 
    Figura(centro), radio(r) 
    {}
double Circulo::getRadio() const { return radio; }
void Circulo::setRadio(double r) { radio = r; } 