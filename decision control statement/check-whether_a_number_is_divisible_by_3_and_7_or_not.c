#include<stdio.h>
int main()
{
    int a;
    printf("Enter the number :- ");
    scanf("%d",&a);
    if((a/3)*3==a)
    {
        if((a/7)*7==a)
        {
            printf("The number %d is divisible by 7 and 3",a);
        }
        else
        {
            printf("The number %d is not divisible by 7 and 3",a);
        }
    }
    else
    {
        printf("The number %d is not divisible by 7 and 3",a);
    }
    return 0;
}