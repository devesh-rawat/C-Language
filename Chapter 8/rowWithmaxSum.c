#include <stdio.h>
#include <limits.h>

int main(){
    int r,c;
    printf("Enter rows,columns:");
    scanf("%d%d",&r,&c);
    int arr[r][c];
    //Element starts
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            printf("Enter a Element:");
            scanf("%d",&arr[i][j]);
        }
    }
    int x;
    //Element Ends
    int summax=INT_MIN;
    for(int i=0;i<r;i++){
        int sum=0;
        for(int j=0;j<c;j++){
                sum+=arr[i][j];
                
            }
        if(summax<=sum){
            summax=sum;
            x=i;
        }

        }
    printf("%d is the rows with max. sum =%d",x,summax);
        
    }
    
