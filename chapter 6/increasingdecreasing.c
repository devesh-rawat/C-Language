#include <stdio.h>

void indec(int n){
    if (n==0)return;
    printf("%d\n",n);
    indec(n-1);
    printf("%d\n",n);
    return;
}

int main(){
    int n;
    printf("Enter a Number:");
    scanf("%d",&n);
    indec(n);
}