#include<stdio.h>
int main()
{
    int i,j;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=10;j++)
        {
            if(6>=j+i)
            {
            printf("*");
            }
            else if(j>=5+i)
            {
                printf("*");
            }
            else
                printf(" ");
        }
        printf("\n");
    }
    return 0;
}
