#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    clock_t inicio = clock();

    printf("Ejecutando LibreOffice\n");
    system("libreoffice --writer"); 
    
    clock_t fin = clock();
    double time_spent = (double)(fin - inicio) / CLOCKS_PER_SEC;

    printf("El tiempo de ejecucion en segundos es: %f \n", time_spent);
    printf("En ciclos de reloj: %f\n", (double) (fin - inicio));
    
    return 0;
}

