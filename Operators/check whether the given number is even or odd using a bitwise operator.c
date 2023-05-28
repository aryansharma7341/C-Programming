#include<stdio.h>
int main()
{
    int x,y,z;
    printf("Enter a number:");
    scanf("%d",&x);
    if((x&1)==0)
    {
        printf("%d is even",x);
    }
    else
        {
         printf("%d is odd",x);
        }
    return 0;
}
