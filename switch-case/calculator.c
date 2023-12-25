/*
Write a C program to create menu driven calculator that performs basic arithmetic operations (add, subtract, multiply and divide) using switch case and functions. The calculator should input two numbers and an operator from user. It should perform operation according to the operator entered and must take input in given format.

<number 1> <operator> <number 2>

Example
Input
5.2 - 3
Output

2.2
*/
#include <stdio.h>
int main()
{

    char ch;
    float result, num1, num2;

    printf("*** WEl-COME to simple calculator ***\n");
    printf("-------------------------------------\n");
    printf("Enter num1:");
    scanf("%f", &num1);
    printf("Enter operation you want to perform('+','-','*','/'):");
    scanf("%c", &ch);
    printf("Enter num2:");
    scanf("%f", &num2);

    switch (ch)
    {

    case '+':
        result = num1 + num2;
        printf("%f", result);
        break;

    case '-':
        result = num1 - num2;
        printf("%f", result);
        break;

    case '*':
        result = num1 * num2;
        printf("%f", result);
        break;

    case '/':
        result = num1 / num2;
        printf("%f", result);
        break;

    default:
        printf("You Entered wrong Input\n");
    }
    printf("%.2f %c %.2f = %.2f", num1, ch, num2, result);

    return 0;
}