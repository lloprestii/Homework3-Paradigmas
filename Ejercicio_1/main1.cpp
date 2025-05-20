#include "SaveFlightData.hpp"
#include <fstream>
#include <iostream>
using namespace std;

int main() {
    Posicion pos(-34.6f, -58.4f, 950.0f, 5.3f);
    Presion pres(101.3f, 5.8f, 6.1f);
    SaveFlightData datos(pos, pres);

    cout << "--- Datos originales ---" << endl;
    datos.imprimir();

    ofstream outFile("vuelo.bin", ios::binary);
    if (outFile) {
        datos.serializar(outFile);
        outFile.close();
    } else {
        cerr << "No se pudo abrir el archivo para escritura." << endl;
        return 1;
    }

    SaveFlightData datosLeidos(pos, pres);
    ifstream inFile("vuelo.bin", ios::binary);
    if (inFile) {
        datosLeidos.deserializar(inFile);
        inFile.close();
    } else {
        cerr << "No se pudo abrir el archivo para lectura." << endl;
        return 1;
    }

    cout << "--- Datos leidos del archivo ---" << endl;
    datosLeidos.imprimir();

    return 0;
}
