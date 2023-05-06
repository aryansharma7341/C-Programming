#include<stdio.h>
int main()
{
    int a;
    printf("Enter the number :- ");
    scanf("%d",&a);
    if(a/2*2==a)
    {
        printf("The number is an even number");
    }
    else
    {
        printf("The number is an odd number");
    }
    return 0;
}