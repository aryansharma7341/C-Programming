#include<stdio.h>
int main()
{
    int i,N,x;
    printf("Enter the number whose table should be printed :- ");
    scanf("%d",&N);
    for(i=1;i<=10;i++)
    {
        printf("%d * %d = %d\n",N,i,N*i);
    }
    return 0;
}