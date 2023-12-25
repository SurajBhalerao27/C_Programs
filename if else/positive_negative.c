/*  Write a C program to check positive, negative or zero using simple if or if else. C program to input any number from user and check whether the given number is positive, negative or zero. Logic to check negative, positive or zero in C programming.  */

#include <stdio.h>
int main()
{
    float num ;
    printf("Enter your number : ");
    scanf("%f", &num);

    if (num>0)
    {
        printf("***The number you input is positive***\n");
    }
    else if (num<0)
    {
        printf("***The number you input is negative***\n   ");
    }
    
    else
    {
        printf("***The number you input is neither positive nor negative***");
    }
    return 0;
}