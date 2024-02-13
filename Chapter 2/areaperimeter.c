#include <stdio.h>

int main(){
    int l,b;
    printf("Enter Length of rectangle ");
    scanf("%d",&l);
    printf("Enter breadth of rectangle");
    scanf("%d",&b);
    int a=l*b;
    int p=2*(l+b);
    if (a>p){
        printf("%d is greater than %d",a,p);
    }
    else{
     printf("Converse is True ");
    }

    return 0;
}