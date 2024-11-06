#include <stdio.h>

int x = 10; // Variable global

void funcionA() {
 printf("x en funcionA: %d\n", x); // Accede a la variable global x
}

void funcionB() {
 int x = 20; // Variable local
 funcionA(); // Llama a funcionA
 printf("x en funcionB: %d\n", x); // Accede a la variable local x
}

int main() {
 funcionB(); // Llama a funcionB
 return 0;
}
