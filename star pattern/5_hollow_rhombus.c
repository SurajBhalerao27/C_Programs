/*
Write a C program to print hollow rhombus star series pattern using for loop. How to print hollow rhombus or parallelogram star pattern in C programming. Logic to print empty rhombus or parallelogram star pattern series in C programming.

Example

Input

Input number of rows: 5
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
        for (j = 1; j <= num - i; j++)
        {
            printf(" ");
        }
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