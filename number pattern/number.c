/*
Write a C program to print the given number pattern using for loop. How to print the given number pattern using for loop in C programming. Logic to print the given number pattern using loop in C program.

Example

Input

Input rows: 5
Input columns: 5
Output

11111
22222
33333
44444
55555
*/

#include <stdio.h>
int main()
{

    int i, j, row, col;

    printf("Enter Rows: ");
    scanf("%d", &row);
    printf("Enter Columns: ");
    scanf("%d", &col);

    for (i = 1; i <= row; i++)
    {
        for (j = 1; j <= col; j++)
        {
            printf("%d", i);
        }
        printf("\n");
    }

    return 0;
}