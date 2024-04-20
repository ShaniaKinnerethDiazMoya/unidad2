#include <stdio.h>
#include <string.h>

int main (){
    int len1, len2, res;
    char pala1[100], pala2[100];
    printf("Dame la primer palabra\n");
    scanf("%s", pala1);
    printf("Dame la segunda palabra\n");
    scanf("%s", pala2);
    len1= strlen (pala1);
    len2= strlen (pala2);
    if(len1>len2){
        printf("La palabra %s es mayor que %s\n",pala1,pala2);
    }else if(len2>len1){
        printf("La palabra %s es mayor que %s\n",pala2,pala1);
    }
    res = strcmp( pala1, pala2);
    if(res==0){
        printf("Ambas palabras son iguales");
    }else{
        printf("resultado: %d\n", res);
    }
    return 0;
}