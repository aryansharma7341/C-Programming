#include<stdio.h>
int main()
{
    int i,N;
    printf("Enter the number till which squares to be printed :- ");
    scanf("%d",&N);
    printf("number - square\n");
    for(i=1;i<=N;i++)
    {
        printf("  %d   -    %d  \n",i,i*i);
    }
    return 0;
}