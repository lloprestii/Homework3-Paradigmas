#pragma once
#include <string>
#include <vector>
#include "GeneradorDatos.hpp"

using namespace std;

void printVecDoubles(const vecDoublesDT& vec);
void printPalabras(const palabrasDT& vec);
void printListas(const listasDT& listas);
void printJSON(const vecDoublesDT& vec, const palabrasDT& palabras, const listasDT& listas);

class JsonBuilder {
private:
    string vecDoubles;
    string palabras;
    string listas;
public:
    void setVecDoubles(const vector<double>& vec);
    void setPalabras(const vector<string>& vec);
    void setListas(const vector<vector<int>>& listasVec);
    string construirJSON() const;
}; 