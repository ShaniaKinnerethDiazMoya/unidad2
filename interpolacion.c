#include <stdio.h>
int main(){
    int n;//numero de datos
    int i;//contador del ciclo de datos
    printf("¿Cuantas coordenas vas a utilizar? ");
    scanf("%d", &n);
    int x[n-1];//datos de las x
    int y[n-1];//datos de las y
    char z='x';
    for(i=0;i<n;i++){
        printf("Dame le valor de x del binomio %d: ", i);
        scanf("%d", &x[i]);
        printf("Dame la valor de y del binomio %d: ", i);
        scanf("%d", &y[i]);
    }
    printf("\n\n");
    for(i=0;i<n;i++){
        printf("x%d: %d\t\t",i, x[i]);
        printf("f(x%d): %d\n",i, y[i]);
    }
    printf("\n\n");
    int r[n-1];
    for(i=0; i<n-1 ; i++){
        r[i]=((y[i+1]) - (y[i])) / ((x[i+1]) - (x[i]));
        printf("f(x%d,x%d)=f(x%d)-f(x%d)/x%d-x%d = (%d-%d)/(%d-%d) = %d \n", i,i+1, i+1, i,i+1,i, y[i+1], y[i], x[i+1], x[i],r[i]);
    }
    printf("\n\n");
    int res[n-1];
    for(i=0; i<n-2 ; i++){
        res[i]=((r[i+1]) - (r[i])) / ((x[i+2]) - (x[i]));
        printf("f(x%d,x%d,x%d)=f(x%d,x%d)-f(x%d,x%d)/x%d-x%d= (%d-%d)/(%d-%d)= %d \n",i,i+1,i+2,i+1,i+2,i,i+1,i+2,i,r[i+1],r[i],x[i+2],x[i],res[i]);
    }
    printf("\n\n");
    int a[n-1];
    a[0]=y[0];
    a[1]=r[0];
    a[2]=res[0];
    
    for(i=0;i<n;i++){
        printf("x%d: %d\t\t",i, x[i]);
        printf("f(x%d): %d\t\t",i, y[i]);
        printf("a%d: %d\n", i, a[i]);
    }
    printf("\n\n");
    i=0;
    //int contarango;
    int resul[100];
    int e;
    int s;
    int cr;
    int j=0;
    printf("Formula: \nPn(x)=a%d+a%d(x-x%d)+a%d(x-x%d)(x-x%d)\n", i,i+1,i,i+2,i,i+1);
    printf("Sustitucion: \nPn(x)= %d + (%d) ((%c) - (%d)) + (%d) ((%c) - (%d)) ((%c) - (%d))\n",a[i],a[i+1],z,x[i],a[i+2],z,x[i],z,x[i+1]);
    printf("Dame el rango inicial a utilizar de las x:");
    scanf("%d", &e);
    printf("Dame el rango final a utilizar de las x:");
    scanf("%d", &s);
    printf("\n\n");
    printf("x\t\tP(x)\n");
    for(cr=e;cr<=s;cr++){
        resul[j]=a[i] + (a[i+1]) * (cr - x[i]) + (a[i+2]) * (cr - x[i]) * (cr - x[i+1]);
        printf("%d\t\t",cr);
        printf("%d\n",resul[j]);
        j++;
    }
    return 0;   
}