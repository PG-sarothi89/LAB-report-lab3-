// Find out the largest between three numbers using the conditional operator.

#include <stdio.h>

int main()
{
    int a, b, c, largest;

    printf("Enter three numbers :");
    scanf("%d %d %d", &a, &b, &c);

    largest = (a > b) ? ((a > c) ? a : c) : ((b > c) ? b : c);

    printf("%d is the largest", largest);

    return 0;
}