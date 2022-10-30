#include<stdio.h>
int main()
{
    int i,N;
    printf("Enter the number till which even number should be printed in reverse order :- ");
    scanf("%d",&N);
    for(i=N;i>=2;i=i-2)
    {
        if(i%2==0)
        printf("%d\n",i);
        else
        printf("%d\n",i-1);
    }
    return 0;
}