/*
Write a C program to print the given circle number pattern with 1's and 0's. How to print circle number pattern of one's and zero's using for loop in C programming. Logic to print the box number pattern with 1 as border and 0 in center and corners.

Example

Input

Input rows: 5
Input cols: 5
Output

01110
10001
10001
10001
01110

*/

#include <stdio.h>

int main()
{

    int i, j, row, col, k;
    printf("Enter the rows:");
    scanf("%d", &row);
    printf("Enter the colums:");
    scanf("%d", &col);

    for (i = 1; i <= row; i++)
    {
        for (j = 1; j <= col; j++)
        {
            if ((i == 1 || i == row) && ( j == 1 || j == col))
            {
                printf("0");
            }
            else if (i == 1 || i == row ||  j == 1 || j == col)
            {
                printf("1");
            }

            else
            {
                printf("0");
            }
        }
        printf("\n");
    }

    return 0;
}