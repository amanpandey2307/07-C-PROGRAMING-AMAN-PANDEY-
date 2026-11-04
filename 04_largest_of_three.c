#include <stdio.h>
int main() {
    int a, b, c, largest;

    printf("enter three number: ");
    scanf("%d %d %d", &a, &b, &c);

    if(a>=b && a>=c)
    largest = a;

    else if(b>=c && b>=a)
    largest = b;

else
largest = c;

printf("largest = %d", largest);

return 0;
}