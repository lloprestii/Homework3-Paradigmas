#pragma once
#include <vector>
#include <string>
#include <type_traits>

using namespace std;

using vecDoublesDT = vector<double>;
using palabrasDT = vector<string>;
using listasDT = vector<vector<int>>;

template<typename T>
class GeneradorDatos {
private:
    vector<T> datos;
public:
    void agregar(const T& valor) {
        datos.push_back(valor);
    }

    void agregarLista(const vector<T>& lista) {
        if constexpr (is_same_v<T, int>) {
            datos.insert(datos.end(), lista.begin(), lista.end());
        }
    }

    const vector<T>& obtenerDatos() const {
        return datos;
    }
}; 