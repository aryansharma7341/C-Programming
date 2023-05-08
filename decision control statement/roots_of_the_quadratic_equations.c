#include<stdio.h>
int main()
{
    int a,b,c,d;
    printf("Form of quadratic equation :- ax^2 + bx +c ");
    printf("\n\nEnter the value of a :- ");
    scanf("%d",&a);
    printf("Enter the value of b :- ");
    scanf("%d",&b);
    printf("Enter the value of c :- ");
    scanf("%d",&c);
    d=(b*b+4*a*c);
    if(d>0)
    {
    printf("\nThe roots are real and distinct");
    }
    else if(d==0)
    {
    printf("\nThe roots are equal and real");
    }
    else
    {
        printf("\nThe roots are imaginary");
    }
    return 0;
}