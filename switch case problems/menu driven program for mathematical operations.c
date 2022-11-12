#include<stdio.h>
#include<stdlib.h>
int main()
{
    int x,a,b;
    while(1)
    {
        printf("\n1. Addition\n2. Subtraction \n3. Multiplication \n4. Division \n5.Exit\n");
        printf("\nEnter the number to perform operations :- ");
        scanf("%d",&x);
        if(x==5)
        {
            exit(0);
        }
        printf("Enter the two numbers :- \n");
        scanf("%d%d",&a,&b);
        switch(x)
        {
        case 1:
            printf("%d + %d = %d",a,b,a+b);
            break;
        case 2:
            printf("%d - %d = %d",a,b,a-b);
            break;
        case 3:
            printf("%d * %d = %d",a,b,a*b);
            break;
        case 4:
            printf("%d / %d = %d",a,b,a/b);
            break;
        case 5:
            exit(0);
        default:
            printf("\nPlease enter a appropriate number for performing operations . \n");

        }
    }
    return 0;
}
