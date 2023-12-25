/*
Write a C program to print right triangle star pattern series using for loop. How to print right triangle star pattern series of n rows in C programming. Logic to print right triangle star pattern in C.

Example

Input

Input number of rows: 5
Output

*
**
***
****
*****
*/

#include <stdio.h>

int main()
{

    int i, j, num;
    printf("Enter number of line you want to print: ");
    scanf("%d", &num);

    for (i = 1; i <= num; i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}