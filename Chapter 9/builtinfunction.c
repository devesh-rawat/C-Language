#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main(){
    char str[]="Devesh";
    char *str2="Devesh";
    bool s =strcmp(str,str2);
    printf("%d",s);
    

    return 0;
}
