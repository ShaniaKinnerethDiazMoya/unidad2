#include <stdio.h>
#include <ctype.h>

int main() {
    char c;

    printf("Ingrese un carácter: ");
    scanf("%c", &c);

    c = tolower(c); // Convertir a minúscula para simplificar la comprobación

    switch(c) {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
            printf("El carácter es una vocal.\n");
            break;
        default:
            printf("El carácter no es una vocal.\n");
            break;
    }

    return 0;
}
