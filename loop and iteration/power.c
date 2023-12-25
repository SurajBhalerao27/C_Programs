/*
Write a C program to find power of a number using for loop. How to find power of a number without using built in library functions in C program. Logic to find power of any number without using pow() function in C programming.

Example

Input

Input base: 2
Input exponent: 5
Output

2 ^ 5 = 32
*/
#include <stdio.h>

int main()
{

    int base, exponent;
    int i = 1;
    long long power = 1;

    printf("Enter the base: ");
    scanf("%d", &base);
    printf("Enter the exponent: ");
    scanf("%d", &exponent);

    for (i = 1; i <= exponent; i++)
    {
        power = base * power;
    }
    printf("*%lld* is power of %d and %d\t", power, base, exponent);

    return 0;
}