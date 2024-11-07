#include <iostream>
#include "lib.h"
using namespace std;


int main() {
  
 Notas lista[9];
 
 cout<<"Lista de notas generada"<<endl;
 
 if ( cargarDatos("notas.txt", lista ) ==0)
    cout<<"Notas cargadas"<<endl;
 else
   cout <<"Error de carga en archivo"<<endl;


 return 0;
}
