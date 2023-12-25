/* write a c program to execute n natural numbers in decrementing form */

#include <stdio.h>
int main()
{
    for (int i=10; i; i--)
    {
        printf("Your Number is %d\n", i);
    }
    return 0;
}