#include <stdio.h>
#include <string.h>
void insert(char str[],int n,char value){
    for(int i=20;i>=2;i--){
        str[i+1]=str[i];

    }
    str[2]=value;
    return;
}

int main(){
    char str[20]="Devesh";
    insert(str,2,'W');
    printf("%s",str);
    return 0;
}