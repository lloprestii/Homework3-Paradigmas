#pragma once
#include "Punto.hpp"
#include "Circulo.hpp"
#include "Elipse.hpp"
#include "Rectangulo.hpp"
#include <cmath>

template <typename T>
class ProcesadorFigura {
public:
    static double calcularArea(const T& figura);
};

template <>
class ProcesadorFigura<Punto> {
public:
    static double calcularArea(const Punto&) {
        return 0.0;
    }
};

template <>
class ProcesadorFigura<Circulo> {
public:
    static double calcularArea(const Circulo& c) {
        return M_PI * c.getRadio() * c.getRadio();
    }
};

template <>
class ProcesadorFigura<Elipse> {
public:
    static double calcularArea(const Elipse& e) {
        return M_PI * e.getA() * e.getB();
    }
};

template <>
class ProcesadorFigura<Rectangulo> {
public:
    static double calcularArea(const Rectangulo& r) {
        return r.getAncho() * r.getAlto();
    }
}; 