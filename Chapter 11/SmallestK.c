#include <stdio.h>
#include <limits.h>

int main(){
    int arr[]={2,3,1,5,4};
    int n=5;
    int k=3;
    for(int i=0;i<k-1;i++){
        int min=INT_MAX;
        int idx=-1;
        for(int j=i;j<k;j++){
            if (min>arr[j]){
                min=arr[j];
                idx=j;
            }
        }
        int temp=arr[idx];
        arr[idx]=arr[i];
        arr[i]=temp;

    }
    
    printf("%d ",arr[k-1]);
}