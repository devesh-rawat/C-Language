#include <stdio.h>
#include <stdbool.h>

void swap(int *a,int *b){
    *a=*a+*b;
    *b=*a-*b;
    *a=*a-*b;
    return;

}

int main(){
    int arr[]={1,2,3,4,5,6};
    int n=6;
    // swap(&arr[0],&arr[6]);
    int swapm=0;
    for(int i=1;i<n;i++){
        printf("pass-%d\n",i);
        bool flag=true;
        for(int j=0;j<n-i;j++){

            if(arr[j]>arr[j+1]){
                swapm++;
                swap(&arr[j],&arr[j+1]);
                flag=false;
            }
        }
        if(flag==true)break;
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