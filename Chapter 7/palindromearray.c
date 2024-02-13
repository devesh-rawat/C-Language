#include <stdio.h>

void palindrome(int arr[]){
    int check=0;
    for(int i=0;i<2;i++){
        if(arr[i]!=arr[4-i]){
            check=1;
        }
    }
    if(check==1){
        printf("It is not a Palindrome");

    }
    else{printf("It is a Palindrome .");}
}

int main(){
    int arr[5]={1,2,3,2,1};
    palindrome(arr);
    return 0;

}