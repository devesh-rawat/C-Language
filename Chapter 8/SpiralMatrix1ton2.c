#include <stdio.h>

int main(){
    int n;
    printf("Enter a Number:");
    scanf("%d",&n);
    int arr[n][n];
    //spiral form matrix making
    int count=0;
    int tne=n*n;
    int maxr=n-1;
    int minr=0;
    int maxc=n-1;
    int minc=0;
    int v=1;
    while(count<tne){
        //left to right 
        
        for(int i=minc;i<=maxc&&count<tne;i++){
            arr[minr][i]=v;
            v++;
            count++;
            
        }
        minr++;
        //top to down
        for(int i=minr;i<=maxr&&count<tne;i++){
            arr[i][maxc]=v;
            v++;
            count++;

        }
        maxc--;
        // right to left
        for(int i=maxc;i>=minc&&count<tne;i--){
            arr[maxr][i]=v;
            v++;
            count++;
        }
        maxr--;
        //down to top
        for(int i=maxr;i>=minr&&count<tne;i--){
            arr[i][minc]=v;
            v++;
            count++;
        }
        minc++;
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }

return 0;}