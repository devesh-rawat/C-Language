#include <stdio.h>
void swap(int* a,int* b){
    *a=*a+*b;
    *b=*a-*b;
    *a=*a-*b;
    return;

}

int main(){
    int a,b;
    printf("Enter a and b:");
    scanf("%d%d",&a,&b);
    
    int *_a=&a;
    int *_b=&b;
    swap(_a,_b);
   
    printf("a=%d and b=%d",a,b);
}