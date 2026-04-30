#include <stdio.h>

int main() {
    float a, b, result;
    char op;

    printf("Enter the calculation, operators use are + - / * : ");
    scanf("%f%c%f", &a,&op,&b);


    switch (op) {
        case '+':
            result = a + b;
            printf("Result : %.2lf\n", result);
            break;

        case '-':
            result = a - b;
            printf("Result : %.2lf\n", result);
            break;

        case '*':
            result = a * b;
            printf("Result : %.2lf\n", result);
            break;

        case '/':
            if (b == 0) {
                printf("Error : Division by zero is not allowed.\n");
            } else {
                result = a / b;
                printf("Result : %.2lf\n", result);
            }
            break;

        default:
            printf("Error : Invalid operator entered.\n");
    }

    return 0;
}
