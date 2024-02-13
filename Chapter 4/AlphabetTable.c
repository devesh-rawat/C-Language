#include <stdio.h>

int main(){
    int m;
    printf("Enter a Number:");
    scanf("%d",&m);
    int n=m-1;
    int nst=n;
    int nsp=1;
    for(int p=65;p<=64+m+n;p++){
        printf("%c",p);
    }
    printf("\n");
    for(int i=1;i<=n;i++){
        int a=65;
        for(int j=1;j<=nst;j++){
            printf("%c",a);
            a++;}
        for(int k=1;k<=nsp;k++){
            printf(" ");
            a++;
        }
        for(int j=1;j<=nst;j++){
            printf("%c",a);
            a++;}
        nst--;
        nsp+=2;
        printf("\n");
        
        
    }
}