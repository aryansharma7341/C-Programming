#include<stdio.h>
int combination(int , int);
int main()
{
    int a,b,c;
    printf("Enter the number of items and selected items :- \n");
    scanf("%d%d",&a,&b);
    c=combination( a , b);
    printf("The combination of %d items from %d is %d",b,a,c);
    return 0;
}
int combination(int n,int r)
{
    int i,x=1,y=1,z,a=1,b;
    for(i=1;i<=n;i++)
    {
        x=x*i;
    }
    for(i=1;i<=r;i++)
    {
        y=y*i;
    }
    z=n-r;
    for(i=1;i<=z;i++)
    {
        a=a*i;
    }
    b=x/(y*a);
    return b;
}