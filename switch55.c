#include <stdio.h>

int main() {
    int opcion;

    printf("Menú de opciones:\n");
    printf("1. Jugar\n");
    printf("2. Opciones\n");
    printf("3. Salir\n");
    printf("Selecciona una opción (1-3): ");
    scanf("%d", &opcion);

    switch(opcion) {
        case 1:
            printf("¡Juguemos!");
            break;
        case 2:
            printf("Opciones no disponibles todavía.");
            break;
        case 3:
            printf("Hasta luego.");
            break;
        default:
            printf("Opción no válida. Por favor, elige 1, 2 o 3.");
    }

    return 0;
}
