#include <stdio.h>

int stair(int n){
    if(n==1 || n==2 ){
        return n;
    }
    if(n==3)return 4;
    int tways=stair(n-1)+stair(n-2)+stair(n-3);
    return tways;
}

int main(){
    int n;
    printf("Enter No. of Stairs:");
    scanf("%d",&n);
    printf("%d",stair(n));
    return 0;
}