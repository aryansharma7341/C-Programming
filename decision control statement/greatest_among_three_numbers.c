#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter the three numbers :- \n");
    scanf("%d%d%d",&a,&b,&c);
    if(a==b && b==c)
    {
        printf("All the three numbers are equal");
    }
    else if(a>b)
    {
        if(a>c)
        {
            printf("%d is the greater number between %d , %d , %d",a,a,b,c);
        }
    }
    else if(b>c)
    {
        printf("%d is the greater number between %d , %d , %d",b,a,b,c);
    }
    else
    {
        printf("%d is the greater number between %d , %d , %d",c,a,b,c);
    }
    return 0;
}