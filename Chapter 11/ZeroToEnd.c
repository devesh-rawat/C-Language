#include <stdio.h>

int main(){
    int arr[]={5,0,2,0,0,4,1,3,0};
    int ans[9];
    int n=9;
    int idx=0;
    for(int i=0;i<9;i++){
        if(arr[i]!=0){
            ans[idx]=arr[i];
            idx++;
        }
    }
    for(int i=idx;i<n;i++){
        ans[i]=0;
    }
    //print the output
    for(int i=0;i<n;i++){
        printf("%d ",ans[i]);
    }

    return 0;
}