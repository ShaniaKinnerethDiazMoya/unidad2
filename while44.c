#include <stdio.h>

int main() {
    int numero;
    printf("Introduce números (0 para salir): ");
    scanf("%d", &numero);
    while(numero != 0) {
        printf("Has introducido: %d\n", numero);
        printf("Introduce otro número (0 para salir): ");
        scanf("%d", &numero);
    }
    printf("Programa terminado.\n");
    return 0;
}
