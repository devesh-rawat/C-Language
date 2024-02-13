#include <stdio.h>

int main(){
    int m;
    printf("Enter a Number:");
    scanf("%d",&m);
    int n=m-1;
    int nst=n;
    int nsp=1;
    for(int p=1;p<=m;p++){
        printf("%d",p);
    }
    for(int q=1;q<=n;q++){
        printf("%d",m-q);
    }
    printf("\n");
    for(int i=1;i<=n;i++){
        for(int j=1;j<=nst;j++){
            printf("%d",j);
        }
        for(int k=1;k<=nsp;k++){
            printf(" ");
        }
        for(int l=1;l<=nst;l++){
            printf("%d",nst-l+1);
        }
        nst--;
        nsp+=2;
        printf("\n");
    }
}