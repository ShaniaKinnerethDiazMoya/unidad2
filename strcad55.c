#include <stdio.h>
#include <string.h>

int main() {
    char resultado[50] = "La fruta es: ";
    char fruta[] = "manzana";
    int cantidad = 3;
    char cantidad_str[10];
    
    if (cantidad > 1) {
        strcat(resultado, "hay ");
        sprintf(cantidad_str, "%d", cantidad);
        strcat(resultado, cantidad_str);
        strcat(resultado, " ");
    } else {
        strcat(resultado, "hay una ");
    }
    
    strcat(resultado, fruta);
    printf("%s\n", resultado);
    
    return 0;
}
