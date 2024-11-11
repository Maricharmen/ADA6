#ifndef _LIB_
#define _LIB_

#include <string>
using namespace std;

struct Notas {
  string matricula;
  string materia;
  float cal;	
};

int alumnos = 9;
float promAlgebra = 0, promRSU = 0, promProg = 0, promGral = 0; 

int cargarDatos(string nombre_archivo, Notas notas[]); 
float obtenerPromedioAlumno(string matricula, Notas notas[]); 
int calcularEstadisticas(Notas notas[], float &promAlgebra, float &promRSU, float &promProg, float &promGral); 
int listarNotas(Notas notas[]); 

#endif
