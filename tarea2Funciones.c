#include <stdio.h>
#include <string.h>
char final(char texto[100] ,char inver[100]);
int main(){
    char texto[100];
    char inver[100];
    printf("Escribe algo; ");
    fgets(texto, 100, stdin);
    final(texto,inver);
    return 0;
}
char final(char texto[100], char inver[100]){
    int len=strlen(texto);
    for (int i=len-1;i>=0; i--){
        inver[i]=texto[len-1-i];
        printf("%c", texto[i]);
    }
    printf("\n");
    //return final;
}