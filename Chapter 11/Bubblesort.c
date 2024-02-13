#include <stdio.h>

void swap(int *a,int *b){
    *a=*a+*b;
    *b=*a-*b;
    *a=*a-*b;
    return;

}

int main(){
    int arr[]={6,5,4,3,2,1};
    int n=6;
    // swap(&arr[0],&arr[6]);
    int swapm=0;
    for(int i=1;i<n;i++){
        printf("pass-%d\n",i);
        for(int j=0;j<n-i;j++){

            if(arr[j]>arr[j+1]){
                swapm++;
                swap(&arr[j],&arr[j+1]);
            }
        }
    }
    printf("%d is max swap\n",swapm);
    //print the array
    printf("[");
    for(int i=0;i<n;i++){
        printf("%d",arr[i]);
        if(i!=n-1)printf(",");
    }
    printf("]");


    return 0;
}