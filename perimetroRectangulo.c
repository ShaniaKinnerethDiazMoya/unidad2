#include <stdio.h>

int main() {
    float largo, ancho, perimetro;
    printf("Ingrese el largo y el ancho del rectángulo: ");
    scanf("%f %f", &largo, &ancho);
    perimetro = 2 * (largo + ancho);
    printf("El perímetro del rectángulo es: %.2f\n", perimetro);
    return 0;
}
