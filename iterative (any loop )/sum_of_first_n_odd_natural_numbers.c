#include<stdio.h>
int main()
{
    int i,j=0,n;
    printf("Enter the number till which odd numbers should be added :- ");
    scanf("%d",&n);
    for(i=1;i<=n;i=i+2)
    {
        j=j+i;
    }
    printf("The sum of the numbers till %d is %d",n,j);
    return 0;
}