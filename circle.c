#include<stdio.h>
int main()
{
    float area,circum,r;

    printf("Enter the value of Radius :  ");
    scanf("%f",&r);

    area=3.14*r*r;
    circum=2*3.14*r;

    printf("The area of circle is : %.2f",area);
    printf("\nThe Circumferrence of circle is : %.2f     ",circum);


    return 0;
}