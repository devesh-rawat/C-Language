#include <stdio.h>

int main(){
    int arr[9]={1,2,3,4,6,7,8,9, 10};
  
    int sum=0;
    for(int i=0;i<9;i++){
        sum=sum+arr[i];
    }
    printf("%d\n",sum);
    int sum2=55-sum;
    printf("%d is the missing element",sum2);
}