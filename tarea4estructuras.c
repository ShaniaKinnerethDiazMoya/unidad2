#include <stdio.h>
#include <string.h>

struct empleado {
    char nombre[100];
    char sexo[100];
    int sueldo;
};

int main(void) {
    printf("Empresa DATACIC\n");
    struct empleado inf[5]; 
    int i, sueldo1, sueldo2, sueldo3, sueldo4, sueldo5;

    for (i = 0; i < 5; i++) {
        printf("Nombre del empleado:\n");
        gets(inf[i].nombre);
        printf("Sexo:\n");
        gets(inf[i].sexo);
        printf("Ingresa tu sueldo:\n$");
        scanf("%d", &inf[i].sueldo);
        getchar();

        printf("\n\n");
        printf("Información del empleado\n");
        printf("El nombre del empleado es: %s\n", inf[i].nombre);
        printf("El sexo del empleado es: %s\n", inf[i].sexo);
        printf("El sueldo es: $%d\n", inf[i].sueldo);
        printf("\n\n");

        sueldo1=inf[0].sueldo;
        sueldo2=inf[1].sueldo;
        sueldo3=inf[2].sueldo;
        sueldo4=inf[3].sueldo;
        sueldo5=inf[4].sueldo;
    }

    printf("Sueldo del empleado 1: $%d\n", sueldo1);
    printf("Sueldo del empleado 2: $%d\n", sueldo2);
    printf("Sueldo del empleado 3: $%d\n", sueldo3);
    printf("Sueldo del empleado 4: $%d\n", sueldo4);
    printf("Sueldo del empleado 5: $%d\n", sueldo5);

    if(sueldo1 >= sueldo2 && sueldo1 >= sueldo3 && sueldo1 >= sueldo4 && sueldo1 >= sueldo5){
        printf("El sueldo mayor es el del empleado 1 con: $%d pesos\n", sueldo1);
    }else if(sueldo2 >= sueldo1 && sueldo2 >= sueldo3 && sueldo2 >= sueldo4 && sueldo2 >= sueldo5){
        printf("El sueldo mayor es el del empleado 2 con: $%d pesos\n", sueldo2);
    }else if(sueldo3 >= sueldo1 && sueldo3 >= sueldo2 && sueldo3 >= sueldo4 && sueldo3 >= sueldo5){
        printf("El sueldo mayor es el del empleado 3 con: $%d pesos\n", sueldo3);
    }else if(sueldo4 >= sueldo1 && sueldo4 >= sueldo2 && sueldo4 >= sueldo3 && sueldo4 >= sueldo5){
        printf("El sueldo mayor es el del empleado 4 con: $%d pesos\n", sueldo4);
    }else if(sueldo5 >= sueldo1 && sueldo5 >= sueldo2 && sueldo5 >= sueldo3 && sueldo5 >= sueldo4){
        printf("El sueldo mayor es el del empleado 5 con: $%d pesos\n", sueldo5);
    }
    return 0;
}
