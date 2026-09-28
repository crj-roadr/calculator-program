#include <stdio.h>

int main() {
    float firstNumber = 0.0f;
    float secondNumber = 0.0f;
    float result = 0.0f;

    char operator = '\0';

    printf("Enter the first number: ");
    scanf("%f", &firstNumber);

    printf("Enter the operator (+ - * /): ");
    scanf(" %c", &operator);

    switch (operator) {
        case '+':
            operator = '+';
            break;
        case '-':
            operator = '-';
            break;
        case '*':
            operator = '*';
            break;
        case '/':
            operator = '/';
            break;
        default:
            perror("Invalid operator. Please, run the program again and choose one of the following (+ - * /).");
            return 1;
            break;
    }

    printf("Enter the second number: ");
    scanf("%f", &secondNumber);

    if (operator == '+') result = firstNumber + secondNumber;
    else if (operator == '-') result = firstNumber - secondNumber;
    else if (operator == '*') result = firstNumber * secondNumber;
    else result = firstNumber / secondNumber;

    printf("Result: %.4f\n", result);

    return 0;
}