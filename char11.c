#include <stdio.h>
#include <ctype.h>

int main() {
    char cadena[100];
    int letras = 0, digitos = 0, espacios = 0;
    int i = 0;

    printf("Ingrese una cadena de texto: ");
    fgets(cadena, sizeof(cadena), stdin);

    while (cadena[i] != '\0') {
        if (isalpha(cadena[i])) {
            letras++;
        } else if (isdigit(cadena[i])) {
            digitos++;
        } else if (isspace(cadena[i])) {
            espacios++;
        }
        i++;
    }

    printf("Letras: %d\n", letras);
    printf("Dígitos: %d\n", digitos);
    printf("Espacios: %d\n", espacios);

    return 0;
}
