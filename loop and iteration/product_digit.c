#include <stdio.h>

int main()
{

    int num, m;
    long long product = 1;

    printf("Enter the number\n");
    scanf("%d", &num);

    product = (num == 0 ? 0 : product);
    while (num != 0)
    {
        m = num % 10;
        product = product * m;
        printf("%lld\n", product);
        num = num / 10;
        // printf("%lld\t",num);
    }
    printf("The product of digit = %lld\n", product);
    return 0;
}