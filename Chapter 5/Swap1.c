#include <stdio.h>

int main(){
    int a,b;
    printf("Enter a,b:");
    scanf("%d%d",&a,&b);
    int c=a;
    a=b;
    b=c;
    printf("a=%d and b=%d",a,b);
}