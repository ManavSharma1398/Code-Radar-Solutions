#include<stdio.h>
void main()
{
    char ch;
    scanf("%C",&ch);
    if((ch>=A)&&(ch<=Z))
    {
        printf("Uppercase",ch);
    }
    else if((ch>=a)&&(ch<=z))
    {
        printf("Lowercase",ch);
    }
    else
    {
        printf("Not an alphabet");
    }
}