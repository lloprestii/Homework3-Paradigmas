#pragma once
#include "MedicionBase.hpp"
using namespace std;

class Posicion : public MedicionBase {
    public:
        float latitud;
        float longitud;
        float altitud;
        Posicion(float lat, float lon, float alt, float t);
        Posicion(const Posicion& other);
        void serializar(ofstream& out) const override;
        void deserializar(ifstream& in) override;
        void imprimir() const override;
        ~Posicion() = default;
};

    