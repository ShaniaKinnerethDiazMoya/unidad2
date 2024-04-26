#include <stdio.h>
#include <string.h>

struct atleta {
    char deporte[100];
    char nombre[100];
    char pais[100];
    int medallas;
};

int main(void) {
    printf("Atletas\n");
    struct atleta inf[10]; 
    int i, atleta1, atleta2, atleta3, atleta4, atleta5, atleta6, atleta7, atleta8, atleta9, atleta10;

    for (i = 0; i < 10; i++) {
        printf("Deporte que realizas:\n");
        gets(inf[i].deporte);
        printf("Tu Nombre:\n");
        gets(inf[i].nombre);
        printf("Tu pais:\n");
        gets(inf[i].pais);
        printf("Medallas obtenidas:\n");
        scanf("%d", &inf[i].medallas);
        getchar();

        printf("\n\n");
        printf("Información del atleta\n");
        printf("Deporte: %s\n", inf[i].deporte);
        printf("Nombre: %s\n", inf[i].nombre);
        printf("Pais: %s\n", inf[i].pais);
        printf("Medallas totales: %d\n", inf[i].medallas);
        printf("\n\n");

        atleta1=inf[0].medallas;
        atleta2=inf[1].medallas;
        atleta3=inf[2].medallas;
        atleta4=inf[3].medallas;
        atleta5=inf[4].medallas;
        atleta6=inf[5].medallas;
        atleta7=inf[6].medallas;
        atleta8=inf[7].medallas;
        atleta9=inf[8].medallas;
        atleta10=inf[9].medallas;
    }

    printf("Medallas atleta 1: %d\n", atleta1);
    printf("Medallas atleta 2: %d\n", atleta2);
    printf("Medallas atleta 3: %d\n", atleta3);
    printf("Medallas atleta 4: %d\n", atleta4);
    printf("Medallas atleta 5: %d\n", atleta5);
    printf("Medallas atleta 6: %d\n", atleta6);
    printf("Medallas atleta 7: %d\n", atleta7);
    printf("Medallas atleta 8: %d\n", atleta8);
    printf("Medallas atleta 9: %d\n", atleta9);
    printf("Medallas atleta 10: %d\n", atleta10);

    if(atleta1 >= atleta2 && atleta1 >= atleta3 && atleta1 >= atleta4 && atleta1 >= atleta5 && atleta1 >= atleta6 && atleta1 >= atleta7 && atleta1 >= atleta8 && atleta1 >= atleta9 && atleta1 >= atleta10){
        printf("El atleta con mas medallas es el 1 con: %d medallas\n", atleta1);
    }else if(atleta2 >= atleta1 && atleta2 >= atleta3 && atleta2 >= atleta4 && atleta2 >= atleta5 && atleta2 >= atleta6 && atleta2 >= atleta7 && atleta2 >= atleta8 && atleta2 >= atleta9 && atleta2 >= atleta10){
        printf("El atleta con mas medallas es el 2 con: %d medallas\n", atleta2);
    }else if(atleta3 >= atleta1 && atleta3 >= atleta2 && atleta3 >= atleta4 && atleta3 >= atleta5 && atleta3 >= atleta6 && atleta3 >= atleta7 && atleta3 >= atleta8 && atleta3 >= atleta9 && atleta3 >= atleta10){
        printf("El atleta con mas medallas es el 3 con: %d medallas\n", atleta3);
    }else if(atleta4 >= atleta1 && atleta4 >= atleta2 && atleta4 >= atleta3 && atleta4 >= atleta5 && atleta4 >= atleta6 && atleta4 >= atleta7 && atleta4 >= atleta8 && atleta4 >= atleta9 && atleta4 >= atleta10){
        printf("El atleta con mas medallas es el 4 con: %d medallas\n", atleta4);
    }else if(atleta5 >= atleta1 && atleta5 >= atleta2 && atleta5 >= atleta3 && atleta5 >= atleta4 && atleta5 >= atleta6 && atleta5 >= atleta7 && atleta5 >= atleta8 && atleta5 >= atleta9 && atleta5 >= atleta10){
        printf("El atleta con mas medallas es el 5 con: %d medallas\n", atleta5);
    }else if(atleta6 >= atleta1 && atleta6 >= atleta2 && atleta6 >= atleta3 && atleta6 >= atleta4 && atleta6 >= atleta5 && atleta6 >= atleta7 && atleta6 >= atleta8 && atleta6 >= atleta9 && atleta6 >= atleta10){
        printf("El atleta con mas medallas es el 6 con: %d medallas\n", atleta6);
    }else if(atleta7 >= atleta1 && atleta7 >= atleta2 && atleta7 >= atleta3 && atleta7 >= atleta4 && atleta7 >= atleta5 && atleta7 >= atleta6 && atleta7 >= atleta8 && atleta7 >= atleta9 && atleta7 >= atleta10){
        printf("El atleta con mas medallas es el 7 con: %d medallas\n", atleta7);
    }else if(atleta8 >= atleta1 && atleta8 >= atleta2 && atleta8 >= atleta3 && atleta8 >= atleta4 && atleta8 >= atleta5 && atleta8 >= atleta6 && atleta8 >= atleta7 && atleta8 >= atleta9 && atleta8 >= atleta10){
        printf("El atleta con mas medallas es el 8 con: %d medallas\n", atleta8);
    }else if(atleta9 >= atleta1 && atleta9 >= atleta2 && atleta9 >= atleta3 && atleta9 >= atleta4 && atleta9 >= atleta5 && atleta9 >= atleta6 && atleta9 >= atleta7 && atleta9 >= atleta8 && atleta9 >= atleta10){
        printf("El atleta con mas medallas es el 9 con: %d medallas\n", atleta9);
    }else if(atleta10 >= atleta1 && atleta10 >= atleta2 && atleta10 >= atleta3 && atleta10 >= atleta4 && atleta10 >= atleta5 && atleta10 >= atleta6 && atleta10 >= atleta7 && atleta10 >= atleta8 && atleta10 >= atleta9){
        printf("El atleta con mas medallas es el 10 con: %d medallas\n", atleta10);
    }

    return 0;
}
