#include <stdio.h>

int main()
{
    int ch = 97;
    int suraj = 65;

    printf("Alphabets from a - z(Lower Case) are:\n");
    while (ch <= 122)
    {
        printf("%c\t", ch);
        ch++;
    }
    printf("\n");
    printf("Alphabets from A - Z(Upper Case) are:\n");
    while (suraj <= 90)
    {
        printf("%c\t", suraj);
        suraj++;
    }

    return 0;
}