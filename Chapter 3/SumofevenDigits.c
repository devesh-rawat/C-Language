#include <stdio.h>

int main(){
    int n;
    printf("Enter a Number");
    scanf("%d",&n);
    int sum=0;
    while (n!=0){
        if (n%2==0){
            sum=sum+n%10;
        }
        n=n/10;

    }
    printf("The Sum of digits is %d",sum);
    return 0;
}