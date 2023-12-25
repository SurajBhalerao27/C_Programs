/*
Write a C program to check whether an alphabet is vowel or consonant using if else. How to check vowels and consonants using if else in C programming. C Program to input a character from user and check whether it is vowel or consonant. Logic to check vowel or consonant in C programming.
*/

#include <stdio.h>

int main()
{
    char ch;
    printf("Enter any character: ");
    scanf("%c", &ch);
    
    if (ch == 97 || ch == 101 || ch == 105 || ch == 111 || ch == 117 ||
        ch == 65 || ch == 69 || ch == 73 || ch == 79 || ch == 85)
    {
        printf("'%c' is Vowel.", ch);
    }
    else if ((ch >= 97 && ch <= 122) || (ch >= 65 && ch <= 90))
    {
        printf("'%c' is Consonant.", ch);
    }
    else
    {
        printf("%c is not an alphabet.", ch);
    }

    return 0;
}