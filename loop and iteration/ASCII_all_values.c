
/*

Write a C program to print ASCII values of all characters using for loop. How to display ASCII character codes with their values in C programming using loop. C program to print ASCII character with their character code.

Example

Input

Output

ASCII value of character   = 0
ASCII value of character ☺ = 1
...
...
ASCII value of character ■ = 254
ASCII value of character   = 255

*/

#include <stdio.h>

int main()
{
    int i,a;
    printf("Enter the value of character you want to print\n");
    scanf("%d", &a);
    for (i = 0; i < 255; i++)
    {
        if (i == a)
        {
            printf("The %d has %c character\n", a, i);
        }
    }
    return 0;
}