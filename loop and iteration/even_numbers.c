/*
C program to display all even numbers from 1 to n without if
*/

#include <stdio.h>

int main()
{
    int i, n;

    printf("\n");
    printf("Print all even numbers till:\n");
    scanf("%d", &n);

    printf("All even numbers from 1 to %d are:\n", n);

  
    for(i=2; i<=n;(i++ && i++))
    {
        printf("%d\n",i);
    }

    return 0;
}