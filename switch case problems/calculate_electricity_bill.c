#include<stdio.h>
int main()
{
    int unit,value;
    float bill;
    printf("\nEnter the electric unit : ");
    scanf("%d",&unit);
    if(unit<=50)
    {
        bill=unit*0.5;
        value=1;
    }
    else if(unit<=150)
    {
        bill=25+(unit-50)*0.75;
        value=2;
    }
    else if(unit<=250)
    {
        bill=100+(unit-150)*1.2;
        value=3;
    }
    else
    {
        bill=220+(unit-250)*1.5;
        value=4;
    }
    switch(value)
    {
        case(1):
        {
            bill=bill + bill*0.2;
            printf("The amount to be paid for %d units is Rs %f",unit,bill);
            break;
        }
        case(2):
        {
            bill=bill + bill*0.2;
            printf("The amount to be paid for %d units is Rs %f",unit,bill);
            break;
        }
        case(3):
        {
            bill=bill + bill*0.2;
            printf("The amount to be paid for %d units is Rs %f",unit,bill);
            break;
        case(4):
        {
            bill=bill + bill*0.2;
            printf("The amount to be paid for %d units is Rs %f",unit,bill);
            break;
        }
        default:
        {
            printf("Enter appropriate units!!!");
            break;
        }
    }
    return 0;
    }
}