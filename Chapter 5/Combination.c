#include <stdio.h>

int factorial(int n)
{
    int fact = 1;
    for (int i = 1; i <= n; i++)
    {
        fact *= i;
    }
    return fact;
}

int main()
{
    int n, r;
    printf("Enter value for n:");
    scanf("%d", &n);
    printf("Enter value for r:");
    scanf("%d", &r);
    int nfact = factorial(n);
    int rfact = factorial(r);
    int nrfact = factorial(n - r);

    int ncr = nfact / (rfact * nrfact);
    printf("%d", ncr);
    return 0;
}
