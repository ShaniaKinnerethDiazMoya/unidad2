#include <stdio.h>

int main(){
    int x=17,y;
    //printf("El valor de x es: %d", x);
    int *p;

    p= &x;//p es igual a direccion de x direccion con &
    y= *p + 3;// valor con *
    printf("El valor de y es: %d", y);
    printf("La direcciond de memoria de a es: %p", &y);
    return 0;
}