#include <iostream>
#include <string>
#include "lib.h"
using namespace std;

#ifndef _PROM_
#define _PROM_

float obtenerPromedioAlumno(string matricula, Notas notas[], int n) {
    float sum = 0.0;
    int c = 0;
    for (int i = 0; i<n; i++){
        if(notas[i].matricula == matricula){
            sum+=notas[i].cal;
            c++;
        }
    }
    return sum/c;
}

#endif
