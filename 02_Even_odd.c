// Cprogramm to check the numeber is even or odd...
#include <stdio.h>
int main()
{
    int a;
    printf("Enter a Number\n: ");
    scanf("%d", & a);
    if (a % 2 == 0)
        printf("%d is an Even Number\n",a);
    else
        printf("%d is an odd number\n",a);
    return 0;
}