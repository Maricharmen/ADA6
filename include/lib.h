#ifndef _LIB_
#define _LIB_

#include <string>
#include <set>
using namespace std;

struct Notas {
  string matricula;
  string materia;
  float cal;	
};

extern int alumnos;
extern set<string> matriculas;

int cargarDatos(string nombre_archivo, Notas notas[]); 
float obtenerPromedioAlumno(string matricula, Notas notas[]); 
int calcularEstadisticas(Notas notas[], float &promAlgebra, float &promRSU, float &promProg, float &promGral); 
int listarNotas(Notas notas[]); 

#endif
