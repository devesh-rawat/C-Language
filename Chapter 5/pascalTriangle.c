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

int combi(int n,int r){
    int nfact=factorial(n);
    int rfact=factorial(r);
    int nrfact=factorial(n-r);
    int out=nfact/(rfact*nrfact);
    return out;
}

int main(){
    int n,r;
    printf("Enter valur of n:");
    scanf("%d",&n);
    
    int nsp=n;
    for(int i=0;i<=n;i++){
        
        for(int j=1;j<=nsp;j++){
            printf(" ");

        }
        nsp--;
    

        for(int k=0;k<=i;k++){
            int pr=combi(i,k);
            printf("%d",pr);
            printf(" ");
        }
        printf("\n");

    }


}