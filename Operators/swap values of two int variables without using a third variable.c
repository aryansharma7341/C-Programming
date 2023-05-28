#include<stdio.h>
int main()
{
    int x,y;
    printf("Enter the numbers :\n");
    scanf("%d%d",&x,&y);
    x=x+y;
    y=x-y;
    x=x-y;
    printf("The number after swapping :%d %d",x,y);
    return 0;
}
