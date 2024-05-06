#include <stdio.h>
#include <time.h>

int main (){
    clock_t inicio = clock();

    int vector [10];
    int i = 0;
    while (i<10){
        vector[i] = 10;
        i++;
    }
    i = 0;
    while (i<10){
        printf ("%d\n", vector[i]);
        i++;
    }
    clock_t fin = clock();
    double time_spent = (double)(fin - inicio) / CLOCKS_PER_SEC;

    printf("El tiempo de ejecucion en segundos es: %f \n", time_spent);
    printf("En ciclos de reloj: %f\n", (double) (fin - inicio));
    return 0;
}