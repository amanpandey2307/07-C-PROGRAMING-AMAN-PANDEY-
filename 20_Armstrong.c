#include <stdio.h>

int main()
{
    int num, original, rem;
    int sum = 0, count = 0;
    int temp, power, i;

    printf("Enter a number: ");
    scanf("%d", &num);

    if(num < 0)
    {
        printf("Negative number is not Armstrong");
        return 0;
    }

    original = num;
    temp = num;

    do
    {
        count++;
        temp = temp / 10;
    }
    while(temp != 0);

    temp = num;

    do
    {
        rem = temp % 10;
        power = 1;

        for(i = 1; i <= count; i++)
        {
            power = power * rem;
        }

        sum = sum + power;
        temp = temp / 10;

    }
    while(temp != 0);

    if(sum == original)
    {
        printf("Armstrong Number");
    }
    else
    {
        printf("Not an Armstrong Number");
    }

    return 0;
}