#include<stdio.h>
void print(int );
int main()
{
    int x;
    printf("Enter the number till which odd number should be printed :- ");
    scanf("%d",&x);
    print(x);
    return 0;
}
void print(int o)
{
    int i;
    printf("The odd numbers number till %d is :- \n",o);
    for(i=1;i<=o;i+=2)
    {
        printf("%d\n",i);
    }
}