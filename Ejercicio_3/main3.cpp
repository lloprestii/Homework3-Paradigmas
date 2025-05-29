#include "headers/GeneradorDatos.hpp"
#include "headers/JsonBuilder.hpp"
#include <iostream>

using namespace std;

int main() {
    vecDoublesDT vec = {1.3, 2.1, 3.2};
    palabrasDT palabras = {"Hola", "Mundo"};
    listasDT listas = { {1, 2}, {3, 4} };

    printJSON(vec, palabras, listas);
    return 0;
} 