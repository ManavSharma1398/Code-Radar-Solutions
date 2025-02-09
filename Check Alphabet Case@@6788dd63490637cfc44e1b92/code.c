#include<stdio.h>
int main()
{
    char b;
    scanf("%C",&b);
    if((b>=A)&&(b<=Z))
    {
        printf("Uppercase");
    }
    else if((b>=a)&&(b<=z))
    {
        printf("Lowercase");
    }
    else
    {
        printf("Not an alphabet");
    }
}