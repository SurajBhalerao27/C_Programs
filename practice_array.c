#include<stdio.h>
int main()
{
    int arr[10];
    int *ptr= &arr[0];
    ptr=ptr+2;
    if(ptr==&arr[2])
        printf(" These points to the same location\n");
    else(" These do not points to the location\n");
    return 0;
}