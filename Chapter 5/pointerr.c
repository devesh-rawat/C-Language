#include <stdio.h>

int main(){
    int a=5;
    int *ptr=&a;
    
    printf("%p\n",ptr);
    printf("%d\n",ptr);
    printf("%u\n",ptr);

    printf("%p\n",&a);
    printf("%d\n",&a);
    printf("%u\n",&a);
    
    printf("%p\n",&ptr);
    printf("%d\n",&ptr);
    printf("%u\n",&ptr);
    return 0;
}