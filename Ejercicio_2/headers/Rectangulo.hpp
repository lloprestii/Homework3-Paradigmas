#pragma once
#include "Figura.hpp"

class Rectangulo : public Figura {
private:
    double ancho;
    double alto;
public:
    Rectangulo(const Punto& vertice = Punto(), double ancho = 0, double alto = 0);
    double getAncho() const;
    double getAlto() const;
    void setAncho(double a);
    void setAlto(double h);
}; 