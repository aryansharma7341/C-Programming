#include<stdio.h>
int main()
{
    int i,n;
    printf("Enter the number : ");
    scanf("%d",&n);
    if(n<0)
    {
        n=-n;
    }
    for(i=0;n!=0;i++)
    {
        n=n/10;
    }
    printf("There are %d digits",i);
    return 0;
}