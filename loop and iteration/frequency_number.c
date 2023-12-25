/*
Write a C program to count frequency of digits in a given number. How to find frequency of digits in a given number using loop in C programming. Logic to find total occurrences of each digits in a given number in C program.

Example

Input

Input any number: 116540
Output

Frequency of 0 = 1 
Frequency of 1 = 2 
Frequency of 2 = 0 
Frequency of 3 = 0 
Frequency of 4 = 1 
Frequency of 5 = 1 
Frequency of 6 = 1 
Frequency of 7 = 0 
Frequency of 8 = 0 
Frequency of 9 = 0
*/


#include <stdio.h>
#define BASE 10 /* Constant */

int main()
{
    long long num, n;
    int i, lastDigit;
    int freq[BASE];

    /* Input number from user */
    printf("Enter any number: ");
    scanf("%lld", &num);

    /* Initialize frequency array with 0 */
    for(i=0; i<BASE; i++)
    {
        freq[i] = 0;
    }

    /* Copy the value of 'num' to 'n' */
    n = num; 

    /* Run till 'n' is not equal to zero */
    while(n != 0)
    {
        /* Get last digit */
        lastDigit = n % 10;

        /* Remove last digit */
        n /= 10;

        /* Increment frequency array */
        freq[lastDigit]++;
    }

    /* Print frequency of each digit */
    printf("Frequency of each digit in %lld is: \n", num);
    for(i=0; i<BASE; i++)
    {
        printf("Frequency of %d = %d\n", i, freq[i]);
    }

    return 0;
}