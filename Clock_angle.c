// Calculate the angle between hour and minute angle = (30*H) - (11/2 * M )

#include <stdio.h>
int main()
{
    float angle, h, m;
    printf("Enter the hours\n");
    scanf("%f", &h);
    printf("Enter the minutes\n");
    scanf("%f", &m);

    angle = (30 * h) - ((11/2) * m);
    printf("The angle between Hours and Minutes is %.2f degree\n", angle);

    return 0;
}