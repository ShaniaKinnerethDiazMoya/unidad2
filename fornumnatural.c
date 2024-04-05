#include <stdio.h>

int main() {
    int i;

    printf("Número\tCuadrado\n");

    // Bucle que se repite 10 veces, desde i = 1 hasta i = 10
    for(i = 1; i <= 10; i++) {
        printf("%d\t%d\n", i, i * i);
    }

    return 0;
}
