#include <stdio.h>
int main()
{
    int a = 5, b = 500, c = 1;
    if (b > a)
    {
        b = a;
    }
    else
    {
        a = b;
    }
    for (b = 0; b <= 5; b++)
    {
        a = a + 1;
    }
    printf("a+c=%d\n", a + c);

    return 0;
}