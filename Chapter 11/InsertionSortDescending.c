#include <stdio.h>

int main(){
    int arr[]={1,3,2,5,4};
    int n=5;
    for(int i=1;i<n;i++){
        for(int j=i;j>=1&&arr[j-1]<arr[j];j--){
            arr[j-1]=arr[j-1]+arr[j];
            arr[j]=arr[j-1]-arr[j];
            arr[j-1]=arr[j-1]-arr[j];
         
        }
    }
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
}