#include <stdio.h>

int main() {
    int n, i, j;

    printf("Ingrese la altura del triángulo: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++) { // Controla las filas
        for(j = 1; j <= i; j++) { // Controla los asteriscos por fila
            printf("*");
        }
        printf("\n"); // Salto de línea después de cada fila
    }

    return 0;
}
