#include<stdio.h>
int main()
{
    int a,r;
    printf("Enter the radius of the circle :- ");
    scanf("%d",&r);
    a=3.14*r*r;
    printf("Area of circle is %d having the radius %d",a,r);
    return 0;
}