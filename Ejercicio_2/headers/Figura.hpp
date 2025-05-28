#pragma once
#include "Punto.hpp"

class Figura {
protected:
    Punto posicion;
public:
    Figura(const Punto& p = Punto()) : posicion(p) {}
    virtual ~Figura() = default;
    Punto getPosicion() const { return posicion; }
    void setPosicion(const Punto& p) { posicion = p; }
}; 