#include <stdio.h>
#include <string.h>

int main(){
    struct Book
    {
        char name[30];
        float price;
        int NoP;
    }a,b,c;

    a.NoP=100;
    a.price=200;

    strcpy(a.name,"Secret seven");
    

    printf("%d\n",a.NoP);
    printf("%f\n",a.price);
    printf("%s",a.name);
    return 0;
}