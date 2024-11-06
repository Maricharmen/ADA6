#ifndef _LIB_
#define _LIB_

#include <string>
using namespace std;

struct Notas {
  string matricula;
  string materia;
  float cal;	
};

//int MAXN=9;

int cargarDatos(string nombre_archivo, Notas notas[]); 
float obtenerPromedioAlumno(string matricula, Notas notas[]); 
void calcularEstadisticas(Notas notas[], float &promAlgebra, float &promRSU, 
float &promProg, float &promGral); 
void listarNotas(Notas notas[]); 

#endif
