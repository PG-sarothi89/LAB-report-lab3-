#include <stdio.h>
int main()
{

    int a;
    printf("Enter a number :");
    scanf("%d", &a);

    if (a % 2 == 0)
    {
        printf("%d is an even Number", a);
    }
    else
    {
        printf("%d is an odd Number", a);
    }
    return 0;
}