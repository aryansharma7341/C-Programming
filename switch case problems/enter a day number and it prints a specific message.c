#include<stdio.h>
#include<stdlib.h>
int main()
{
    int x;
    while(1)
    {
        printf("\n1.Sunday \n2.Monday \n3.Tuesday \n4.Wednesday \n5.Thersday \n6.Friday \n7.Saturday \n8.Exit \n");
        printf("\nEnter a number :- ");
        scanf("%d",&x);
        switch(x)
        {
            case 1:
            printf("\nDay = Sunday\n");
            printf("Have a great Sunday\n");
            break;
            case 2:
            printf("\nDay = Monday\n");
            printf("Have a great Monday\n");
            break;
            case 3:
            printf("\nDay = Tuesday\n");
            printf("Have a great Tuesday\n");
            break;
            case 4:
            printf("\nDay = Wednesday\n");
            printf("Have a great Wednesday\n");
            break;
            case 5:
            printf("\nDay = thursday\n");
            printf("Have a great Thursday\n");
            break;
            case 6:
            printf("\nDay = Friday\n");
            printf("Have a great Friday\n");
            break;
            case 7:
            printf("\nDay = Saturday\n");
            printf("Have a great Saturday\n");
            break;
            case 8:
            exit(0);
            default:
                printf("\nEnter the appropriate number!!!\n");
        }
        printf("\n");
    }
    return 0;
}
