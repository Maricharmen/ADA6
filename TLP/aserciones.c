/**
 * Utiliza aserciones para verificar que no se acceda a posiciones
 * fuera de los limites de un arreglo:
 */

#include <stdio.h>
#include <assert.h>

int main(){

    int arr[5] = {1,2,3,4,5};
    int index;
    int size = sizeof(arr)/sizeof(int);

    printf( "Ingresa el indice a la posicion a acceder: ");
    scanf("%d",  &index);

    assert( index >= 0 && index < size );

    printf( "Haz accedido correctamente a la posicion");
}


/**
 * Verificar las precondiciones de una funcion, por ejemplo, definir
 * una funcion dividir(int a, int b) y verificar que el divisor no sea
 * cero.
 */


int dividir( int a, int b){
    return a/b;
}

int main(){

    int a, b;

    printf("Ingresa el valor de a y b: ");
    scanf("%d%d", &a, &b);

    assert( b > 0);

    printf( "El valor de la division es: %d", dividir(a, b));
}


/**
 * Una funcion para verificar si un arreglo esta ordenado
 */

void verificaOrdenArreglo( int arr[], int size){

    for( int i=1; i<size; i++){
        assert( arr[i-1] <= arr[i] );
    }
}

int main(){

    int arr[] = {1, 2, 2, 3, 4, 5};
    int size = 5;

    verificaOrdenArreglo(arr, size);

    printf("El arreglo esta ordenado");
}

