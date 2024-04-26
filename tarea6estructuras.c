#include <stdio.h>

struct fraccion{
    int den;
    int num;
};

int main(void)
{
    struct fraccion frac1;
    struct fraccion frac2;
    frac1.num=3;//a
    frac1.den=4;//b
    frac2.num=6;//c
    frac2.den=2;//d
    multipli(frac1,frac2);
    suma(frac1,frac2);
    divicion(frac1, frac2);
    return 0;
    
}

int multipli (struct fraccion mul1, struct fraccion mul2){
    printf("Multiplicacion \n");
    int num= mul1.num * mul2.num;
    int den= mul1.den * mul2.den;

    printf("%d/%d\n", num, den);
    return 0;
}

int suma (struct fraccion sum1, struct fraccion sum2){
    printf("Suma\n");
    int arri1= sum1.num * sum2.den;
    int arri2= sum2.num * sum1.den;
    int divab= sum1.den * sum2.den;
    int sumat= arri1 + arri2;
    printf("%d/%d\n", sumat, divab);
    return 0;
}

int divicion (struct fraccion div1, struct fraccion div2){
    printf("Division\n");
    int divnum= div1.num * div2.den;
    int divden= div2.num * div1.den;
    
    printf("%d/%d\n", divnum, divden);
    return 0;
}