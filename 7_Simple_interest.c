#include <stdio.h>
int main()
{
    int principle, rate , years;
    int simpleinterest;
    printf("\nEnter the value of principle : ");
    scanf("\n%d",&principle);

    printf("\nEnter the value of rate : ");
    scanf("\n%d",&rate);

    printf("\nEnter the years : ");
    scanf("\n%d",&years);

    printf("\nThe Total Simple interest is RS %d", (principle*rate*years/100)+principle);

    return 0;
}