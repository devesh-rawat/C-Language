#include <stdio.h>
#include <limits.h>

int main(){
    int r,c;
    printf("Enter No. of rows and columns:");
    scanf("%d%d",&r,&c);
    int arr[r][c];
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            printf("Enter a Element");
            scanf("%d",&arr[i][j]);
        }
    }
    int x,y;
    int max=INT_MIN;
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            if(max<arr[i][j]){
                max=arr[i][j];
                x=i;
                y=j;
            }
        }
    }
    printf("max is %d with x-index %d and y-index %d",max,x,y);
}