#include<stdio.h>
int main()
{
int f=1,n;

printf("\n enter the number");

scanf("%d",&n);

while(n!=1)
{
f=f*n;
n--;
}
printf("\n factorial is %d",f);
return 0;

}