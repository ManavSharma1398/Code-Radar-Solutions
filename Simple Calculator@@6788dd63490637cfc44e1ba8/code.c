#include<stdio.h>
int main()
{
    int a,b,o;
    scanf("%d%d%c",&a,&b,&o);
    switch(o)
    {
        case '+':
            printf("%d",a+b);
            break;
        case '-':
            printf("%d",a-b);
            break;
        case '*':
            printf("%d",a*b);
            
        case '/':
            printf("%d",a/b);
            break;
        default:
            printf("error");
    }
}