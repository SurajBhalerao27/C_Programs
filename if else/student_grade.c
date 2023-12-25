/*
Write a C program to input marks of five subjects Physics, Chemistry, Biology, Mathematics and Computer, calculate percentage and grade according to given conditions:
If percentage >= 90% : Grade A
If percentage >= 80% : Grade B
If percentage >= 70% : Grade C
If percentage >= 60% : Grade D
If percentage >= 40% : Grade E
If percentage < 40% : Grade F

Example
Input
Input marks of five subjects: 95
95
97
98
90
Output

Percentage = 95.00
Grade A
*/

#include <stdio.h>
int main()
{
    float pert;
    int bio, chem, eng, math, phy, comp;

    printf("Enter Your bio chem math phy and comp Marks: ");
    scanf("%d%d%d%d%d", &bio, &chem, &math, &phy, &comp);

    pert = (bio + chem + eng + math + phy + comp) / 5;

    if (pert >= 90)
    {
        printf("You Get %.2f percentage with Grade A\n", pert);
    }
    else if (pert >= 80)
    {
        printf("You Get %.2f percentage with Grade B\n", pert);
    }
    else if (pert >= 70)
    {
        printf("You Get %.2f percentage with Grade C\n", pert);
    }
    else if (pert >= 60)
    {
        printf("You Get%.2f percentage with Grade D\n", pert);
    }
    else if (pert >= 40)
    {
        printf("You Get %.2f percentage with Grade E\n", pert);
    }
    else
    {
        printf("You Get %.2f percentage with Grade F\n", pert);
    }
    return 0;
}