#include<stdio.h>
int main() {
    int a, b;
    char o;  // Changed the type of 'o' to char
    
    
    scanf("%d %d", &a, &b);
    scanf(" %c", &o);  // Notice the space before %c
    
    switch (o) {
        case '+':
            printf("%d", a, b, a + b);
            break;
        case '-':
            printf("%d", a, b, a - b);
            break;
        case '*':
            printf("%d", a, b, a * b);
            break;
        case '/':
            if (b != 0) {
                printf("%d", a, b, a / b);
            } else {
                printf("error");
            }
            break;
        default:
            printf("Error: Invalid operator.\n");
    }

    return 0;
}