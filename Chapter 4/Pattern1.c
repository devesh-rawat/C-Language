#include <stdio.h>

int main(){
    int m,n;
    printf("Enter NO.of rows and No. of columns:");
    scanf("%d %d",&m,&n);

    for (int i=1;i<=m;i++){
        for (int i=1;i<=n;i++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}