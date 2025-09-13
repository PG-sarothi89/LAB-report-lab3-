#include <stdio.h>
int main()
{
    int x, result;

    printf("Enter an number :");
    scanf("%d", &x);

    result = (x % 2 == 0) ? printf("%d is even", x) : printf("%d is odd", x);
    return 0;
}