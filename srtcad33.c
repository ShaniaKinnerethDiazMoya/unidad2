#include <stdio.h>
#include <string.h>

int main() {
    char resultado[100] = "";
    char parte1[] = "Hola, ";
    char parte2[] = "este es ";
    char parte3[] = "un ejemplo.";
    
    strcat(resultado, parte1);
    strcat(resultado, parte2);
    strcat(resultado, parte3);
    
    printf("Resultado: %s\n", resultado);
    
    return 0;
}
