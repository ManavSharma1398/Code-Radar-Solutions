#include<stdio.h>
int main() {
    int a, b;
    char o;  // Changed the type of 'o' to char
    
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    printf("Enter an operator (+, -, *, /): ");
    scanf(" %c", &o);  // Notice the space before %c
    
    switch (o) {
        case '+':
            printf("%d + %d = %d\n", a, b, a + b);
            break;
        case '-':
            printf("%d - %d = %d\n", a, b, a - b);
            break;
        case '*':
            printf("%d * %d = %d\n", a, b, a * b);
            break;
        case '/':
            if (b != 0) {
                printf("%d / %d = %d\n", a, b, a / b);
            } else {
                printf("Error: Division by zero is not allowed.\n");
            }
            break;
        default:
            printf("Error: Invalid operator.\n");
    }

    return 0;
}