#include<stdio.h>
int main()
{
    int x,y,z,a;
    printf("Enter the three digit number : ");
    scanf("%d",&x);
    y=x/100;
    z=x%10;
    a=(x-100*y-z)/10;
    x=y+z+a;
    printf("The sum of the digits of the number is : %d",x);
    return 0;
}
