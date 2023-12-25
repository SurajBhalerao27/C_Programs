#include <stdio.h>
int main()
{
    float pi = 3.14, radius;
    printf("\nEnter the value of radius : "); // please enter values in "meters"only
    scanf("\n%f", &radius);
    printf("\nThe area of this circle is sq.meter %.2f", pi * radius * radius);

    float height;
    printf("\nEnter the value of height : "); // please enter values in "meters"only
    scanf("\n%f",&height);
    printf("\nThe Volume of a cylinder is cub.meter %.2f", pi * radius * radius * height);

    return 0;
}