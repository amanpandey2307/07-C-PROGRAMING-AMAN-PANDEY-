#include <stdio.h>

int main()
{
    int n, i;
    long long fact = 1;

    printf("Enter a number: ");
    scanf("%d", &n);

    if(n < 0 || n > 20)
    {
        printf("Enter a number between 0 and 20");
    }
    else
    {
        for(i = 1; i <= n; i++)
        {
            fact = fact * i;
        }

        printf("Factorial = %lld", fact);
    }

    return 0;
}