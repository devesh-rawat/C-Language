#include <stdio.h>

int main(){
    int n;
    printf("Enter a Number:");
    scanf("%d",&n);
    int fibNm1=0;
    int fibNm2=1;
    int fibN;
    printf("The fibonacci series is %d  %d  ",fibNm1,fibNm2);
    for (int i=3;i<=n;i++){
        fibN=fibNm1+fibNm2;
        fibNm1=fibNm2;
        fibNm2=fibN;
        printf("%d  ",fibN);
    }
    return 0;
}