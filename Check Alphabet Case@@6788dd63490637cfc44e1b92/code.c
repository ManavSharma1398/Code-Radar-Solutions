#include<stdio.h>
void main()
{
    char ch;
    scanf("%C",&ch);
    if((ch>=A)&&(ch<=Z))
    {
        printf("Uppercase");
    }
    else if((ch>=a)&&(ch<=z))
    {
        printf("Lowercase");
    }
    else
    {
        printf("Not an alphabet");
    }
}