#include <stdio.h>

int main(){
    int sp,cp;
    printf("Enter cost price");
    scanf("%d",&cp);
    printf("Enter selling price");
    scanf("%d",&sp);

    if (cp>= sp){
        printf("Loss with %d",cp-sp);
    }

    else{
        printf("Profit with %d",sp-cp);
    }

    return 0;
}