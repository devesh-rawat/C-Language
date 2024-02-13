#include <stdio.h>

int main(){
    int n;
    printf("Enter Value for N");
    scanf("%d",&n);
    for (int i=1;i<=2*n-1;i+=2){
        printf("%d\t\t",i);
    }
    return 0;

}