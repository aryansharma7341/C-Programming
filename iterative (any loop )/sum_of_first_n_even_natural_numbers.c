#include<stdio.h>
int main()
{
    int i,j=0,n;
    printf("Enter the number till which even numbers should be added :- ");
    scanf("%d",&n);
    for(i=0;i<=n;i=2+i)
    {
        j=j+i;
    }
    printf("The sum of the even numbers till %d is %d",n,j);
    return 0;
}