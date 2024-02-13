#include <stdio.h>

int main(){
    int m,n,p,q;
    printf("Enter m,n");
    scanf("%d%d",&m,&n);
    printf("Enter p,q");
    scanf("%d%d",&p,&q);
    int a[m][n];
    int b[p][q];
    int res[m][q];
    //matrix A
    printf("Enter value for A matrix");
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&a[i][j]);
        }
    }
    //matrix B
    printf("Enter value for B matrix");
    for(int i=0;i<p;i++){
        for(int j=0;j<q;j++){
            scanf("%d",&b[i][j]);
        }
    }
    //multiplication
    if(n==p){
        for(int i=0;i<m;i++){
            for(int j=0;j<q;j++){
                res[i][j]=0;
                for(int k=0;k<n;k++){
                    res[i][j]+=a[i][k]*b[k][j];
                }
            }
        }
    }
    else{printf("Enter valid n and p values");}
    //printing
    for(int i=0;i<m;i++){
        for(int j=0;j<q;j++){
            printf("%d ",res[i][j]);
        }
        printf("\n");
    }






    return 0;
}