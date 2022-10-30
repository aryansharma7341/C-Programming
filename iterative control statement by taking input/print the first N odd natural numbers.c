#include<stdio.h>
int main()
{
    int i,N;
    printf("Enter the number till which odd natural number should be printed :- ");
    scanf("%d",&N);
    for(i=1;i<=N;i++)
    {
        printf("%d\n",i);
        i++;
    }
    return 0;
}