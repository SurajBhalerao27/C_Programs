#include<stdio.h>
int main()
{
    int a;
    int *v;
    v=&a; 
    printf("The address of the variable is %u\n",v);
    printf("The value of the variable is %d\n",*v);
    return 0;
}