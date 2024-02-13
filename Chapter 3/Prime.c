#include <stdio.h>


int main(){
    int n,c=0;
    printf("Enter a Number to check");
    scanf("%d",&n);
    int count=0;
    for (int i=2;i<=n-1;i++){
        if (n%i==0){
            c=1;
            //    printf("Our number is composite\n");
            break;
        }
        
        }
        if (c==0){
            printf("The Number is Prime\n");

        }
        else{
            printf("The Number is composite(Not prime)\n");
        }
    return 0;
}