#include <stdio.h>

int main() {
    float lado, perimetro;
    printf("Ingrese la longitud de un lado del triángulo equilátero: ");
    scanf("%f", &lado);
    perimetro = 3 * lado;
    printf("El perímetro del triángulo equilátero es: %.2f\n", perimetro);
    return 0;
}
