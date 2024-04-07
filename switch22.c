#include <stdio.h>

int main() {
    int dia;

    printf("Introduce un número de día (1-7): ");
    scanf("%d", &dia);

    switch(dia) {
        case 1: printf("Lunes"); break;
        case 2: printf("Martes"); break;
        case 3: printf("Miércoles"); break;
        case 4: printf("Jueves"); break;
        case 5: printf("Viernes"); break;
        case 6: printf("Sábado"); break;
        case 7: printf("Domingo"); break;
        default: printf("Número fuera de rango (1-7).");
    }

    return 0;
}
