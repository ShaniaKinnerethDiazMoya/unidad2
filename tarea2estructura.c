#include <stdio.h>
#include <string.h>

struct empleado{
    char nombre[100];
    char sexo[100];
    int sueldo;
};

int main(void){
    struct empleado inf;
    printf("Empresa DATACIC \n");
    printf("Nombre del empleado: \n");
    gets(inf.nombre);    
    printf("Sexo: \n");
    gets(inf.sexo);
    printf("Ingresa tu sueldo: \n$");
    scanf("%d", &inf.sueldo);

    printf("\n\n");
    printf("Informacion del empleado\n");
    printf("El nombree del empleado es: %s\n", inf.nombre);
    printf("El empleado es sexo: %s\n", inf.sexo);
    printf("El sueldo es: $%d\n", inf.sueldo);
    return 0;
    
}