#include<stdio.h>
int main()
{
    int i,N;
    printf("Enter the from which odd number should be printed in reverse way :- ");
    scanf("%d",&N);
    for(i=N;i>=1;i--)
    {
        if(N%2==0)
        printf("%d\n",i-1);
        else
        printf("%d\n",i);
        i--;
    }
    return 0;
}