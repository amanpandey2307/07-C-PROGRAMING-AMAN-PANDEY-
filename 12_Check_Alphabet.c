#include <stdio.h>

int main()
{
    char ch;

    printf("Enter a character: ");
    scanf(" %c", &ch);

    if((ch >= 'A' && ch <= 'Z') ||
       (ch >= 'a' && ch <= 'z'))
    {
        printf("It is an Alphabet");
    }
    else
    {
        printf("It is not an Alphabet");
    }

    return 0;
}