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
    }
    if(x>=97)
    {
        if(x<=122)
        {
            printf("The alphabet is in lowercase");
        }
    }
    return 0;
}