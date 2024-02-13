#include <stdio.h>

int main(){
    int age;
    printf("Enter your Age:");
    scanf("%d",&age);
    // Ternary operator use
    age>18?printf("Adult"):printf("Not Adult");
    return 0;

}