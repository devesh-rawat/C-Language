#include <stdio.h>

int fibb(int n){
    if(n==1)return 0;
    if(n==2)return 1;
    int fibnm1=fibb(n-1);
    int fibnm2=fibb(n-2);
    int fibn=fibnm1+fibnm2;
    return fibn;

}

int main(){
    int n;
    printf("Enter a Number:");
    scanf("%d",&n);
    printf("%d",fibb(n));
    return 0;  
    }