#include<stdio.h>
int main()
{
    int i,n,j;
    printf("Enter the number : ");
    scanf("%d",&n);
    for(i=2;i<=n;i++)
    {
        if(j=(n/i))
        {
            if((j*i)==n)
            {
                if(i==n)
                    {
                        printf("The number %d is a prime number",n);
                    }
                else
                    {
                        printf("The number %d is not a prime number",n);
                        break;
                    }
            }
        }
    }
    return 0;
}