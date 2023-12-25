#include <stdio.h>
int main(){
    int num;

    printf("Enter Your Number\n: ");
    scanf("%d", &num);

    if (num == 1){
        printf("Your Number is 1\n");
    }   
    else if (num == 2)
    {
        printf("Your Number is 2\n");
    }
    else if (num == 3)
    {
        printf("Your Number is 3\n");
    }
    else{
        printf("Its not 1,2 and 3!\n");
    }
    return 0;
}