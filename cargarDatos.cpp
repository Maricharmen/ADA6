#include <iostream>
#include <string>
#include <fstream>
#include <sstream>
#include <vector>
#include <string>
#include "lib.h"
using namespace std;

#ifndef _CARGA_
#define _CARGA_
int cargarDatos(string nombre_archivo, Notas notas[]) {
    ifstream archivo(nombre_archivo);
    string linea;

    // Leer cada línea del archivo
    int i = 0;
    while (getline(archivo, linea)) {
        stringstream stream(linea);
        string celda;
        vector<string> fila;
        Notas tmp;

        // Separar cada línea por comas
        while (getline(stream, celda, ',')) {
            fila.push_back(celda);
        }

        tmp.matricula = fila[0];
        tmp.materia = fila[1];
        tmp.cal = stof(fila[2]);

        notas[i]=tmp;

        i++;
    }
    return 0;

}
#endif
