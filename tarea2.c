#include <stdio.h>
#include <string.h>

int main() {
    char palabra[100];
    int longitud, i, esPalindromo=1;

    printf("Dame una palabra: ");
    scanf("%s", palabra);

    longitud = strlen(palabra);


    for (i = 0; i < longitud / 2; i++) {
        if (palabra[i] != palabra[longitud - 1 - i]) {
            esPalindromo = 0; 
        }
    }

    if (esPalindromo==1) {
        printf("La palabra %s es palindromo.\n", palabra);
    } else {
        printf("La palabra %s no es palindromo.\n", palabra);
    }

    return 0;
}
