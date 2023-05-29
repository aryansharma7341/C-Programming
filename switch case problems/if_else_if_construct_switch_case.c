#include<stdio.h>
int main()
{
    int var;
    printf("Press 1 to print \"good\" \nPress 2 to print \"better\" \nPress 3 to print \"best\"\n");
    printf("\nEnter the number : ");
    scanf("%d",&var);
    switch(var)
    {
        case(1):
        {
            printf("good");
            break;
        }
        case(2):
        {
            printf("better");
            break;
        }
        case(3):
        {
            printf("best");
            break;
        }
        default:
        {
            printf("invalid");
            break;
        }
    }
    return 0;
}