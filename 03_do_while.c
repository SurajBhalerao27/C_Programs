/* Q. write a program to print first n natural numbers using do- while loop 
    input: 4   and output : 4 */

#include <stdio.h>
int main()
{
    int i = 0;
    // printf("enter your number\n: ");
    // scanf("%d", &i);
    // if(i>=10)
    do
    {
        printf("The natural number is %d\n", i);
        i++;
    } while(i<=20);
    return 0;
}