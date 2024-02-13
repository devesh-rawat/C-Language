#include <stdio.h>

void TOH(int n,char s,char h,char d){
    if(n==0)return;
    TOH(n-1,s,d,h);
    printf("%c-->%c\n",s,d);
    TOH(n-1,h,s,d);
    return ;

    
}

int main(){
    int n;
    printf("Enter No. of disks:");
    scanf("%d",&n);
    TOH(n,'A','B','C');
    return 0;

}