#include<stdio.h>
int main()
{
    int i,x,y,z;
    printf("Enter a three digit number :- ");
    scanf("%d",&i);
    x=i%10;
    y=i/10;
    printf("The number after moving its digit towards right :- %d%d",x,y);
    return 0;
}