#include<stdio.h>
int main()
{
    int a;
    printf("Enter the year to be checked :- ");
    scanf("%d",&a);
    if((a/4)*4==a)
        {
        if(a/100*100==a)
            {
                if(a/400*400==a)
                {
                    printf("The year %d is a leap year",a);
                }
                else
                {
                     printf("The year %d is not a leap year",a);
                }
            }
        else if((a/4)*4==a)
            {   
                if((a/100)*100!=a)
                {
                    printf("The year %d is a leap year",a);
                }
            }
        }
    else
        {
            printf("The year %d is not a leap year",a);
        }
    return 0;
}