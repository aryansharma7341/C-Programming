#include<stdio.h>
int main()
{
    int a;
    printf("Enter the number :- ");
    scanf("%d",&a);
    if(a%2==0)
    {
        printf("The number %d is an even number",a);
    }
    else
    {
        printf("The number %d is an odd number",a);
    }
    return 0;
}