#include <stdio.h>

struct Temperatura {
    float celsius;
    float fahrenheit;
};

int main() {
    struct Temperatura temp;

    printf("Ingrese la temperatura en Celsius: ");
    scanf("%f", &temp.celsius);

    temp.fahrenheit = (temp.celsius * 9 / 5) + 32;

    printf("La temperatura en Fahrenheit es: %.2f\n", temp.fahrenheit);

    return 0;
}

