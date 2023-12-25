#include <stdio.h>
int main()
{
      int a[10], i, sum = 0;
      {
            printf("\n enter array element:");

            for (i = 0; i < 10; i++)
            {
                  scanf("%d", &a[i]);
            }
      }
      {
            printf("\n sum of array elemen\n:");
            for (i = 0; i < 10; i++)
            {
                  sum = sum + a[i];
            }
            printf("%d", sum);

            return 0;
      }
}