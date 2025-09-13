// Find out if the input is an alphabet using a conditional operator.

#include <stdio.h>
int main()
{
    char x, result;
    printf("Enter a character :");
    scanf("%c", &x);
    result = ((x >= 'a' && x <= 'z') || (x >= 'A' && x <= 'Z')) ? printf("%c is an alphabet", x) : printf("%c is not an alphabet", x);
    return 0;
}