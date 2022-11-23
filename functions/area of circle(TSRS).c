#include<stdio.h>
int add(int );
int main()
{
    int s,c;
    printf("Enter the Radius :- ");
    scanf("%d",&c);
    s=add(c);
    printf("area is %d",s);
    return 0;
}
int add(int r)
{
    int a;
    a=3.14*r*r;
    return a;
}