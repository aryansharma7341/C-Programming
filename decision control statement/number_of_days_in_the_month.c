#include<stdio.h>
int main()
{
    int x;
    printf("Enter the month number :- ");
    scanf("%d",&x);
    if(x==1 || x==3 || x==5 || x==7 || x==8 || x==10 || x==12)
    {
        printf("There are 31 days in the month");
    }
    else if(x==2)
    {
        printf("There are 28 days in the month");
    }
    else
    {
        printf("There are 30 days in the month");
    }
    return 0;
}