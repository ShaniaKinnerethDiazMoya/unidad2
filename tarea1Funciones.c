#include <stdio.h>
 float maximo (float a, float b);
 int main(){
    float a=5, b=10, nummay;
    nummay= maximo(a,b);
    printf("El numero mayor es: %f \n", nummay);
    return 0;
 }
 float maximo(float a, float b){
    float nummay;
    if(a>b){
        nummay=a;
    }else{
        nummay=b;
    }
    
    return nummay;
 }