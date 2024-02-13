#include <stdio.h>
#include <stdbool.h>

void swap(int *a,int *b){
    *a=*a+*b;
    *b=*a-*b;
    *a=*a-*b;
    return ;
}


int main(){
    int arr[]={1,2,7,4,5};
    int n=5;
    int swapn=0;
    for(int i=1;i<n;i++){
        bool flag=true;
        for(int j=0;j<n-i;j++){
            if(arr[j]<arr[j+1]){
                swap(&arr[j],&arr[j+1]);
                swapn++;
                flag=false;
            }
        }
        if (flag==true) break;
    }
    printf("[");
    for(int i=0;i<n;i++){
        printf("%d",arr[i]);
        if(i!=n-1)printf(",");
    }
    printf("]");



    return 0;
}