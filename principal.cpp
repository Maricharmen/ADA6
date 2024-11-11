#include <iostream>
#include <fstream>
#include <string>
#include "lib.h"
using namespace std;

int main() {
  
 Notas lista[9];

 int opcion;
 string linea;
 ifstream file("note.csv");

 if(!file.is_open()){
  cerr << "Error al abrir el archivo \n";
  return 0;
 }

 cout<<" M E N U "<<"\n";
 cout<<"Ingrese una opcion: "; cin>> opcion;
 
 cout<<"1. Cargar datos. \n";
 cout<<"2. Obtener promedio de los alumnos \n";
 cout<<"3. Calcular estadisticas. \n";
 cout<<"4. Listar notas. \n";

 switch(opcion){
  case 1:

    if ( cargarDatos("notas.csv", lista ) == 0)
        cout<<"Notas cargadas \n";
    else
      cout <<"Error de carga en archivo \n";
    break;

  case 2:

    while(getline(file, linea)){
      size_t pos = linea.find(',');
      string matricula = linea.substr(0, pos); 
      if ( obtenerPromedioAlumno(matricula, lista) == 0){
          cout<<"Promedio obtenido \n";
          cout<<matricula<<" "<<obtenerPromedioAlumno<<"\n";
      }else
        cout <<"Error de carga en archivo \n";
    }
    
  case 3:

    if ( calcularEstadisticas( lista, promAlgebra, promRSU, promProg, promGral)){
        cout<<"Estadisticas cargadas"<<endl;
        cout<<"Algebra: "<<promAlgebra<<"\n";
        cout<<"RSU: "<<promRSU<<"\n";
        cout<<"Programacion: "<<promProg<<"\n";
        cout<<"General: "<<promGral<<"\n";
    }else
      cout <<"Error de carga en archivo"<<endl;
    break;

  case 4:
    if ( listarNotas(lista) == 0 )
        cout<<"Notas listadas"<<endl;
    else
      cout <<"Error de carga en archivo"<<endl;
    break;

    default:
      cout<<"Ingreso de opcion incorrecta \n";
      break;
 }

 return 0;

}
