
#include <stdio.h>

int main()
{
    int n, first, last, sn, reverse=0, remainder;
    printf("Enter any number: ");
    scanf("%d", &n);
    first = n;
    last = n % 10;

    while (first >= 10 && n != 0)
    {
        remainder = n % 10;
        reverse = (reverse * 10) + remainder;
        n = n / 10;
        first = first / 10;
    }

    // printf("First digit = %d and last digit = %d (before swap)\n", first, last);

    // // printf("original number is %d\n", first);

    // printf("First digit = %d and last digit = %d (after swap)\n", last, first);

    while (n != 0)
    {
        remainder = n % 10;
        reverse = (reverse * 10) + remainder;
        n = n / 10;
    }

    printf("swapped number is:%d\n", reverse);

    return 0;
}
