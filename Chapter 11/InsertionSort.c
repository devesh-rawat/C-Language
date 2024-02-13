#include <stdio.h>
#include <limits.h>

int main(){
    int arr[]={4,5,1,2,3};
    int n=5;
    for(int i=1;i<n;i++){
        int j=i;
        while(j>=1 && arr[j-1]>arr[j]){
            int temp=arr[j];
            arr[j]=arr[j-1];
            arr[j-1]=temp;
            j--;
        }
    }
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}