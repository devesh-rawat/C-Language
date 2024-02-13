#include <stdio.h>

int main()
{
    int a, b, c;
    printf("Enter first value");
    scanf("%d", &a);
    printf("Enter second value");
    scanf("%d", &b);
    printf("Enter Third value");
    scanf("%d", &c);
    if (a > b && a > c)
    {
        printf("%d is greatest",a);
    }
    else if (b > a && b > c)
    {
        printf("%d is greater ",b);
    }
    else
    {
        printf("C is greater");
    }

    return 0;
}