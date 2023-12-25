#include <stdio.h>

int main()
{

    float s, d, TIME, m, sec;

    printf("Enter The Distance(km): ");
    scanf("%f", &d);
    printf("Enter The Speed(kph): ");
    scanf("%f", &s);

    TIME = d / s;
    
   //5 m = ((3600 * TIME) / 60);

    printf("Your Required Time For Travell Is: %d Hours %.2f Minutes\n", TIME);

    return 0;
}
