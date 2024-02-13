#include <stdio.h>

int main(){
    int arr[]={6,1,7,3,2,5,4,8,9,9,10};
    int brr[11];
    for(int i=0;i<11;i++){
        if(brr[arr[i]]!=1){
            brr[arr[i]]=1;
        }
        else{printf("%d is duplicate",arr[i]);
        break;
        }
    }



    return 0;
}