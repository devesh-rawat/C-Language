#include <stdio.h>

int main(){
    int Tways=0;
    int arr[5]={1,2,3,4,5};
    int x=7;
    for(int i=0;i<5;i++){
        for(int j=i+1;j<5;j++){
            if(arr[i]+arr[j]==x){
                Tways++;
                printf("(%d,%d)\n",arr[i],arr[j]);
            }
            
        }
    } 
    printf("Total No. of ways is %d",Tways);
    return 0;
}