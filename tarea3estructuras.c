#include <stdio.h>
#include <string.h>

struct atletas{
    char deporte[100];
    char nombre[100];
    char pais[100];
    int n_medallas;
};

int main(void){
    struct atletas inf;
    printf("Atletas \n");
    printf("Deporte que practicas: \n");
    gets(inf.deporte);    
    printf("Tu Nombre: \n");
    gets(inf.nombre);
    printf("Tu Pais: \n");
    gets(inf.pais);
    printf("Numero de medallas ganadas: \n");
    scanf("%d", &inf.n_medallas);

    printf("\n\n");
    printf("Informacion del atleta");
    printf("Deporte: %s\n", inf.deporte);
    printf("Nombre: %s\n", inf.nombre);
    printf("Pais: %s\n", inf.pais);
    printf("Medallas obtenidad: %d\n", inf.n_medallas);

    return 0;
    
}