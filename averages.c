#include <stdio.h>
float average(int x, int y, int z);
int main()
{
    int a, b, c;
    printf("The value of a is \n ");
    scanf("%d", &a);

    printf("The value of b is \n ");    
    scanf("%d", &b);

    printf("The value of c is \n ");
    scanf("%d", &c);

    printf("The average is %.2f", average(a,b,c));

    return 0;
}
float average(int x, int y, int z)
{
    float a; 
    a = (float)(x + y + z) / 3;      // here the use of float is to typecast the int values to float values...
    return a;
}
