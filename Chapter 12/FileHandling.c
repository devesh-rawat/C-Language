#include <stdio.h>

int main(){
    FILE *ptr=fopen("Devesh.txt","w");
    char arr[]="Hello how are you";
    fputs(arr,ptr);
    char str[100];
    fclose(ptr);
    FILE *fptr=fopen("Devesh.txt","r");

    if(fgets(str,100,fptr)!=NULL)
    printf("%s",str);
    
    
    fclose(fptr);
}