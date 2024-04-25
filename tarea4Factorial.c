#include <stdio.h>

int main (void){
    int x,y,max;
    
    printf("Dame el numero a factorizar: \n");
    scanf("%d", &x);
    
    max=potencia(x);
    printf("El factorial es: %d", max);
    return 0;
}
 int potencia( int a){
    if(a < 1)
        return 1;
    else
        return a *potencia(a-1);
 }