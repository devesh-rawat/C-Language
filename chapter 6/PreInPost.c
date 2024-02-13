#include <stdio.h>

void PIP(int n){
    if(n==0)return;
    printf("%d",n);
    PIP(n-1);
    printf("%d",n);
    PIP(n-1);
    printf("%d",n);
    return;}
int main(){
    int n;
    printf("Enter a Number:");
    scanf("%d",&n);
    PIP(n);
    return 0;
}