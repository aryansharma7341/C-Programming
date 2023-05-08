#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter two numbers :- \n");
    scanf("%d%d",&a,&b);
    if(a>b)
    {
        printf("%d between the numbers %d and %d is greater",a,a,b);
    }
    else if(a==b)
    {
        printf("Both the numbers are equal");
    }
    else
    {
        printf("%d between the numbers %d and %d is greater",b,a,b);
    }
    return 0;
}