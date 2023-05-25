#include<stdio.h>
int main()
{
    int i,j=0,n;
    printf("Enter the number till which cubes of numbers should be added :- ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        j=j+(i*i*i);
    }
    printf("The sum of the cubes of numbers till %d is %d",n,j);
    return 0;
}