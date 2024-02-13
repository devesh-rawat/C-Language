#include <stdio.h>

int main(){
    int arr[]={1,2,3,4,5,8,9,10};
    int targer=8;
    int i=0;
    int j=7;
    while(i<j){
        if(arr[i]+arr[j]==targer){
            printf("%d+%d=8",arr[i],arr[j]);
            break;
        }
        else if (arr[i]+arr[j]>targer){
            j--;
        }
        else if(arr[i]+arr[j]<targer){
            i++;
        }
    }
    return 0;
}