#include<stdio.h>
int main()
{
    int a,check;
    printf("Enter the year : ");
    scanf("%d",&a);
    if(a%400==0)
    {
        check=1;
    }
    else if(a%4==0)
    {
        if(a%100!=0)
        {
            check=1;
        }
        else
        {
            check=2;
        }
    }
    else
    {
        check=2;
    }
    switch(check)
    {
        case(1):
        {
            printf("The year is a leap year");
            break;
        }
        case(2):
        {
            printf("The year is not a leap year");
            break;
        }
    }
    return 0;
}