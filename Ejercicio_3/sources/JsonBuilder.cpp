#include "../headers/JsonBuilder.hpp"
#include <sstream>
#include <iostream>

using namespace std;

void JsonBuilder::setVecDoubles(const vector<double>& vec) {
    ostringstream oss;
    oss << "[";
    for (size_t i = 0; i < vec.size(); ++i) {
        oss << vec[i];
        if (i + 1 < vec.size()) oss << ", ";
    }
    oss << "]";
    vecDoubles = oss.str();
}

void JsonBuilder::setPalabras(const vector<string>& vec) {
    ostringstream oss;
    oss << "[";
    for (size_t i = 0; i < vec.size(); ++i) {
        oss << "\"" << vec[i] << "\"";
        if (i + 1 < vec.size()) oss << ", ";
    }
    oss << "]";
    palabras = oss.str();
}

void JsonBuilder::setListas(const vector<vector<int>>& listasVec) {
    ostringstream oss;
    oss << "[\n";
    for (size_t i = 0; i < listasVec.size(); ++i) {
        oss << "  [";
        for (size_t j = 0; j < listasVec[i].size(); ++j) {
            oss << listasVec[i][j];
            if (j + 1 < listasVec[i].size()) oss << ", ";
        }
        oss << "]";
        if (i + 1 < listasVec.size()) oss << ",\n";
    }
    oss << "\n]";
    listas = oss.str();
}

string JsonBuilder::construirJSON() const {
    ostringstream oss;
    oss << "{";
    oss << "  \"vec_doubles\":" << vecDoubles << ",\n";
    oss << "  \"palabras\":" << palabras << ",\n";
    oss << "  \"listas\":" << listas << "\n";
    oss << "}";
    return oss.str();
}

void printVecDoubles(const vector<double>& vec) {
    cout << " \"vec_doubles\": " << "[";
    for (size_t i = 0; i < vec.size(); ++i) {
        cout << vec[i];
        if (i + 1 < vec.size()) cout << ", ";
    }
    cout << "]";
}

void printPalabras(const vector<string>& vec) {
    cout << "  \"palabras\": " << "[";
    for (size_t i = 0; i < vec.size(); ++i) {
        cout << '\"' << vec[i] << '\"';
        if (i + 1 < vec.size()) cout << ", ";
    }
    cout << "]";
}

void printListas(const vector<vector<int>>& listas) {
    cout << "  \"listas\": " << "[\n";
    for (size_t i = 0; i < listas.size(); ++i) {
        cout << "          [";
        for (size_t j = 0; j < listas[i].size(); ++j) {
            cout << listas[i][j];
            if (j + 1 < listas[i].size()) cout << ", ";
        }
        cout << "]";
        if (i + 1 < listas.size()) cout << ",\n";
    }
    cout << "\n         ]";
}

void printJSON(const vector<double>& vec, const vector<string>& palabras, const vector<vector<int>>& listas) {
    cout << "{";
    printVecDoubles(vec);
    cout << ",\n";
    printPalabras(palabras);
    cout << ",\n";
    printListas(listas);
    cout << "\n}" << endl;
} 