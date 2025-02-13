#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    if(a<2)
    {
        printf("Not prime\n");
        return 0;
    }
    else if(a==0)
    {
        printf("Prime");
    }
    else 
    {
        printf("Not Prime");
    }
}