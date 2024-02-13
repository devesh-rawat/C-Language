#include <stdio.h>

void swap(int *a,int *b){
    *a=*a+*b;
    *b=*a-*b;
    *a=*a-*b;
    return ;
}

int main(){
    int arr[]={2,1,3,5,4,6,9,0,8,7};
    int n=10;
    for(int i=1;i<n;i++){
        for(int j=0;j<n-i;j++){
            if(arr[j]>arr[j+1]){
                swap(&arr[j],&arr[j+1]);
            }
        }
    }
    //make one number::::::::
    int a=0;
    for(int i=0;i<n;i++){
        a=a*10+arr[i];
    }
 int j=n-1; 
 do
 {swap(&arr[j],&arr[j-1]);
 j--;
    
 } while (arr[j]==arr[j+1]);
 
    
    int b=0;
    for(int i=0;i<n;i++){
        b=b*10+arr[i];
    }
    printf("%d  is minimum sum.",a+b);

}