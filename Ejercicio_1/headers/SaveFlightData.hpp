#pragma once
#include "Posicion.hpp"
#include "Presion.hpp"
#include <fstream>
using namespace std;

class SaveFlightData {
    public:
        Posicion posicion;
        Presion presion;
        SaveFlightData(const Posicion& pos, const Presion& pre);
        void serializar(ofstream& out) const;
        void deserializar(ifstream& in);
        void imprimir() const;
        ~SaveFlightData() = default;
};
