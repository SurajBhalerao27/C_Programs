/*
Write a C program to input an alphabet and check whether it is vowel or consonant using switch case. C program to check vowel or consonant using switch case. Logic to check vowel or consonant using switch case.

Example
Input
Input alphabet: c
Output

'c' is consonant
*/

#include <stdio.h>

int main()
{

    char ch;
    printf("Enter You Character Here: ");
    scanf("%c", &ch);

    switch (ch)
    {
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
    case 'A':
    case 'E':
    case 'I':
    case 'O':
    case 'U':
        printf("Enterd Character Is Vowel\n");
        break;

    default:
        printf("Enterd Character Is Consonant\n");
        break;
    }

    return 0;
}