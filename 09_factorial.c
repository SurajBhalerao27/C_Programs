 // write a program to calculate n numbers of factorial using for loop first and then by using while loop //

#include <stdio.h>
int main()
{
    int i, n, factorial;
    i=factorial=1;
    printf("Enter the number you want to find factorial of  : ");
    scanf("%d", &n);

    // for (i = 1; i <= n; i++)
    // {
    // factorial = factorial * i;
    // }
    // printf("The factorial of %d is %d", n, factorial);
    while (i <= n)
    {
        factorial=factorial*i;
        
        i++;
    }
    printf("the factorial of %d is %d ", n, factorial);
    return 0;
}
