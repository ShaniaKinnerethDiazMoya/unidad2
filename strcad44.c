#include <stdio.h>
#include <string.h>

int main() {
    char texto[50] = "El número es: ";
    int numero = 42;
    char numero_str[10];
    
    sprintf(numero_str, "%d", numero);
    strcat(texto, numero_str);
    
    printf("%s\n", texto);
    
    return 0;
}
