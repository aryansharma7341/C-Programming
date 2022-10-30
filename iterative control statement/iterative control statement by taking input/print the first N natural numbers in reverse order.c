#include<stdio.h>
int main()
{
    int i,n;
    printf("Enter the number from which natural number should be printed in reverse :- ");
    scanf("%d",&n);
    for(i=n;i>=1;i--)
    {
        printf("%d\n",i);
    }
    return 0;
}