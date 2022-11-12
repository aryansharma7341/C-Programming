#include<stdio.h>
int main()
{
    int i,n,x=0;
    printf("Enetr the number till which sum of numbers should be printed :- ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        x=x+i;
    }
    printf("The sum of the n numbers is :- %d",x);
    return 0;
}