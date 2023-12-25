/*
Write a C program to print rhombus star pattern of N rows using for loop. How to print rhombus or parallelogram star pattern using for loop in C programming. Logic to print rhombus or parallelogram star pattern series in C program.

Example

Input

Enter number of rows: 5

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
        for (j = 1; j <= num - i; j++)
        {
            printf(" ");
        }
        for (j = 1; j <= num; j++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}