/*
Write a C program to input number from user and check number is palindrome or not using loop. How to check whether a number is palindrome or not using loop in C programming. Logic to check palindrome number in C programming.

Example

Input

Input any number: 121
Output

121 is palindrome
*/
#include <stdio.h>
int main()
{

    int num, n, reverse = 0;

    printf("Enter the number:");
    scanf("%d", &n);
    num = n;

    while (n != 0)
    {
        reverse = (reverse * 10) + (n % 10);
        n /= 10;
    }
    if (reverse == num)
    {
        printf("%d is palindrome\n",num);
    }
    else
    {
        printf("%d is not palindrome\n",num);
    }
    return 0;
}