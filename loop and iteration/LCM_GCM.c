#include <stdio.h>
int main()
{

    int i, min, max, num1, num2, lcm = 1, gcd = 1;

    printf("Enter the first number: ");
    scanf("%d", &num1);
    printf("Enter the second number: ");
    scanf("%d", &num2);

    min = (num1 < num2) ? num1 : num2;
    max = (num1 > num2) ? num1 : num2;

    i = max;
    for (i = 1; i <= min; i++)
    {
        if (num1 % i == 0 && num2 % i == 0)
        {
            gcd = i;
        }
    }
    printf("gcd of %d and %d = %d\n", num1, num2, gcd);

    while (1)
    {
        if (i % num1 == 0 && i % num2 == 0)
        {
            lcm = i;
            break;
        }
        i += max;
    }

    printf("LCM of %d and %d = %d", num1, num2, lcm);

    return 0;
}


///// work on this this is not acurate yet ////