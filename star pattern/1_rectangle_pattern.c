/*
Write a C program to print square star(*) pattern series of N rows. C program to print rectangle star(*) pattern in C of N rows and M columns. Logic to print square or rectangle star pattern of N rows in C programming.

Example

Input

Input number of rows: 5
Output

*****
*****
*****
*****
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
        for (j = 1; j <= num; j++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
