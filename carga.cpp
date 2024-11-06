#include <iostream>
#include <string>
#include "lib.h"
using namespace std;

#ifndef _CARGA_
#define _CARGA_

int cargarDatos(string nombre_archivo, Notas notas[]) {
 notas[0].matricula="01";
 notas[0].materia="algebra";
 notas[0].matricula=75;

 notas[0].matricula="01";
 notas[0].materia="RSU";
 notas[0].matricula=85;

 notas[0].matricula="01";
 notas[0].materia="Programacion";
 notas[0].matricula=95;
 
 cout<<"Se cargaron los registro de notas"<<endl;
 return 0;	
}



#endif
