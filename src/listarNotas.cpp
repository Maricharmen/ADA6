#include <iostream>
#include "lib.h"
using namespace std;

int listarNotas(Notas notas[]){

    for( int i=0; i<alumnos; i++)
        cout << "Matricula: " << notas[i].matricula <<"\nMateria: " << notas[i].materia <<"\nCalificacion: " << notas[i].cal<<"\n";

    return 0;
}
