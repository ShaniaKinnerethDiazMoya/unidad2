#include <stdio.h>

int main() {
    int n, i, j;

    printf("Ingrese la altura del triángulo: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++) { 
        for(j = 1; j <= i; j++) { 
            printf("*");
        }
        printf("\n"); 
    }
    printf("\n\n");

    for(i = n; i >= 1; i--) { 
        for(j = i; j >= 1; j--) { 
            printf("*");
        }
        printf("\n"); 
    }

    return 0;
}