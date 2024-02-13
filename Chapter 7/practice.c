#include <stdio.h>

int main(){
    int arr[5]={1,2,3,4,5};
    int i=0,j=4;
    while(i!=j){
        int temp=arr[j];
        arr[j]=arr[i];
        arr[i]=temp;
        // arr[j]==arr[i];
        i++;
        j--;
    }
    for(int i=0;i<5;i++){
        printf("%d",arr[i]);
    }
   
}