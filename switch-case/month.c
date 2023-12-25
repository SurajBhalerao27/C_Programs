/*

Write a C program to input month number and print total number of days in month using switch...case. C program to find total number of days in a month using switch...case. Logic to print number of days in a month using switch...case in C programming.

Example
Input
Input month number: 3
Output

Total number of days = 31

*/

#include <stdio.h>
int main()
{

    int w;
    // const w[]={31,28,31,30,31,30,31,31,30,31,30,31}
    printf("Enter The Month No(1-12): ");
    scanf("%d", &w);

    switch (w)
    {
    case 1:
        w = 1;
        printf("JANUARY With 31 Days\n");
        break;
    case 2:
        w = 2;
        printf("FEBRUARY With 28 Day in non leap year\n");
        break;
    case 3:
        w = 3;
        printf("MARCH With 31 Days\n");
        break;
    case 4:
        w = 4;
        printf("APRIL With 30 Days\n");
        break;
    case 5:
        w = 5;
        printf("MAY With 31 Days\n");
        break;
    case 6:
        w = 6;
        printf("JUN With 30 Days\n");
        break;
    case 7:
        w = 7;
        printf("JULY With 31 Days\n");
        break;
    case 8:
        w = 8;
        printf("AUGUST With 30 Days\n");
        break;
    case 9:
        w = 9;
        printf("SEPTEMBER With 31 Days\n");
        break;
    case 10:
        w = 10;
        printf("OCTOBER With 30 Days\n");
        break;
    case 11:
        w = 11;
        printf("NOVEMBER With 31 Days\n");
        break;
    case 12:
        w = 12;
        printf("DECEMBER With 30 Days\n");
        break;

    default:
        printf("You Entered Invalid Input!! Please selcet week no from(1-7)\n");
        break;
    }

    return 0;
}