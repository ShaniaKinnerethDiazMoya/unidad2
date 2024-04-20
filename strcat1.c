#include <stdio.h>
#include <string.h>

int main (){
    int len;
    char pala1[15];
    char pala2[15];
    int i;
    
    printf("Dame la primer palabra\n");
    scanf("%s", pala1);
    printf("Dame la segunda palabra\n");
    scanf("%s", pala2);
    printf("Palabra 1: %s\n", pala1);
    printf("Palabra 2: %s\n", pala2);
    len= strlen (pala1);
    printf("Palabra 1: %s", pala1);

    for(i=0;i<len;i++){
        printf("%s",pala2);
    }
    return 0;
}