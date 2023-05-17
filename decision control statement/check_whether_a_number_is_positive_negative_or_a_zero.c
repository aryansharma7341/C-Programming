#include<stdio.h>
int main()
{
    int a;
    printf("Enter the number :- ");
    scanf("%d",&a);
    if(a>0)
    {
        printf("The number %d is a positive number ",a);
    }
    else if(a==0)
    {
        printf("The number enterted by user is zero");
    }
    else
    {
        printf("The number %d is a negative number",a);
    }
    return 0;
}