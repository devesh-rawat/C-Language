#include <stdio.h>

int power(int a,int b){
    if(b==0)return 1;
    if(b==1)return a;
    int x=power(a,b/2);
    if(b%2==0){
        return x*x;
    }
    else{
        return x*x*a;
    }
}

int main(){
    int m,n;
    printf("Enter Base value,Power:");
    scanf("%d%d",&m,&n);
    printf("%d raised to power %d is %d",m,n,power(m,n));
    return 0;
}