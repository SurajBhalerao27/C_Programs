#include <stdio.h>
int main()
{
    int marks[3];
    printf("Enter the value of marks fot stud 1\n");
    scanf("%d", &marks[0]);
    printf("Enter the value of marks fot stud 2\n");
    scanf("%d", &marks[1]);
    printf("Enter the value of marks fot stud 3\n");
    scanf("%d", &marks[2]);

    printf("you have entered %d %d and %d", marks[0], marks[1], marks[2]);

    return 0;
}