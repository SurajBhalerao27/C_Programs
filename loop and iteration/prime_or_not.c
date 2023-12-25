/*
Write a program in C to input a number and check whether the number is prime number or not using for loop. How to check prime numbers using loop in C programming. Logic to check prime numbers in C programming.

Example

Input

Input any number: 17
Output

17 is prime number
*/
#include <stdio.h>

int main()
{

    int i, prime, num;
    prime = 1;
    printf("Enter number: ");
    scanf("%d", &num);

    for (i = 2; i <= num / 2; i++)
    {
        if (num % i == 0)
        {
            prime = 0;
            break;
        }
    }
    if (prime == 1 && num > 1)
    {
        printf("%d is prime number\n", num);
    }
    else
    {
        printf("%d is composite number\n", num);
    }

    return 0;
}