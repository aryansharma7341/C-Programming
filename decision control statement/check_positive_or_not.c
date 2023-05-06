#include<stdio.h>
int main()
{
    int x;
    printf("Enter the number :- ");
    scanf("%d",&x);
    if(x>=0)
    {
        printf("The number %d is positive",x);
    }
    else
    {
        printf("The number %d is non-positive",x);
    }
    return 0;
}