#include<stdio.h>
int simple_interest(int , int, int);
int main()
{
 int x,a,b,c;
 printf("Enter the principle , rate , time :- \n");
 scanf("%d%d%d",&a,&b,&c);
 x=simple_interest(a,b,c);
 printf("simple interest is %d.",x);
 return 0;
}
int simple_interest(int p, int r, int t)
{
 int s;
 s=(p*r*t)/100;
 return s;
}