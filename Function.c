#include <stdio.h>
void goodmorning();
void goodafternoon();
void goodnight();

int main()
{
    int a;
    printf("Enter the value of a\n");
    scanf("%d", &a);

    goodmorning();
    goodafternoon();
    goodnight();

    return 0;
}

void goodmorning()
{
    printf(" Good Morning Suraj\n");
}

void goodafternoon()
{
    printf(" Good Afternoon Suraj\n");
}

void goodnight()
{
    printf(" Good night Suraj\n");
}