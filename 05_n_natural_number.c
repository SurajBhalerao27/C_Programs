#include <stdio.h>
#include <conio.h>
int sum(int);
int main()
{
    int n, a;
    printf("Enter the number till you want to sum :  \n");
    scanf("%d", &n);
    for (a = 0; a <= n; a++)
    {
        printf(" %d\n", sum(a));
    }
    return 0;
}
int sum(int n)
{
    int result = (n) * (n + 1) / 2;
    if (n==0)
    return 0;

    else return result;
}