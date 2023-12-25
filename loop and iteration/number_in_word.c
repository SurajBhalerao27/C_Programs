/*
Write a C program to input a number from user and print it into words using for loop. How to display number in words using loop in C programming. Logic to print number in words in C programming.

Example

Input

Input number: 1234
Output

One Two Three Four
*/

#include <stdio.h>

int main()
{
    int n, num = 10;

    printf("Enter any number you want to print in word: ");
    scanf("%d", &n);
    while (n != 0)
    {
        num = (num * 10) + (n % 10);
        n /= 10;
    }
    while (num != 0)
    {
        switch (num % 10)
        {
        case 0:
            printf("zero");
            break;
        case 1:
            printf("one");
            break;
        case 2:
            printf("two");
            break;
        case 3:
            printf("Three");
            break;
        case 4:
            printf("Four ");
            break;
        case 5:
            printf("Five ");
            break;
        case 6:
            printf("Six ");
            break;
        case 7:
            printf("Seven ");
            break;
        case 8:
            printf("Eight ");
            break;
        case 9:
            printf("Nine ");
            break;
        }
        num = num / 10;
        printf("\t");
    }
    return 0;
}

