#include <stdio.h>

int main() {
    float lado, perimetro;
    printf("Ingrese la longitud del lado del cuadrado: ");
    scanf("%f", &lado);
    perimetro = 4 * lado;
    printf("El perímetro del cuadrado es: %.2f\n", perimetro);
    return 0;
}
