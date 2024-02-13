#include <stdio.h>
#include <limits.h>

int main(){
    int arr[]={5,4,1,2,3};
    int n=5;
    for(int i=0;i<n-1;i++){
        int min=INT_MAX;
        int idx=-1;
        for(int j=i;j<n;j++){
            if(min>arr[j]){
                min=arr[j];
                idx=j;
            }
        }
        int temp=arr[idx];
        arr[idx]=arr[i];
        arr[i]=temp;
    }
    //print
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}