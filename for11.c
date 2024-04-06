#include <stdio.h>

int main() {
    int pares = 0, impares = 0;
    
    for(int i = 1; i <= 100; i++) {
        if(i % 2 == 0) {
            pares++;
        } else {
            impares++;
        }
    }
    
    printf("Pares: %d\nImpares: %d\n", pares, impares);
    return 0;
}
