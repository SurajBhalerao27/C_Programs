// write a c program using do-while loop //

#include <stdio.h>
int main()
{
    int i=0, n = 10, sum;
    
    do
    {
        printf("The total sum of number is %d\n", sum);
        scanf("%d", sum);
        i++;
    } while (i <= n);

    return 0;
}