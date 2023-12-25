/*
Write a C program to input any number from user and find cube of the given number using function. How to find cube of a given number using function in C programming. Write a C function to find cube of a given number.

Example

Input

Input any number: 5
Output

Cube of 5 = 125
*/


#include <stdio.h>
double cube(double num);
int main()
{
    int num;
    double c;
    printf("Enter the number\n");
    scanf("%d", &num);
    c = cube(num);
    printf("The cube of %d is %.2f\n", num, c);
    return 0;
}
double cube(double num)
{
    return (num * num * num);
}