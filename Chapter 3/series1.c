#include <stdio.h>

int main(){
    int n;
    printf("Enter the Number:");
    scanf("%d",&n);
    int sum=0;
    for (int i=1;i<=n;i++){
        if (i%2==0){
            sum-=i;
        }
        else{
            sum+=i;
        }
    }
    printf("The sum of the series is %d",sum);    return 0;
}