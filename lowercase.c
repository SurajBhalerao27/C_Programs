/* Check The Entered Character is Lowercase or not

By using ASCII Values From 97 TO 122 decimalvalues for lowercase....

*/

#include <stdio.h>
int main()
{
    char ch;
    printf("Enter a Character :  ");
    scanf("%c", &ch);

    if (ch<=122 && ch>=97)
    { 
        printf("It is Lowercase \n");
    }
    else
    {
        printf("It is not Lowercase\n");
    };

    return 0;
}