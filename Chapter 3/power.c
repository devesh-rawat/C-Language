#include <stdio.h>

int main(){
    int a,b;
    printf("Enter Base,Power:");
    scanf("%d %d",&a,&b);
    int pow=1;
    for (int i=1;i<=b;i++){
        pow=pow*a;

    }
    printf("%d raised to the power %d is %d",a,b,pow);
    return 0;
}