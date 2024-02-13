#include <stdio.h>

int main(){
    int m,n;
    printf("Enter rows,coloumns:");
    scanf("%d%d",&m,&n);
    int arr[m][n];
    printf("Enter Elements");
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&arr[i][j]);
        }
    }
//spiral printing::::::::::::
int count=0;
int tne=m*n;
int minr=0;
int maxr=m-1;
int minc=0;
int maxc=n-1;
while(count<tne){
    for(int i=minc;i<=maxc && count<tne;i++){
        printf("%d ",arr[minr][i]);
        count++;
    }
    minr++;
    for(int j=minr;j<=maxr&&count<tne;j++){
        printf("%d ",arr[j][maxc]);
        count++;
    }
    maxc--;
    for(int i=maxc;i>=minc&&count<tne;i--){
        printf("%d ",arr[maxr][i]);
        count++;
    }
    maxr--;
    for(int j=maxr;j>=minr&&count<tne;j--){
        printf("%d ",arr[j][minc]);
        count++;

    }
    minc++;
}











    return 0;
}