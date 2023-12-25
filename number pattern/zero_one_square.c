#include <stdio.h>

int main()
{

    int i, j, row, col;
    printf("Enter the rows:");
    scanf("%d", &row);
    printf("Enter the colums:");
    scanf("%d", &col);

    for (i = 1; i <= row; i++)
    {
        for (j = 1; j <= col; j++)
        {
            if (j * 2 - 1)
            {
                printf("1");
            }
            else
            {
                printf("0");
            }
        }
        printf("\n");
    }

    return 0;
}