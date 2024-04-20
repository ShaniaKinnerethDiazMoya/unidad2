#include <stdio.h>

int main() {
    char palabra[100];
    int abecedario[26] = {0};
    int i;
    printf("Dame una palabra: ");
    scanf("%s", palabra);
    for (i = 0; palabra[i] != '\0'; i++) {
        if (palabra[i] >= 'a' && palabra[i] <= 'z') {
            abecedario[palabra[i] - 'a']++;
        }
    }
    printf("Cantidad de cada letra:\n");
    for ( i = 0; i < 26; i++) {
        if (abecedario[i] > 0) {
            printf("%c: %d\n", 'a' + i, abecedario[i]);
        }
    }
     return 0;
}