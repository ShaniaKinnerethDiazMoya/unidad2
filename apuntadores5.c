#include <stdio.h>
int main(){
    char cadena[10];
    int miArreglo[4]={1,2,3,4};
    printf("un int ocupa %d bytes \n", sizeof(int));
    printf("un char ocupa %d bytes \n", sizeof(char));
    printf("un float ocupa %d bytes \n", sizeof(float));
    printf("un double ocupa %d bytes \n", sizeof(double));
    printf("una cadena ocupa %d bytes \n", sizeof(cadena));
    printf("una cadena ocupa %d bytes \n", sizeof(miArreglo));

}