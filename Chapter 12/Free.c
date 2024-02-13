#include <stdio.h>
#include <stdlib.h>

int main(){
    int * ptr=(int *) calloc(4,4);
    realloc(ptr,30);
    free(ptr);
}