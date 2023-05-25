#include<stdio.h>
int main()
{
    int i,j=1,n;
    printf("Enter the number of which factorial is to found :- ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        j=j*i;
    }
    printf("The factorial of %d is %d",n,j);
    return 0;
}