/************************************************************************************************************************

Write a C program to check leap year using if else. How to check whether a given year is leap year or not in C programming. C Program to input year from user and check whether the given year is leap year or not using ladder if else. Logic to check leap year in C programming.

*************************************************************************************************************************/

#include <stdio.h>
#include <math.h>
int main()
{

    int year;
    printf("Enter YEAR you want to check :  ");
    scanf("%d", &year);

    if(((year % 4 == 0) && (year % 100 !=0)) || (year % 400==0))
    {
        printf("The year you entered is a 'LEAP YEAR'\n     ");
    }
    else
    {
        printf("The year is not a 'LEAP YEAR'\n     ");
    }
    return 0;
}