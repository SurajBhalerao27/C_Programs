/* C program to find maximum between two numbers  */

#include <stdio.h>
int main()
{
	float num1, num2;
	printf("Enter first number : ");
	scanf("%f", &num1);
	printf("Enter second number : ");
	scanf("%f", &num2);

	if (num1 > num2)
	{
		printf("***The first number is greater than second number***\n");
	}
	else if (num2 > num1)
	{
		printf("***The second number is greater than first number***\n");
	}
	else if (num1 = num2)
	{
		printf("***both are equal numbers***\n");
	}
	return 0;
}