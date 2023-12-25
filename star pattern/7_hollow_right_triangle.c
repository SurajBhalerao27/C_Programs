/*
Write a C program to print hollow right triangle star pattern series using for loop. How to print hollow right triangle star pattern series of n rows using for loop in C programming. Logic to print hollow right triangle star pattern series in C programming.

Example

Input

Input rows: 5
Output

*
**
* *
*  *
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
        for (j = 1; j <= i; j++)
        {
        
            if(j==1 || j==i || i==num)
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