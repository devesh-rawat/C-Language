#include <stdio.h>

// int main(){
//     int n;
//     printf("Enter a Number:");
//     scanf("%d",&n);
//     for (int i=1;i<=n;i++){
//         for (int j=1;j<=n+1-i;j++){
//             printf("%d",j);
//         }
//         printf("\n");
//     }
// }

int main(){
    int n;
    printf("Enter a Number:");
    scanf("%d",&n);
    for (int i=n;i>=1;i--){
        for (int j=1;j<=i;j++){
            printf("%d",j);
        }
        printf("\n");
    }
    return 0;
}