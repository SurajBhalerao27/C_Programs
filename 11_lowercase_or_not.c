// wrie a program to check whether a charaacter is lowercase or not
#include <stdio.h>
int main()
{
    // ASCII codes vary as 97-122 = a-z
    char ch;
    printf("Please enter a character\n: ");
    scanf("%c", &ch);

    if (ch <= 122 && ch >= 97)
    {
        printf("The entered character is lowercase", ch);
    }
    else
    {
        printf("The entered character is not lowercase", ch);
    }

    return 0;
}