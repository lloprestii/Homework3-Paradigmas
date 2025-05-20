#include "MedicionBase.hpp"

MedicionBase::MedicionBase(float tiempoMedicion)
    : tiempoMedicion(make_unique<float>(tiempoMedicion)) {}

MedicionBase::MedicionBase(const MedicionBase& other)
    : tiempoMedicion(make_unique<float>(*other.tiempoMedicion)) {}

float MedicionBase::getTiempo() const {
    return *tiempoMedicion;
}

void MedicionBase::serializar(ofstream& out) const {
    out.write(reinterpret_cast<const char*>(tiempoMedicion.get()), sizeof(float));
}

void MedicionBase::deserializar(ifstream& in) {
    float t;
    in.read(reinterpret_cast<char*>(&t), sizeof(float));
    tiempoMedicion = make_unique<float>(t);
}
