/*
Write a C program to input two or more numbers from user and find maximum and minimum of the given numbers using functions. How to find maximum and minimum of two or more numbers using functions in C programming.

Example

Input

Input two numbers: 10
20
Output

Maximum = 20
Minimum = 10
*/

#include <stdio.h>
int max(int num1, int num2);
int min(int num1, int num2);

int main()
{

    int minimum, maximum, num1, num2;
    printf("Enter first number\n");
    scanf("%d", &num1);
    printf("Enter second number\n");
    scanf("%d", &num2);

    maximum = max(num1, num2);
    minimum = min(num1, num2);

    printf("maximum = %d\n", maximum);
    printf("minimum = %d\n", minimum);

    return 0;
}
int max(int num1, int num2)
{
    return (num1 > num2) ? num1 : num2;
}

int min(int num1, int num2)
{
    return (num1 > num2) ? num2 : num1;
}

