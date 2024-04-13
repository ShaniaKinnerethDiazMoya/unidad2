#include <stdio.h>
#include <string.h>

int main() {
    char cadena[100];
    char invertida[100];
    int longitud, i;

    printf("Ingrese una cadena de texto: ");
    fgets(cadena, sizeof(cadena), stdin);
    longitud = strlen(cadena) - 1; // -1 para no contar el '\n'

    for (i = 0; i < longitud; i++) {
        invertida[i] = cadena[longitud - i - 1];
    }
    invertida[i] = '\0'; // Añadir el carácter nulo al final

    printf("Cadena invertida: %s\n", invertida);

    return 0;
}
