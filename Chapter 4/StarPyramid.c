#include <stdio.h>

// int main(){
//     int n;
//     printf("Enter a Number:");
//     scanf("%d",&n);
//     for (int i=1;i<=n;i++){
//        for(int j=1;j<=n-i;j++){
//         printf("  ");}

//        for(int k=1;k<=2*i-1;k++){
//         printf("* ");
//        }
//        printf("\n");
//     }
//     return 0;

// }

int main(){
    int n;
    printf("Enter a Number:");
    scanf("%d",&n);
    int nst=1;
    int nsp=n-1;
    for (int i=1;i<=n;i++){
        for (int j=1;j<=nsp;j++){
            printf("  ");}
        nsp--; 
        for(int k=1;k<=nst;k++){
            printf("* ");
        }
        nst+=2;
        printf("\n");}


}