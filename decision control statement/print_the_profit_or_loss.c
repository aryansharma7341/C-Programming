#include<stdio.h>
int main()
{
    float cp,sp,pro,los;
    printf("Enter the cost price :- ");
    scanf("%f",&cp);
    printf("Enter the selling price :- ");
    scanf("%f",&sp);
    pro=( (sp-cp) / cp );
    los=( (cp-sp) / cp );
    if(cp>sp)
    {
        printf("There is a loss of %0.2f%%",los*100);
    }
    else
    {
        printf("There is a profit of %0.2f%%",pro*100);
    }
}