/*
Write a C program to input a number and check whether the number is Perfect number or not. How to check perfect number in C programming using loop. Logic to check perfect number in C programming.

Example

Input

Input any number: 6
Output

6 is PERFECT NUMBER
***************************************************************************************************************
What is Perfect number?
Perfect number is a positive integer which is equal to the sum of its proper positive divisors.
For example: 6 is the first perfect number
Proper divisors of 6 are 1, 2, 3
Sum of its proper divisors = 1 + 2 + 3 = 6.
Hence 6 is a perfect number.

*/
#include <stdio.h>
int main()
{

    int i, num, sum = 0;
    printf("Enter a number: ");
    scanf("%d", &num);
    for (i = 1; i <= num / 2; i++)
    {
        if (num % 1 == 0)
        {
            sum = sum + i;
        }
    }
    if (sum == num && num > 0)
    {
        printf("%d is PERFECT NUMBER\n", num);
    }
    else
    {
        printf("%d is NOT PERFECT NUMBER\n", num);
    }

    return 0;
}