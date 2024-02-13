#include <stdio.h>
//Note:---function declaration should be above the function call for better outcome...----
void india();
void england();
void australia();



int main(){
    india();
    return 0;
}
void india(){
        printf("you are in India\n");
        australia();
        return;
}
void england(){
        printf("you are in England\n");
        return;
}
void australia(){
        printf("you are in Australia\n");
        england();
        return;
}
