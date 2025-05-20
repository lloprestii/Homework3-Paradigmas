#pragma once
#include "IMediciones.hpp"
#include <memory>
using namespace std;

class MedicionBase : public IMediciones {
    protected:
        unique_ptr<float> tiempoMedicion;
    public:
        MedicionBase(float tiempoMedicion);
        MedicionBase(const MedicionBase& other);
        virtual ~MedicionBase() = default;
        virtual void serializar(ofstream& out) const override;
        virtual void deserializar(ifstream& in) override;
        float getTiempo() const;
        virtual void imprimir() const = 0;
};