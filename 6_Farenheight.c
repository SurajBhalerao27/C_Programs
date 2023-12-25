#include<stdio.h>
int main()
{
    float celcius, far;
    printf("\nEnter the value in Celcius : ");
    scanf("\n%f", &celcius);
    printf("\ncelcius to ferenheight is %.2f",far=(celcius*9/5) + 32);
    return 0;
}