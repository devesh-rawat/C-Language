#include <stdio.h>

int main(){
    int arr[4][2]={{1,89},{2,90},{3,90},{4,99}};
    for(int i=0;i<4;i++){
        for(int j=0;j<2;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
}