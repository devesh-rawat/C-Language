#include <stdio.h>

void swap(int arr[]){
    int temp=arr[0];
    arr[0]=arr[1];
    arr[1]=temp;
    return;
}

int main(){
    int a,b;
    printf("Enter a,b");
    scanf("%d%d",&a,&b);
    int arr[2]={a,b};
    swap(arr);
    a=arr[0];
    b=arr[1];
    printf("a=%d and b=%d",a,b);
    return 0;
}