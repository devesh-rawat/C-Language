#include <stdio.h>

int main(){
    int arr[10]={1,2,3,4,5,6,7,8,9,10};
    int sumO=0;
    int sumE=0;
    for(int i=0;i<=9;i++){
        if(i%2==0){sumE+=arr[i];}
        else{sumO+=arr[i];}
    }
    int diff=sumE-sumO;
    printf("The diff. is %d",diff);
    return 0;
}