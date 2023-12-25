#include <stdio.h>
int main()
{

    int i, n;
    long long factorial=1;
    printf("Enter the number:");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
       factorial= factorial*i;
    }
    printf("The Factorial of %d is %lld\t",n,factorial);

    return 0;
}