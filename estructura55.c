#include <stdio.h>

#define TAMANO 5

int main() {
    int numeros[TAMANO] = {1, 2, 3, 4, 5};
    int suma = 0;

    for (int i = 0; i < TAMANO; i++) {
        suma += numeros[i];
    }

    printf("La suma de los elementos del array es: %d\n", suma);

    return 0;
}
