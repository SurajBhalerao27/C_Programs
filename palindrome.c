#include<stdio.h>
int main()
{
    int x,y,sum=0;
    printf("Enter The Number: ");
    scanf("%d", &x);
    //temp=x;
    do
     {
      y=x%10;
      sum=(sum*10)+y;
      x=x/10;
     }while(x>0);
     
    if(x==sum)
    printf("Entered number is palindrome\n");

    else
    printf("Entered number is not a palindrome number\n");
    return 0;
}