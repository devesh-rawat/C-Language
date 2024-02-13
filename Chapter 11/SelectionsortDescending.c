#include <stdio.h>
#include <limits.h>

int main(){
    int arr[]={2,3,1,4,5};
    int n=5;
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    for(int i=0;i<n-1;i++){
        int max=INT_MIN;
        int idx=-1;
        for(int j=i;j<n;j++){
            if(max<arr[j]){
                max=arr[j];
                idx=j;
            }
        }
        int temp=arr[idx];
        arr[idx]=arr[i];
        arr[i]=temp;
    }
    printf("\n");
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}