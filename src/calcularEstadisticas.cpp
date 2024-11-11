#include <iostream>
#include "lib.h"
using namespace std;

#ifndef _STAST_
#define _STAST_

int calcularEstadisticas(Notas notas[], float &promAlgebra, float &promRSU, float &promProg, float &promGral){
    
    int contAlgebra = 0, countRSU = 0, countProg = 0;

    for( int i=0; i<alumnos; i++){
        if( notas[i].materia == "Algebra") promAlgebra+=notas[i].cal, contAlgebra++;
        else if(notas[i].materia=="RSU") promRSU+=notas[i].cal, countRSU++;
        else promProg+=notas[i].cal,countProg++;
    }

    if(contAlgebra) promAlgebra/=contAlgebra;
    if(countRSU) promRSU/=countRSU;
    if(countProg) promProg/=countProg;
    promGral=(promAlgebra+promRSU+promProg)/3;
    
    return 0;
}

#endif