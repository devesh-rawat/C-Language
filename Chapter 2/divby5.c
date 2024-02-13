#include <stdio.h>
int main(){
    int n;
    printf("Enter value for N");
    scanf("%d",&n);
    if (n%5==0){
        printf("%d is divisible by 5",n);

    }
    else{
        printf("%d is Not divisible by 5",n);
    }
    return 0;}
