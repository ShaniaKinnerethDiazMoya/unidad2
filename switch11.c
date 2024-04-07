#include <stdio.h>

int main() {
    char operador;
    double num1, num2;

    printf("Introduce un operador (+, -, *, /): ");
    scanf("%c", &operador);
    printf("Introduce dos operandos: ");
    scanf("%lf %lf", &num1, &num2);

    switch(operador) {
        case '+':
            printf("%.1lf + %.1lf = %.1lf", num1, num2, num1 + num2);
            break;
        case '-':
            printf("%.1lf - %.1lf = %.1lf", num1, num2, num1 - num2);
            break;
        case '*':
            printf("%.1lf * %.1lf = %.1lf", num1, num2, num1 * num2);
            break;
        case '/':
            if(num2 != 0.0)
                printf("%.1lf / %.1lf = %.1lf", num1, num2, num1 / num2);
            else
                printf("División por cero.");
            break;
        default:
            printf("Operador no válido.");
    }

    return 0;
}
