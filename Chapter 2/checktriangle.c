#include <stdio.h>

int main()
{
    int a, b, c;
    printf("Enter first,second and third side");
    scanf("%d %d %d", &a, &b, &c);
    if (((a + b) > c) && ((b + c) > a) && ((a + c) > b))
    {
        printf("The sides are the sides of a triangle");
    }
    else
    {
        printf("The sides are not the sides of a triangle");
    }
}