/*
Write a C program to print the given box number pattern of 1's and 0's with plus in center of the box using loop. How to print box number pattern with plus in center using for loop in C programming. Logic to print box number pattern with plus in center of the box in C program.

Example

Input

Input rows: 5
Input columns: 5
Output

11011
11011
00000
11011
11011


*/
#include <stdio.h>

int main()
{

    int i, j, row, col;
    int centralrow, centralcol;
    printf("Enter the rows:");
    scanf("%d", &row);
    printf("Enter the colums:");
    scanf("%d", &col);

    centralrow = (row + 1) / 2;
    centralcol = (col + 1) / 2;

    for (i = 1; i <= row; i++)
    {
        for (j = 1; j <= col; j++)
        {
            if (centralrow == i || centralcol == j)
            {
                printf("0");
            }
            else if ((centralrow+1== i && row % 2 == 0) || (centralcol+1 == j && col % 2 == 0))
            {
                printf("0");
            }
            else
            {
                printf("1");
            }
        }
        printf("\n");
    }

    return 0;
}