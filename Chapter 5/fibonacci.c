#include <stdio.h>

int fibb(int n){
    int fibnm2=0;
    int fibnm1=1;
    int fibN;
    printf("The series is :\n %d %d ",fibnm2,fibnm1);
    for(int i=1;i<=n-2;i++){
        fibN=fibnm2+fibnm1;
        fibnm2=fibnm1;
        fibnm1=fibN;
        printf("%d ",fibN);
    }
}
int main(){
    int n;
    printf("Enter a Number:");
    scanf("%d",&n);
    fibb(n);

}