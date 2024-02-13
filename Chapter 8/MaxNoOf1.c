#include <stdio.h>
#include <limits.h>

int main(){
    int r,c;
    printf("Enter rows,columns:");
    scanf("%d%d",&r,&c);

    //start
    int arr[r][c];
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            printf("Enter a Element:");
            scanf("%d",&arr[i][j]);
        }
    }
    //End
    int max=INT_MIN,x;
    for(int i=0;i<r;i++){
        int sum=0;
        for(int j=0;j<c;j++){
            sum+=arr[i][j];
        }
        if(sum>max){
            max=sum;
            x=i;
        }
    }
    printf("Row %d has max. No. of Ones",x);
}