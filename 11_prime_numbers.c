// write a program to check whethere a number is prime of not and find n prime numbers by loop //

#include <stdio.h>
#include <math.h>
int main()
{
    int i, n;
    int prime = 1;

    printf("Enter a number: ");
    scanf("%d", &n);

    for (i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            prime = 0;
            break;
        }
    }
    if (prime == 0)
    {
        printf("This is not a prime number\n");
    }
    else
    {
        printf("This is a prime number\n");
    }
    return 0;
}
