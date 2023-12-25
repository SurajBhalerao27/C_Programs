/*
Write a C program to print the given chessboard number pattern of 1's and 0's using loop. How to print chessboard number pattern of n rows and n columns using for loop in C programming. Logic to print chessboard number pattern of n rows and n columns using for loop in C program.

Example

Input

Input rows: 5
Input columns: 5
Output

10101
01010
10101
01010
10101
*/
#include <stdio.h>

int main()
{

    int i, j, row, col, k;
    printf("Enter the rows:");
    scanf("%d", &row);
    printf("Enter the colums:");
    scanf("%d", &col);
    k=1;

    for (i = 1; i <= row; i++)
    {
        for (j = 1; j <= col; j++)
        {
            if (k == 1)
            {
                printf("1");
            }
            else
            {
                printf("0");
            }
            k *= -1;
        }

        if (col % 2 == 0)
        {
            k *= -1;
        }
        printf("\n");
    }

    return 0;
}