// program to determine the assignment operators usability and equality operator

#include <stdio.h>
int main()
{
    int a = 10;
    if (a = 11) // here is "=" use as assignment operator thats why program print always I am 11
    {
        printf("I am 11\n");
    }
    else
    {
        printf("I am not 11\n");
    }

    return 0;
}