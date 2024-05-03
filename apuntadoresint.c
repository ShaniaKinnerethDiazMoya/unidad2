#include <stdio.h>
#include <stdlib.h>
int main(){
    int i,n;
    int * buffer;
    printf("Teclea la longitud de la cadena");
    scanf("%d", &i);

    buffer = (int*)malloc((i+1)*sizeof(int));
    if(buffer==NULL)exit(1);

    for(n=0;n<i;n++){
        printf("Dame el valor de la posicion %d\n",n);
        scanf("%d",&buffer[n]);
        printf("El valor de la posicion %d es: %d\n",n,buffer[n]);

    buffer[i]='\0';
    }
    free(buffer);
    return 0;
}