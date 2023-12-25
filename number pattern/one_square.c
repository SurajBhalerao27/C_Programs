#include <stdio.h>

int main()
{

    int i, j, row, col;
    printf("Enter the rows:");
    scanf("%d", &row);
    printf("Enter the colums:");
    scanf("%d", &col);

    printf("The pattern is --->\n");

    for (i = 1; i <= row; i++)
    {
        for (j = 1; j<= col; j++)
        {
            printf("1");
        }

        printf("\n");
    }

    return 0;
}