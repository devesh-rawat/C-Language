#include <stdio.h>
#include <stdlib.h>


int main(){
    int *ptr=(int *)calloc(10,sizeof(int));
    for(int i=0;i<10;i++){
        printf("%d ",*ptr);
    }
    return 0;
}
