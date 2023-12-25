/*
Write a C program to input a number from user and find all factors of the given number using for loop. How to find factors of a number in C program. Logic to find all factors of a given number in C programming.

Example

Input

Input number: 12
Output

Factors of 12: 1, 2, 3, 4, 6, 12
*/

#include <stdio.h>
int main()
{

    int i, num;
    printf("Enter any number to find its factor: ");
    scanf("%d", &num);

    printf("All factors of %d are:\n", num);

    for (i = 1; i <= num; i++)
    {
        if (num % i == 0)
        {
            printf("%d\t", i);
        }
    }

    return 0;
}