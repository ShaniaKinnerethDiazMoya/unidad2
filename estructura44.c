#include <stdio.h>
#include <stdbool.h>

bool esPrimo(int num) {
    if (num <= 1)
        return false;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0)
            return false;
    }
    return true;
}

int main() {
    int numero;

    printf("Ingrese un número entero positivo: ");
    scanf("%d", &numero);

    if (esPrimo(numero))
        printf("%d es un número primo.\n", numero);
    else
        printf("%d no es un número primo.\n", numero);

    return 0;
}
