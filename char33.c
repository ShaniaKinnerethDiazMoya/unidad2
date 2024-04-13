#include <stdio.h>
#include <ctype.h>

int main() {
    char cadena[100];
    int i = 0;

    printf("Ingrese una cadena de texto: ");
    fgets(cadena, sizeof(cadena), stdin);

    while (cadena[i]) {
        cadena[i] = toupper(cadena[i]);
        i++;
    }

    printf("Cadena en mayúsculas: %s", cadena);

    return 0;
}
