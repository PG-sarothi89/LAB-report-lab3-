#include <stdio.h>
int main()
{
    int x;
    printf("Enter a year:");
    scanf("%d", &x);
    if ((x % 4 == 0) || (x % 400 == 0 && x % 100 != 0))
    {
        printf("This year is a Leap year");
    }
    else
    {
        printf("This year is not a Leap year");
    }
    return 0;
}