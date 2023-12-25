/*
Write a C program to input character from user and check whether character is uppercase or lowercase alphabet using if else. How to check uppercase and lowercase using if else in C programming. Logic to check uppercase and lowercase alphabets in C program.
*/

#include <stdio.h>
int main()
{

    char ch;
    printf("Enter a Character:  ");
    scanf("%c", &ch);

    if (ch <= 'z' && ch >= 'a')
    {
        printf("Entered Character Is Lower Case\n    ");
    }
    else if(ch <= 'Z' && ch >= 'A')
    {
        printf("Entered Character Is Upper Case\n    ");
    }
    else {
        printf("Entered Character Is A Either Special Character Or A Number\n   ");
    }

    return 0;
}