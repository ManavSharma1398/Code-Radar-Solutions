#include<stdio.h>
int main()
{
    char a;
    scanf("%C",&a);
    if((a>64)&&(a<91))
    {
        printf("Uppercase");
    }
    else if((a>97)&&(a<123))
    {
        printf("Lowercase");
    }
    else
    {
        printf("Not an alphabet");
    }
}