#include <stdio.h>

int main(){
    int n;
    printf("Enter a number :");
    scanf("%d",&n);
    int sum=0;
    for (int i=0;i<=n;i++){
        if (n%2==0){
            sum=-(n/2);

        }
        else{
            sum=n-n/2;
        }

    }
    printf("The sum of the digits is %d",sum);
    return 0;
}