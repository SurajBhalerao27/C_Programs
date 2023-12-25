/*
Write a C program to input a number from user and count number of digits in the given integer using loop. How to find total digits in a given integer using loop in C programming. Logic to count digits in a given integer without using loop in C program.

Example

Input

Input num: 35419
Output

Number of digits: 5
*/

#include <stdio.h>
int main()
{

    long long num;
    int count = 0;
    printf("Enter The number you want to count\n");
    scanf("%lld", &num);

    do
    {
        count++;
        num = num / 10;
    } while (num != 0);

    printf("Total count is %d\n",count);

    return 0;
}