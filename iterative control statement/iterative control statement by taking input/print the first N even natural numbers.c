#include<stdio.h>
int main()
{
    int i,N;
    printf("Enter the number till which even natural number should be printed :- ");
    scanf("%d",&N);
    for(i=2;i<=N;i=i+2)
    {
        printf("%d\n",i);
    }
    return 0;
}