#include "../headers/Punto.hpp"

Punto::Punto(double x, double y) : 
    x(x), y(y) 
    {}
double Punto::getX() const { return x; }
double Punto::getY() const { return y; }
void Punto::setX(double nx) { x = nx; }
void Punto::setY(double ny) { y = ny; } 