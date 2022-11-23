#include<stdio.h>
int factorial(int );
int main()
{
 int x,y;
 printf("Enter the number for factorial :- ");
 scanf("%d",&x);
 y=factorial(x);
 printf("The factorial of %d is %d",x,y);
 return 0;
}
int factorial(int f)
{
    int i,x=1;
    for(i=1;i<=f;i++)
    {
        x=i*x;
    }
    return x;
}