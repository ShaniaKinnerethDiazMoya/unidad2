#include <stdio.h>
#include <ctype.h>

int main() {
    char cadena[100];
    int palabras = 0, i = 0;
    int en_palabra = 0;

    printf("Ingrese una cadena de texto: ");
    fgets(cadena, sizeof(cadena), stdin);

    while (cadena[i]) {
        if (isalpha(cadena[i])) {
            if (!en_palabra) {
                palabras++;
                en_palabra = 1;
            }
        } else {
            en_palabra = 0;
        }
        i++;
    }

    printf("Número de palabras: %d\n", palabras);

    return 0;
}
