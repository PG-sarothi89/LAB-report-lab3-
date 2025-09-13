/* Write a C program to input marks of five subjects Physics, Chemistry, Biology, Mathematics and Computer, calculate percentage and grade according to given conditions:
            If percentage >= 90% : Grade A
            If percentage >= 80% : Grade B
            If percentage >= 70% : Grade C
            If percentage >= 60% : Grade D
            If percentage >= 40% : Grade E
            If percentage < 40% : Grade F

*/

#include <stdio.h>

int main()
{
    int phy, chem, bio, math, comp;
    float per;
    printf("Enter the marks of five subjects:");
    scanf("%d %d %d %d %d", &phy, &chem, &bio, &math, &comp);

    per = (phy + chem + bio + math + comp) / 5.0;

    if (per >= 90)
    {
        printf("Grade A");
    }
    else if (per >= 80)
    {
        printf("Grade B");
    }
    else if (per >= 70)
    {
        printf("Grade C");
    }
    else if (per >= 60)
    {
        printf("Grade D");
    }
    else if (per >= 40)
    {
        printf("Grade E");
    }
    else
    {
        printf("Grade F");
    }

    return 0;
}