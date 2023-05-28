#include<stdio.h>
int main()
{
    int i,x;
    printf("Enter the number : ");
    scanf("%d",&i);
    x=i%10;
    i=i-x;
    printf("%d",i);
    return 0;
}