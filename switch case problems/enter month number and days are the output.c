#include<stdio.h>
#include<stdlib.h>
int main()
{
    int x;
    printf("1. Janvary \n2. February \n3. March \n4. April \n5. May \n6. June \n7. July \n8. August \n9. September \n10. October \n11. November \n12. December\n 0.Exit\n");
    while(1)
    {
    printf("Enter the number to see the number of days in a particular month :-  ");
    scanf("%d",&x);
    switch(x)
    {
        case 1:
        printf("31 days\n");
        break;
        case 2:
        printf("28 days\n");
        break;
        case 3:
        printf("31 days\n");
        break;
        case 4:
        printf("30 days\n");
        break;
        case 5:
        printf("31 days\n");
        break;
        case 6:
        printf("30 days\n");
        break;
        case 7:
        printf("31 days\n");
        break;
        case 8:
        printf("31 days\n");
        break;
        case 9:
        printf("30 days\n");
        break;
        case 10:
        printf("31 days\n");
        break;
        case 11:
        printf("30 days\n");
        break;
        case 12:
        printf("31 days\n");
        break;
        case 0:
        exit(0);
        default:
            printf("\n\nPlease Enter a appropriate number between 1 to 12.\n\n");
    }
    printf("\n");
    }
    return 0;
}
