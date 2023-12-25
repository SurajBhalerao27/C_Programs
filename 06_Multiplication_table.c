/* write a c program for multiplication table from 1 to 10 */
 
#include<stdio.h>
int main()
{ 
    printf("***** Multiplication table in decending order ******\n \n");
    
    for(int i=10;i;i--)
    {
        printf(" 10 X %d = %d\n",i, 10*i);
    }
    return 0;
}