#include <stdio.h>

int main() {
    char operator;
    float num1, num2;

    printf("Enter num1: ");
    scanf("%f", &num1);

    printf("Enter num2: ");
    scanf("%f", &num2);

    printf("Enter an operator (+, -, *, /): ");
    scanf(" %c", &operator);

    switch (operator) {
        case '+':
            printf("Result: %f\n", num1 + num2);
            break;
        case '-':
            printf("Result: %f\n", num1 - num2);
            break;
        case '*':
            printf("Result: %f\n", num1 * num2);
            break;
        case '/':
            if (num2 == 0) {
                printf("Error: Division by zero is invalid.\n");
            } else {
                printf("Result: %f\n", num1 / num2);
            }
            break;
        default:
            printf("Error: Invalid operator.\n");
    }
printf("maryadit 125113052\n");
    return 0;
}