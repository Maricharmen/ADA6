#include <iostream>
#include <fstream>
#include <string>
#include <set>
#include "lib.h"
using namespace std;

int alumnos = 9;
set<string> matriculas;

int main() {
  
 Notas lista[9];
 float promAlgebra = 0, promRSU = 0, promProg = 0, promGral = 0; 
 
 int opcion;
 string linea;
 ifstream file("notas.csv");

 if(!file.is_open()){
  cerr << "Error al abrir el archivo \n";
  return 0;
 }

 if (cargarDatos("notas.csv", lista) == 0)
        cout << "Notas cargadas desde archivo.\n";
    else
        cerr << "Error al cargar datos desde archivo.\n";

    do {
        cout << " M E N U \n";
        cout << "1. Obtener promedio de los alumnos \n";
        cout << "2. Calcular estadisticas. \n";
        cout << "3. Listar notas. \n";
        cout << "4. Salir \n";
        cout << "Ingrese una opcion: "; 
        cin >> opcion;

        switch(opcion){

          case 1:

            for( auto matricula : matriculas){
              if ( obtenerPromedioAlumno(matricula, lista)){
                  cout<<"Promedio obtenido \n";
                  cout<<"Matricula:" <<matricula<<" Promedio: "<<obtenerPromedioAlumno(matricula, lista)<<"\n";
              }else
                cout<< "Error al cargar datos desde archivo.\n";
            }
            break;
          case 2:

            if ( calcularEstadisticas( lista, promAlgebra, promRSU, promProg, promGral) == 0){
                cout<<"Estadisticas cargadas"<<endl;
                cout<<"Algebra: "<<promAlgebra<<"\n";
                cout<<"RSU: "<<promRSU<<"\n";
                cout<<"Programacion: "<<promProg<<"\n";
                cout<<"General: "<<promGral<<"\n";
            }else
              cout<< "Error al cargar datos desde archivo.\n";
            break;

          case 3:
            if ( listarNotas(lista) == 0 )
                cout<<"Notas listadas"<<endl;
            else
              cout<< "Error al cargar datos desde archivo.\n";
            break;
          case 4:
            cout<<"Adios \n";
            break;

            default:
              cout<<"Ingreso de opcion incorrecta \n";
              break;
        }

      } while(opcion != 4);

 return 0;

}
