#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){
    int i=10,n;
    int * buffer;
    //printf("Teclea la longitud de la cadena");
    //scanf("%d", &i);

    buffer = (int*)malloc((i+1)*sizeof(int));
    if(buffer==NULL)exit(1);
    clock_t inicio = clock();
    for(n=0;n<i;n++){
        buffer[n] = 10;
        printf("El valor de la posicion %d es: %d\n",n,buffer[n]);

    buffer[i]='\0';
    }
    free(buffer);
    clock_t fin = clock();
    double time_spent = (double)(fin - inicio) / CLOCKS_PER_SEC;
    printf("El tiempo de ejecucion en segundos es: %f \n", time_spent);
    printf("En ciclos de reloj: %f\n", (double) (fin - inicio));
    return 0;
}