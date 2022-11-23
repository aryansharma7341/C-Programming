#include<stdio.h>
void print(int );
int main()
{
    int x;
    printf("Enter the number till which natural numbers should be printed :- ");
    scanf("%d",&x);
    print(x);
    return 0;
}
void print(int N)
{
    int i;
    printf("The first natural numbers till %d is :- \n",N);
    for(i=1;i<=N;i++)
    {
        printf("%d\n",i);
    }
}