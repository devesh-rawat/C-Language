#include <stdio.h>

int main(){
    int n;
    printf("Enter no. of times to print");
    scanf("%d",&n);
    for (int i=1;i<n+1;i++){
        printf("Hello vipin -%d\n",i);
    }
    return 0;
}