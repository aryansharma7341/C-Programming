#include<stdio.h>
int permutation(int , int);
int main()
{
    int a,b,c;
    printf("Enter the no of items and selected items :- \n");
    scanf("%d%d",&a,&b);
    c=permutation(a,b);
    printf("The Number of arrangements is %d",c);
    return 0;
}
int permutation(int n, int r)
{
    int i,x=1,y,z=1,a;
    for(i=1;i<=n;i++)
    {
        x=x*i;
    }
    y=n-r;
    for(i=1;i<=y;i++)
    {
        z=z*i;
    }
    a=x/z;
    return a;
}