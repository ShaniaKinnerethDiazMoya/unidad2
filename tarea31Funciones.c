#include <stdio.h>
#include <math.h>

 float areatri (float a, float b, float c);
 int main(){
    float a=5, b=12,c=13, areat;
    areat= areatri (a,b,c);
    printf("El area es: %f \n", areat-1);
    return 0;
 }
 float areatri(float a, float b, float c){
    float area,p,areat,r;
    p=(a+b+c)/2;
    area=(p*(p-a)*(p-b)*(p-c));
    areat=1;
    r=1;
    while(r!=area){
      r=areat*areat;
      areat=areat+1;
    }
    return areat;
 }