#include <stdio.h>

int main(){
    int n;
    printf("Enter value for n");
    scanf("%d",&n);
    if (n<0){
        printf("%d is the absolute value",-(n));
// if n is negative
    }
    else{
        printf("%d is the absolute value",n);
    }
    return 0;
}