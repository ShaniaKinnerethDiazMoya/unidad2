#include <stdio.h>
#include <string.h>

int main(){
    int len;
    int i,j;
    char cad[10];
    printf("Introduce una palabra \n");
    scanf("%s", cad);
    len=strlen(cad);
    printf("La longitud de:\'%s\' es: %d\n", cad, len);
    for(i=0;i<len;i++){
        for(j=0;j<len;j++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}