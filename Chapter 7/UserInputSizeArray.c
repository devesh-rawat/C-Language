#include <stdio.h>

int main(){
    int n;
    printf("Enter a Number:");
    scanf("%d",&n);
    int marks[n];
    for(int i=0;i<n;i++){
        printf("Enter %dth element",i+1);
        scanf("%d",&marks[i]);
    }
    for(int i=0;i<n;i++){
            printf("%dth element of array is %d\n",i+1,marks[i]);
       
    }
    return 0;

    
}