/*
Write a C program to input a character from user and check whether the given character is alphabet or not using if else. How to check whether a character is alphabet or not in C programming. Logic to check if a character is alphabet or not in C program.
use ASCII values to check it   -----> ASCII value of a=97, z=122, A=65 and Z=90.

*/
#include <stdio.h>
int main()
{
    char ch;
    printf("Enter the character: ");
    scanf("%c", &ch);

    if ((ch >= 65 && ch <= 90) || (ch >= 97 && ch <= 122))
    {
        printf(" character is a ALPHABET\n   ");
    }
    else
    {
        printf("character is not a ALPHABET\n   ");
    }
    return 0;
}