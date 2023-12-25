/*
Write a C program to check whether a triangle is valid or not if angles are given using if else. How to check whether a triangle can be formed or not, if its angles are given using if else in C programming. Logic to check triangle validity if angles are given in C program.
*/

#include <stdio.h>
int main()
{

    int a, b, c;

    printf("Enter First Angle Of Triangle : ");
    scanf("%d", &a);
    printf("Enter Secoond Angle Of Triangle : ");
    scanf("%d", &b);
    printf("Enter Third Angle Of Triangle : ");
    scanf("%d", &c);

    if ((a + b + c == 180) && (a > 0 && b > 0 && c > 0))
    {
        printf("The Trinagle Is Valid Triangle\n ");
    }
    else
    {
        printf("This Is Not Triangle\n ");
    }
    return 0;
}