#include<stdio.h>
int main()
{
   int lenght,breadth;
   int area=lenght*breadth;

   printf("\nEnter the value of lenght : ");// get the value of lenght
   scanf("%d",&lenght);

   printf("\nEnter the value of breadth : "); // get the value of breadth
   scanf("%d",&breadth);

   printf("\nArea of rectangle is %d",lenght*breadth); // total area of rectangle

    return 0;
}