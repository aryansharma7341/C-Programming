#include<stdio.h>
#include<stdlib.h>
int main()
{
    int a,b,c,x;
    while(1)
    {
    printf("Choose the option for performing the task \n\n");
    printf("1. Check whether the set of three numbers are lengths of an isosceles triangle or not.\n2. Check whether the set of three numbers are lengths of sides of a right angled triangle or not.\n3. Check whether the given set of three numbers are equilateral triangle or not.\n4. Exit.");
    printf("\n\nEnter the option to perform the task :- ");
    scanf("%d",&x);
    switch(x)
    {
        case 1:
        {
            printf("Enter the numbers :-\n");
            scanf("%d%d%d",&a,&b,&c);
            if(a==b)
               {
                printf("The triangle is Isosceles Triangle.\n");
               }
            else if(b==c)
            {
                printf("The triangle is Isosceles Triangle.\n");
            }
            else if(a==c)
            {
                printf("The triangle is Isosceles Triangle.\n");
            }
            else
                printf("The triangle is not an Isosceles Triangle.\n");
            break ;
        }
         case 2:
        {
            printf("Enter the length of perpendicular :- ");
            scanf("%d",&a);
            printf("Enter the length of base :- ");
            scanf("%d",&b);
            printf("Enter the length of hypotenuse :- ");
            scanf("%d",&c);
            if(a*a+b*b==c*c)
            {
             printf("The Triangle is a Right-angled Triangle.\n");
            }
            else
            printf("The Triangle is not a Right-angled Triangle.\n");
            break ;
        }
         case 3:
        {
            printf("Enter the numbers :- \n");
            scanf("%d%d%d",&a,&b,&c);
            if(a==b)
            {
                if(b==c)
                {
                printf("The Triangle is an Equilateral Triangle.\n");
                }
                else
                    printf("The Triangle is not an Equilateral Triangle.\n");
            }
            else
                printf("The Triangle is not an Equilateral Triangle.\n");
            break ;
        }
         case 4:
        {
            exit (0);
        }
         default :
            printf("Please enter the correct case.\n\n");
    }
    printf("\n");
    }
    return 0;
}
