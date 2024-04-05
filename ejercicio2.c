#include <stdio.h>
int main(){
    int i,i2,i4,i6;
    printf("A      |A+2    |A+4    |A+6  \n");
    for(i=3;i<13;i++){
        i2=i+2;
        i4=i+4;
        i6=i+6;
        printf("%d\t%d\t%d\t%d \n", i, i2, i4,i6);
        i=i+2;
    }

}