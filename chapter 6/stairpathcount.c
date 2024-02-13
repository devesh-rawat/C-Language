#include <stdio.h>

int stair(int n){
    if(n==1 || n==2)return n;
    int totalways=stair(n-2)+stair(n-1);
    return totalways;
}

int main(){
    int n;
    printf("Enter No. of stairs:");
    scanf("%d",&n);
    printf("%d",stair(n));
}