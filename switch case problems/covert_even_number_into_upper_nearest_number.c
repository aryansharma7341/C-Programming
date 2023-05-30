#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter a even number : ");
    scanf("%d",&a);
    if(a>0)
    {
        if(a%2==0)
        {
            a=a+1;
            b=1;
        }
        else
        {
            b=2;
        }
    }
    switch(b)
    {
        case(1):
        {
            printf("The nearest odd number is %d",a);
            break;
        }
        case(2):
        {
            printf("Please enter a even number !!!");
            break;
        }
    }
    return 0;
}