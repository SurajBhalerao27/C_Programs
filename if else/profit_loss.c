/*

Write a C program to input cost price and selling price of a product and check profit or loss. Also calculate total profit or loss using if else. How to calculate profit or loss on any product using if else in C programming. Program to calculate profit and loss of any product in C.

Example
Input
Input cost price: 1000
Input selling price: 1500
Output

Profit: 500

*/

#include <stdio.h>
#include <math.h>

int main()
{

    int cp, sp, profit, loss;

    printf("Enter your Cost Price: ");
    scanf("%d", &cp);

    printf("Enter your Selling Price: ");
    scanf("%d", &sp);

    if (sp > cp)
    {
        profit = sp - cp;
        printf("You Made %d Rs Of Profit\n", profit);
    }
    else if (cp > sp)
    {
        loss = cp - sp;
        printf("You Made -%d Rs Of loss\n", loss);
    }
    else
    {
        printf("You Do Not Made Any Pofit Or Loss\n");
    }

    return 0;
}