#include <stdio.h>

int main(){
    int arr[]={6,1,7,3,2,5,4,8,9,9,10};
    int sum=0;
    for(int i=0;i<11;i++){
        sum+=arr[i];
    }
    int sum2=sum-55;
    printf("%d is duplicate",sum2);

    return 0; 
}