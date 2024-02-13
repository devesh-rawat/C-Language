#include <stdio.h>

void reverse(int arr[],int si,int ei){
    for(int i=si,j=ei;i<=j;i++,j--){
        int temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
    }
    return;
}

int main(){
    int k;
    printf("Enter value for k");
    scanf("%d",&k);
    int arr[7]={1,2,3,4,5,6,7};
    k=k%7;
    reverse(arr,0,6);
    reverse(arr,0,k-1);
    reverse(arr,k,6);

    for(int i=0;i<=6;i++){
        printf("%d",arr[i]);
    }
}