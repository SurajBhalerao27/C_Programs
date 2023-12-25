#include <stdio.h>
int main()
{

    int w;
    printf("Enter The Week No(1-7): ");
    scanf("%d", &w);

    switch (w)
    {
    case 1:
        w = 1;
        printf("MONDAY\n");
        break;
    case 2:
        w = 2;
        printf("TUESDAY\n");
        break;
    case 3:
        w = 3;
        printf("WEDNESDAY\n");
        break;
    case 4:
        w = 4;
        printf("THURSDAY\n");
        break;
    case 5:
        w = 5;
        printf("FRIDAY\n");
        break;
    case 6:
        w = 6;
        printf("SATURDAY\n");
        break;
    case 7:
        w = 7;
        printf("SUNDAY\n");
        break;

    default:
        printf("You Entered Invalid Input!! Please selcet week no from(1-7)\n");
        break;
    }

    return 0;
}