#include<stdio.h>
int main()
{
    int a,b=0;
    printf("Enter the number : ");
    scanf("%d",&a);
    if(a<0)
    {
        a=-1*a;
        b=1;
    }
    else
    {
        a=-1*a;
        b=2;
    }
    switch(b)
    {
        case(1):
        {
            printf("The number is converted to %d",a);
            break;
        }
        case(2):
        {
            printf("The number is converted to %d",a);
            break;
        }
    }
    return 0;
}