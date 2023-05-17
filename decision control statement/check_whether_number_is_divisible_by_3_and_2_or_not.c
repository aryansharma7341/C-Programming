#include<stdio.h>
int main()
{
    int a;
    printf("Enter the number :- ");
    scanf("%d",&a);
    if((a/3)*3==a)
    {
        if((a/2)*2==a)
        {
            printf("The number %d is divisible by 2 and 3",a);
        }
        else
        {
            printf("The number %d is not divisible by 2 and 3",a);
        }
    }
    else
    {
        printf("The number %d is not divisible by 2 and 3",a);
    }
    return 0;
}