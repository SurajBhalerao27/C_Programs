#include <stdio.h>

int main()
{
    float s, d, time, remainder;
    int hour, minute, second;

    printf("Enter The Distance(km): ");
    scanf("%f", &d);
    printf("Enter The Speed(kph): ");
    scanf("%f", &s);

    time = d / s;
    second = time * 3600;
    hour = second / 3600;
    remainder = (second % 3600);
    minute = remainder / 60;

    printf("Your Required Time For Travell Is: %d Hours And %d Minutes\n", hour, minute);

    return 0;
}
