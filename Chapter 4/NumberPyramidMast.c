#include <stdio.h>

int main(){
    int n;
    printf("Enter a Number:");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i;j++){//Loop for spaces
            printf("  ");
        }

        for(int k=1;k<=i;k++){//loop for Number orderly
            printf("%d ",k);
        }
        int a=i-1;
        for(int l=1;l<=i-1;l++){//loop for reverse Numbers
            printf("%d ",a);
            a--;
        }
        printf("\n");
    }
    return 0;

}