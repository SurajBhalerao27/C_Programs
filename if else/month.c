/*
Write a C program to enter month number between(1-12) and print number of days in month using if else. How to print number of days in a given month using if else in C programming. Logic to find number of days in a month in C program.
*/

#include <stdio.h>

int main()
{

    const int MONTHS[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int month;

    printf("Enter Month Number From(1-12) : ");
    scanf("%d", &month);

    if (month <= 12 && month >= 1)
    {
        printf("The month Has %d Days\n", MONTHS[month - 1]);
    }
    else
    {
        printf("You Have Entered Invalid Input!...... Please Enter Valid Number From (1-12)\n");
    }
    return 0;
}