#include <stdio.h>
#include <time.h>

int main (void){
    int x,y,max;
    
    printf("Dame el numero a factorizar: \n");
    scanf("%d", &x);
    
    clock_t inicio = clock();

    max=potencia(x);
    printf("El factorial es: %d\n", max);

    clock_t fin = clock();
    double time_spent = (double)(fin - inicio) / CLOCKS_PER_SEC;

    printf("El tiempo de ejecucion en segundos es: %f \n", time_spent);
    printf("En ciclos de reloj: %f\n", (double) (fin - inicio));
    return 0;
}
 int potencia( int a){
    if(a < 1)
        return 1;
    else
        return a *potencia(a-1);
 }