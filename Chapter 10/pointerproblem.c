#include <stdio.h>

int main(){
    int x,y;
    x=5;
    y=7;
    int* a=&x,*b=&y;
    
    printf("%p\n",a);
    printf("%p\n",b);

    return 0;
}