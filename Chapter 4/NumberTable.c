#include <stdio.h>

int main()
{
    int m;
    printf("Enter a Number:");
    scanf("%d", &m);
    int n = m - 1;
    for (int p = 1; p <= m + n; p++)
    {
        printf("%d ", p);
    }
    printf("\n");

    int nst = n;
    int nsp = 1;
  

    for (int i = 1; i <= n; i++)
    {  int a = 1;

        for (int j = 1; j <= nst; j++)
        {
            printf("%d ", a);
            a++;
        }

        for (int k = 1; k <= nsp; k++)
        {
            printf("  ");
            a++;
        }
        for (int l = 1; l <= nst; l++)
        {
            printf("%d ", a);
            a++;
        }
        nsp += 2;
        nst--;
        
        printf("\n");
    }
    return 0;
}