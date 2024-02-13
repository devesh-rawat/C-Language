#include <stdio.h>

int main(){

    int prod=1;
    int marks[5]={1,2,3,4,5};
    for(int i=0;i<5;i++){
        prod*=marks[i];
    }
    printf("%d",prod);
    return 0;

    
}
