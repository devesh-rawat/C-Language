#include <stdio.h>

int sum(int n){
    int s=0;
    if(n==1){return 1;}
    s=n+sum(n-1);
    return s ;
}


int main(){
    int n;
    printf("Enter a Number");
    scanf("%d",&n);
    printf("%d",sum(n));
    return 0;
    
}