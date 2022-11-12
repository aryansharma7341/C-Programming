#include<stdio.h>
int main()
{
    int i,n,x=0;
    printf("Enter the number till which sum of cubes of natural number should be printed :- ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        x=x+i*i*i;
    }
    printf("The sum of the cubes of natural number till %d is %d.",n,x);
    return 0;
}