#include <stdio.h>

void prime(int n){
    int count;
    for(count=2;n>1;count++){
        while(n%count==0){
            printf("%d X ",count);
            n/=count;
        }
        
    }
    printf("1");
}

int main(){
    int n;
    printf("Enter a number:");
    scanf("%d",&n);
    prime(n);
    return 0;

}