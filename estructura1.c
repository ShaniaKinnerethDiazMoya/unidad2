#include <stdio.h>
#include <string.h>

struct CD{
    char titulo[100];
    char artista[50];
};

int main(void){
    struct CD cd1;
    printf("Ingresa el titulo\n");
    gets(cd1.titulo);
    printf("Ingresa el artista\n");
    gets(cd1.artista);
    printf("%s\n", cd1.titulo);
    printf("%s\n", cd1.artista);
    return 0;
    
}