#include<stdio.h>
int check(int);
int main()
{
    int i,a;
    printf("Enter the number :- ");
    scanf("%d",&a);
    i=check(a);
    printf("The returned value is %d .",i);
    return 0;
}
int check(int x)
{
    if(x%2==0)
    {
        return 1;
    }
    else
    return 0;
}