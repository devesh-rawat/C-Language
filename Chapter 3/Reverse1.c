#include <stdio.h>

int main(){
    int n;
    printf("Enter a Number:");
    scanf("%d",&n);
    int ld;
    while (n!=0){
        ld=n%10;
        printf("%d",ld);
        n=n/10;
        
    }
    return 0;
}