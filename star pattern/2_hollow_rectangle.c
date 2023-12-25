/*
Write a C program to print hollow square or rectangle star(*) pattern series using for loop. How to print hollow square or rectangle star pattern of N rows using for loop in C programming. Logic to print empty square or rectangle star pattern in C program.

Example

Input

Enter number of rows: 5
Output

*****
*   *
*   *
*   *
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
            if (i == 1 || i == num || j == 1 || j == num)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}
