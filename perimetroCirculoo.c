#include <stdio.h>
#define PI 3.14159

int main() {
    float radio, perimetro;
    printf("Ingrese el radio del círculo: ");
    scanf("%f", &radio);
    perimetro = 2 * PI * radio;
    printf("El perímetro del círculo es: %.2f\n", perimetro);
    return 0;
}
