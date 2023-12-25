/*
Write a C program to input amount from user and print minimum number of notes (Rs. 500, 100, 50, 20, 10, 5, 2, 1) required for the amount. How to the minimum number of notes required for the given amount in C programming. Program to find minimum number of notes required for the given denomination. Logic to find minimum number of denomination for a given amount in C program.
*/

#include <stdio.h>
int main()
{

    int amount;
    int note500 = 0, note100 = 0, note50 = 0, note20 = 0, note10 = 0, note5 = 0, note2 = 0, note1 = 0;

    printf("Enter The Amount That You Want To Calculate Denomintion:  ");
    scanf("%d", &amount);
    if (amount >= 500)
    {
        note500 = amount / 500;
        amount = amount - (note500 * 500);
    }
    if (amount >= 100)
    {
        note100 = amount / 100;
        amount = amount - (note100 * 100);
    }
    if (amount >= 50)
    {
        note50 = amount / 50;
        amount = amount - (note50 * 50);
    }
    if (amount >= 20)
    {
        note20 = amount / 20;
        amount = amount - (note20 * 20);
    }
    if (amount >= 10)
    {
        note10 = amount / 10;
        amount = amount - (note10 * 10);
    }
    if (amount >= 5)
    {
        note5 = amount / 5;
        amount = amount - (note5 * 5);
    }
    if (amount >= 2)
    {
        note2 = amount / 2;
        amount = amount - (note2 * 2);
    }
    if (amount >= 1)
    {
        note1 = amount;
    }
    printf("Total number of notes = \n");
    printf("500 = %d\n", note500);
    printf("100 = %d\n", note100);
    printf("50 = %d\n", note50);
    printf("20 = %d\n", note20);
    printf("10 = %d\n", note10);
    printf("5 = %d\n", note5);
    printf("2 = %d\n", note2);
    printf("1 = %d\n", note1);

    return 0;
}