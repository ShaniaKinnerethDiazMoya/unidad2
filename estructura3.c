#include <stdio.h>

struct Rectangulo {
    float base;
    float altura;
};

int main() {
    struct Rectangulo rect;

    printf("Ingrese la base del rectángulo: ");
    scanf("%f", &rect.base);
    printf("Ingrese la altura del rectángulo: ");
    scanf("%f", &rect.altura);

    float area = rect.base * rect.altura;

    printf("El área del rectángulo es: %.2f\n", area);

    return 0;
}
