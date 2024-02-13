#include <stdio.h>

int main(){
    int arr[3][3]={{1,2,3},{2,4,6},{3,6,9}};
    for(int i=0;i<=2;i++){
        for(int j=0;j<=2;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
}