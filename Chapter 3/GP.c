
#include <stdio.h>
#include <math.h>


int main(){
    int n;
    printf("Enter a Number :");
    scanf("%d",&n);
    for (int i=1;i<=1*pow(2,n-1);i*=2){
        printf("%d  ",i);
    }
    return 0;
}