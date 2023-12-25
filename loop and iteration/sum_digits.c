/*
Write a C program to input a number and calculate sum of digits using for loop. How to find sum of digits of a number in C program. Logic to find sum of digits of a given number in C programming.

Example

Input

Input any number: 1234
Output

Sum of digits: 10
*/

#include <stdio.h>

int main()
{

    long long int num;
    int sum;

    printf("Enter the number\n");
    scanf("%lld", &num);

    while (num > 0)
    {
        sum = sum + num % 10;
        printf("%d\n", sum);
        num = num / 10;
        // printf("%lld\t",num);
    }
    printf("The sum of digit is %d\n", sum);
    return 0;
}