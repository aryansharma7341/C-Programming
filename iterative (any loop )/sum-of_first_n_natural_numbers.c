#include<stdio.h>
int main()
{
    int n,i,j=0;
    printf("Enter the number till which the sum is to be find out :- ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        j=j+i;
    }
    printf("The sum of the numbers till %d is %d",n,j);
    return 0;
}