// write a c program to summ of first 10 natural numbers //
//  S = n/2[2a + (n − 1) × d] //

#include <stdio.h>
int main()
{
    int i, n = 10, sum = 0;

    for (i=0; i <= n; i++)
    {
        sum = sum + i;
    }
    printf("The total sum is %d", sum );

    return 0;
}
