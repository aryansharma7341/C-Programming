#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c,d,root1,root2;
    printf("Form of quadratic equation :- ax^2 + bx^1 + c");
    printf("\nEnter the coefficient of a :- ");
    scanf("%d",&a);
    printf("Enter the coefficient of b :- ");
    scanf("%d",&b);
    printf("Enter the value of c :- ");
    scanf("%d",&c);
    printf("\nEnter 1 to find out roots of the equation\n");
    scanf("%d",&d);
    switch(d)
    {
        case(1):
        {
            root1=(-b+(sqrt(b*b-4*a*c)))/2*a;
            root2=(-b-(sqrt(b*b-4*a*c)))/2*a;
            printf("Roots of the quadratic equation = %d,%d",root1,root2);
            printf("\n");
            break;
        }
    }
    return 0;
}