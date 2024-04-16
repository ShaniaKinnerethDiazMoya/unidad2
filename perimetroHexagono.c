#include <stdio.h>

int main() {
    float lado, perimetro;
    printf("Ingrese la longitud de un lado del hexágono regular: ");
    scanf("%f", &lado);
    perimetro = 6 * lado;
    printf("El perímetro del hexágono regular es: %.2f\n", perimetro);
    return 0;
}
