/*
write a C program to input a number from user and print multiplication table of the given number using for loop. How to print multiplication table of a given number in C programming. Logic to print multiplication table of any given number in C program.

Example

Input

Input num: 5
Output

5 * 1  = 5
5 * 2  = 10
5 * 3  = 15
5 * 4  = 20
5 * 5  = 25
5 * 6  = 30
5 * 7  = 35
5 * 8  = 40
5 * 9  = 45
5 * 10 = 50
*/

#include <stdio.h>
int main()
{

    int num = 37, i;

    for (i = 1; i <= 10; i++)
    {
        printf("%d * %d = %d\n", num, i,(num*i));
    }

    return 0;
}