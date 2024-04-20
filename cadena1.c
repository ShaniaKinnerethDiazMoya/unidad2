#include <stdio.h>
#include <string.h>

int main (){
    char pala1[15];
    char pala2[15];
    char pal1[15];
    char pal2[15];

    printf("Dame la primer palabra\n");
    scanf("%s", pala1);
    printf("Dame la segunda palabra\n");
    scanf("%s", pala2);
    strcpy(pal1, pala2);
    printf("Palabra_1: %s \n", pal1);
    strcpy(pal2, pala1);
    printf("Palabra_2: %s \n", pal2);
    
    return 0;
}