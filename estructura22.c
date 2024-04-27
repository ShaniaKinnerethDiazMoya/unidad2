#include <stdio.h>

int main() {
    char operador;
    float num1, num2, resultado;

    printf("Ingrese operador (+, -, *, /): ");
    scanf("%c", &operador);

    printf("Ingrese dos números: ");
    scanf("%f %f", &num1, &num2);

    switch(operador) {
        case '+':
            resultado = num1 + num2;
            break;
        case '-':
            resultado = num1 - num2;
            break;
        case '*':
            resultado = num1 * num2;
            break;
        case '/':
            if(num2 != 0)
                resultado = num1 / num2;
            else {
                printf("Error: División por cero\n");
                return 1;
            }
            break;
        default:
            printf("Operador no válido\n");
            return 1;
    }

    printf("Resultado: %f\n", resultado);

    return 0;
}
