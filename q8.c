#include <stdio.h>
int main()
{
    int a, b, c;
    printf("Enter the age of Arif,Fahmid and Joy:");
    scanf("%d %d %d", &a, &b, &c);
    if (a < b && a < c)
    {
        printf("Arif is the youngest");
    }
    else if (b < a && b < c)
    {
        printf(" Fahmid is the youngest");
    }
    else
    {
        printf("Joy is the youngest");
    }

    return 0;
}