#include<stdio.h>
int main()
{
    char x;
    printf("Enter the alphabet :- ");
    scanf("%c",&x);
    if(x>=65)
    {
        if(x<=90)
        {
            printf("The alphabet is in uppercase");
        }    
        else if(x<=96)
        {
            printf("The alphabet is a special characer");
        }
        else if(x<=122)
        {
            printf("The alphabet is in lowercase");
        }
        else if(x>=123)
        {
            printf("The alphabet is a special characer");
        }
        else
        {
            printf("The alphabet is a special character");
        }
    }
    else
    {
        printf("The alphabet is a special character");
    }
    return 0;
}