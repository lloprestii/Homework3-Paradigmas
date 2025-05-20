#pragma once
#include "MedicionBase.hpp"
using namespace std;

class Presion : public MedicionBase {
    public:
        float presionEstatica;
        float presionDinamica;
        Presion(float p, float q, float t);
        Presion(const Presion& other);
        void serializar(ofstream& out) const override;
        void deserializar(ifstream& in) override;
        void imprimir() const override;
        ~Presion() = default;
};
