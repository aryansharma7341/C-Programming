#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter the numbers :- \n");
    scanf("%d%d",&a,&b);
    printf("Values before swapping is a=%d,b=%d",a,b);
    int c=a;
    a=b;
    b=c;
    printf("\nValues after swapping is a=%d,b=%d",a,b);
    return 0;
}
