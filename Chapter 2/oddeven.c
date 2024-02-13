#include <stdio.h>

int main(){
    int Var;
    printf("Enter value for N");
    scanf("%d",&Var);
    if (Var%2==0){
        printf("%d is Even Number",Var);
    }

    else{printf("%d is Odd Number",Var);}
    return 0;
}