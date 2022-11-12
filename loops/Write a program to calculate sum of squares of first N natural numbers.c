#include<stdio.h>
int main()
{
    int i,n,x=0;
    printf("Enter the number till which square's of natural numbers should be printed :- ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        x=x+i*i;
    }
    printf("The sum of the squares of natural number till %d is %d.",n,x);
    return 0;
}