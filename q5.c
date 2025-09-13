#include <stdio.h>
int main()
{
    char a;
    printf("Enter a Character :");
    scanf("%c", &a);
    if (a >= 'a' && a <= 'z' || a >= 'A' && a <= 'Z')
    {
        printf("%c is an Alphabet", a);
    }
    else
    {
        printf("%c is not an Alphabet", a);
    }
    return 0;
}