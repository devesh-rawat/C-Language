#include <stdio.h>

int factorial(int a){
    int fact=1;
    for(int i=1;i<=a;i++){
        fact=fact*i;
        
    }
    // printf("%di",fact);
    return fact;
}

int main(){
    int n;
    printf("enter a Number");
    scanf("%d",&n);
    int f=factorial(n);
    printf("%d\t",f);
    


}