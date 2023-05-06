#include<stdio.h>
int main()
{
    int a;
    printf("Enter the number :- ");
    scanf("%d",&a);
    if(999>=a)
    {
        if(a>=100)
        {
        printf("The number is an three-digit number ");
        }
        else
        {
            printf("The number is not an three-digit number");
        }
    }
    else
        {
            printf("The number is not an three-digit number");
        }
    return 0;
}