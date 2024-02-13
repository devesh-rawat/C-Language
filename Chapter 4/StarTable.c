#include <stdio.h>

int main(){
    int m;
    
    printf("Enter a Number:");
    scanf("%d",&m);
    int n=m-1;
    int nsp=1;
    int nst=n;
    for(int p=1;p<=m+n;p++){
        printf("* ");
    }
    printf("\n");
    for(int i=1;i<=n;i++){
        for(int j=1;j<=nst;j++){
            printf("* ");
        }
        for (int k=1;k<=nsp;k++){
            printf("  ");
        }
        for(int l=1;l<=nst;l++){
            printf("* ");
        }
        nsp+=2;
        nst--;
        printf("\n");
    }
}