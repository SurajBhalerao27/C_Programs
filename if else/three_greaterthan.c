#include <stdio.h>
int main()
{
    float num1, num2, num3;
    printf("Enter first number : ");
    scanf("%f", &num1);
    printf("Enter second number : ");
    scanf("%f", &num2);
    printf("Enter third number : ");
    scanf("%f", &num3);

    if (num1 > num2 && num1 > num3)
    {
        printf("***The first number is greater than second and third number***\n");
    }
    else if (num2 > num1 && num2 > num3)
    {
        printf("***The second number is greater than first and third number***\n");
    }
    else if (num3 > num1 && num3 > num2)
    {
        printf("***The third number is greater than first and second number***\n");
    }
    else
    {
        printf("***All Inputs Are Equal***");
    }
    return 0;
}