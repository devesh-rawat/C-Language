#include <stdio.h>
#include <limits.h>

int main(){
    int arr[8]={1,2,3,4,10,9,7,8};
    int max=INT_MIN;
    int smax=INT_MIN;
    for(int i=0;i<8;i++){ 
        if(max<arr[i]){
             smax=max;
            max=arr[i]; 
        }

        else if(smax<arr[i]&& arr[i]!=max){
            smax=arr[i];
        }
    }
   
    
    printf("%d",smax);
    
    return 0;
}