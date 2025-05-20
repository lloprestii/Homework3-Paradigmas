#include "SaveFlightData.hpp"
#include <iostream>
using namespace std;

SaveFlightData::SaveFlightData(const Posicion& pos, const Presion& pre)
    : posicion(pos), presion(pre) {}

void SaveFlightData::serializar(ofstream& out) const {
    posicion.serializar(out);
    presion.serializar(out);
}

void SaveFlightData::deserializar(ifstream& in) {
    posicion.deserializar(in);
    presion.deserializar(in);
}

void SaveFlightData::imprimir() const {
    cout << "Datos de Vuelo:" << endl;
    posicion.imprimir();
    presion.imprimir();
}
