/*
Write a C program to print hollow square star pattern with diagonal using loops. How to print hollow square star pattern with diagonals in C program. Logic to print hollow square star pattern with diagonal in C programming.

Example
Input
Enter number of rows: 5
Output

*****
** **
* * *
** **
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
            if (i == 1 || i == num || j == 1 || j == num || i == j || j == (num - i + 1)) // with [ i==j ] code prints only in diagonal pattern and for fil the remaining spots we have to use the [ j == (num - i + 1) ] 
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