#include <stdio.h>

int main(){
    int arr[7]={1,2,7,4,5,6,7};
    for(int i=0;i<7;i++){
        for(int j=i+1;j<7;j++){
            if(arr[i]==arr[j]){
                printf("The duplicate element is %d\n",arr[j]);
            }
        }
    }
}