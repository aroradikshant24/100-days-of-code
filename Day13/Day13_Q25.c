#include <stdio.h>

int main() {
    int a, b;
    char op;

    printf("Enter two numbers and an operator (+, -, *, /, %): ");
    scanf("%d %d %c", &a, &b, &op);

    switch (op) {
        case '+':
            printf("%d\n", a + b);
            break;
        case '-':
            printf("%d\n", a - b);
            break;
        case '*':
            printf("%d\n", a * b);
            break;
        case '/':
            if (b != 0)
                printf("%d\n", a / b);
            else
                printf("Error: Division by zero not allowed\n");
            break;
        case '%':
            if (b != 0)
                printf("%d\n", a % b);
            else
                printf("Error: Modulo by zero not allowed\n");
            break;
        default:
            printf("Invalid operator\n");
    }

    return 0;
}
