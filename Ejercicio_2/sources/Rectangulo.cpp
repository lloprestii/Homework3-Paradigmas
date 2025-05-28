#include "../headers/Rectangulo.hpp"

Rectangulo::Rectangulo(const Punto& vertice, double ancho, double alto)
    : Figura(vertice), ancho(ancho), alto(alto) 
    {}
double Rectangulo::getAncho() const { return ancho; }
double Rectangulo::getAlto() const { return alto; }
void Rectangulo::setAncho(double a) { ancho = a; }
void Rectangulo::setAlto(double h) { alto = h; } 