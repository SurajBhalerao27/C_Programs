#include <stdio.h>

int main()
{
    int amount, note;

    printf("Enter amount\n");
    scanf("%d", &amount);

    note = amount / 2000;
    amount = amount - (note * 2000);
    printf("2000 = %d\n", note);
    
    note = amount / 500;
    amount = amount - (note * 500);
    printf("500 = %d\n", note);

    note = amount / 200;
    amount = amount - (note * 200);
    printf("200 = %d\n", note);

    note = amount / 100;
    amount = amount - (note * 100);
    printf("100 = %d\n", note);

    note = amount / 50;
    amount = amount - (note * 50);
    printf("50 = %d\n", note);

    note = amount / 20;
    amount = amount - (note * 20);
    printf("20 = %d\n", note);

    note = amount / 10;
    amount = amount - (note * 10);
    printf("10 = %d\n", note);

    note = amount / 5;
    amount = amount - (note * 5);
    printf("5 = %d\n", note);

    note = amount / 1;
    amount = amount - (note * 1);
    printf("1 = %d\n", note);

    return 0;
}