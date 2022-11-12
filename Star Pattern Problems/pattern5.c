#include<stdio.h>
int main()
{
    int i,j;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=9;j++)
        {
            if(5-i>=j)
            {
                printf(" ");
            }
            else if(j>4+i)
            {
                printf(" ");
            }
            else
            printf("*");
        }
        printf("\n");
    }
    return 0;
}