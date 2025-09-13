#include <stdio.h>
int main()
{
    int a, b, c;
    printf("Enter three angle :");
    scanf("%d %d %d", &a, &b, &c);

    if ((a + b + c) == 180)
    {
        printf("The Triangle is Valid");
    }
    else
    {
        printf("The Triangle is Invalid");
    }
    return 0;
}