/*
Write a C program to print mirrored right triangle star pattern series using for loop. How to print right triangle star pattern series with trailing spaces of n rows using for loop in C program. Logic to print mirrored right triangle star pattern series in C programming.

Example

Input

Input rows: 5
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
        for (j = i; j < num; j++)
        {
            printf(" ");
        }
        for (j = 1; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}