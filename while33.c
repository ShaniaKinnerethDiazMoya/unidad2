#include <stdio.h>

int main() {
    int pares = 0, impares = -1, contadorPares = 0, contadorImpares = 0;
    
    printf("Primeros 10 números pares:\n");
    while(contadorPares < 10) {
        printf("%d\n", pares);
        pares += 2;
        contadorPares++;
    }

    printf("Primeros 10 números impares:\n");
    while(contadorImpares < 10) {
        printf("%d\n", impares += 2);
        contadorImpares++;
    }
    return 0;
}
