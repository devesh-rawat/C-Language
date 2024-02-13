#include <stdio.h>

int main(){
    int arr[]={6,1,7,3,2,5,4,8,9,9,10};
    for(int i=0;i<10;i++){
        for(int j=i+1;j<11;j++){
                if(arr[i]==arr[j]){
                    printf("Duplicate element is %d",arr[i]);
                    break;

                }
                
        }
    }
    return 0;
}