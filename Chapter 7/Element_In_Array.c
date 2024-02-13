#include <stdio.h>

int main(){
    int arr[7]={1,2,3,4,5,6,7};
    int x=4;
    for(int i=0;i<7;i++){
        if(arr[i]==x){
            printf("%d is the index",i);
            break;
        }
    }



    return 0;
}