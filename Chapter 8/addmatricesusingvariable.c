#include <stdio.h>

int main(){
    int arr[2][2]={{1,2},{3,4}};
    int brr[2][2]={{3,3},{1,2}};
    // int crr[2][2];
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            arr[i][j]=arr[i][j]+brr[i][j];
        }
    }
    // printing the matrices
    for(int i=0;i<2;i++){
        for (int j=0;j<2;j++){
            printf("%d ",arr[i][j]);

        }
        printf("\n");
    }
}