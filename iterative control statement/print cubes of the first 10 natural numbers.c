#include<stdio.h>
int main()
{
    int i,x;
    printf("Cubes of the first 10 natural numbers :- \n");
    for(i=1;i<=10;i++)
    {
        x=i*i*i;
        printf("%d\n",x);
    }
    return 0;
}