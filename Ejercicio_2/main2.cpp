#include <iostream>
#include "../headers/Punto.hpp"
#include "../headers/Circulo.hpp"
#include "../headers/Elipse.hpp"
#include "../headers/Rectangulo.hpp"
#include "../headers/ProcesadorFigura.hpp"

using namespace std;

int main() {
    Punto p(1, 2);
    Circulo c(Punto(0, 0), 5);
    Elipse e(Punto(1, 1), 3, 2);
    Rectangulo r(Punto(0, 0), 4, 6);

    cout << "Área del punto: " << ProcesadorFigura<Punto>::calcularArea(p) << endl;
    cout << "Área del círculo: " << ProcesadorFigura<Circulo>::calcularArea(c) << endl;
    cout << "Área de la elipse: " << ProcesadorFigura<Elipse>::calcularArea(e) << endl;
    cout << "Área del rectángulo: " << ProcesadorFigura<Rectangulo>::calcularArea(r) << endl;

    return 0;
} 