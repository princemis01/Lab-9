#include <stdio.h>

float add(float a, float b) {
    return a + b;
}

float subtract(float a, float b) {
    return a - b;
}

float multiply(float a, float b) {
    return a * b;
}

float divide(float a, float b) {
    return a / b;
}

int main() {
    float num1, num2, result;
    char operation;

    printf("Enter two numbers: ");
    scanf("%f %f", &num1, &num2);
    printf("Enter operation (+, -, *, /): ");
    scanf(" %c", &operation);

    if (operation == '+')
        result = add(num1, num2);
    else if (operation == '-')
        result = subtract(num1, num2);
    else if (operation == '*')
        result = multiply(num1, num2);
    else if (operation == '/')
        result = divide(num1, num2);
    else {
        printf("Invalid operation");
        return 1;
    }

    printf("Result: %.2f\n", result);
    return 0;
}
