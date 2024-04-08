#include <stdio.h>

int main() {
    int suma = 0, numero, i = 0;
    while(i < 5) {
        printf("Introduce un número: ");
        scanf("%d", &numero);
        suma += numero;
        i++;
    }
    printf("La suma de los números es: %d\n", suma);
    return 0;
}