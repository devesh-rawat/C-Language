#include <stdio.h>

int main(){
    int r,c;
    printf("Enter rows,coloumns:");
    scanf("%d%d",&r,&c);
    int arr[r][c];
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            printf("Enter rows-%d and coloumn-%d element",i,j);
            scanf("%d",&arr[i][j]);
        }
    }
    int sum=0;
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            sum+=arr[i][j];
        }
    }

    printf("%d is sum",sum);

    return 0;
}