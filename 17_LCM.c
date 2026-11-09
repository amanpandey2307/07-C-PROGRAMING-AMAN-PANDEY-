#include <stdio.h>

int main()
{
    int a, b, x, y, temp, gcd, lcm;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    x = a;
    y = b;

    while(y != 0)
    {
        temp = y;
        y = x % y;
        x = temp;
    }

    gcd = x;

    if(a == 0 || b == 0)
    {
        lcm = 0;
    }
    else
    {
        lcm = (a / gcd) * b;
    }

    printf("LCM = %d", lcm);

    return 0;
}