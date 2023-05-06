#include<stdio.h>
int main()
{
    int a;
    printf("Enter the number :- ");
    scanf("%d",&a);
    if(a%5==0)
    {
        printf("The number %d is divisible by 5",a);
    }
    else
    {
        printf("The number %d is not divisible by 5",a);
    }
    return 0;
}