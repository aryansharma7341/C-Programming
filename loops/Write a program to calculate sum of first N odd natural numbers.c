#include<stdio.h>
int main()
{
    int i,n,x=0;
    printf("Enter the number till which sum of odd numbers should be printed :- ");
    scanf("%d",&n);
    for(i=1;i<=n;i=i+2)
    {
        x=x+i;
    }
    printf("The sum of the odd numbers till %d is %d.",n,x);
    return 0;
}