#include <stdio.h>


struct CD{
    int num_canciones;
    int anio;
    int precio;
};

int main(void){
    struct CD cd1;
    printf("Ingresa el numero de canciones\n");
    scanf("%d", &cd1.num_canciones);
    printf("Ingresa el año\n");
    scanf("%d", &cd1.anio);
    printf("Ingresa el precio\n");
    scanf("%d", &cd1.precio);
    printf("El numero de canciones es: %d\n", cd1.num_canciones);
    printf("El año es; %d\n", cd1.anio);
    printf("El precio es: %d\n", cd1.precio);
    return 0;
    
}