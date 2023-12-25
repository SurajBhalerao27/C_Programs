/* Write a program to find force exerted on a body by gravity */

#include <stdio.h>
float force(float mass);
int main()
{
    float m;
    printf("Enter the value of Mass in Kgs\n");
    scanf("%f", &m);

    printf("The value of force is = %.2f Newtons   ", force(m));
    return 0;
}
float force(float mass)
{
    float result = mass * 9.8;
    return result;
}