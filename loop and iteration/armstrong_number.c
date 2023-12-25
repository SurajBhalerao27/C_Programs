/*
Write a C program to input a number from user and check whether given number is Armstrong number or not. How to check Armstrong numbers in C program. Logic to check Armstrong numbers in C programming.

Example

Input

Input number: 371
Output

371 is armstrong number
*/

#include <stdio.h>
#include <math.h>
int main()
{

    int i, num, originalnum;
    int count, digit, lastdigit;
    int sum;

    printf("Enter a number: ");
    scanf("%d", &num);
    sum = 0;
    originalnum = num;

    digit = (int)log10(num) + 1;

    while (num > 0)
    {

        lastdigit = num % 10;
        sum = sum + round(pow(lastdigit, digit));
        num /= 10;
    }
    if (originalnum == sum)
    {
        printf("%d is ARMSTRONG NUMBER\n", originalnum);
    }
    else
    {
        printf("%d is NOT ARMSTRONG NUMBER\n", originalnum);
    }

    return 0;
}