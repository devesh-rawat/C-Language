#include <stdio.h>

int main(){
    for (int i=1;i<=1000;i++){
        int a=i;
        int sum=0;
        int rem;
        while (a!=0){
            rem=a%10;
            sum=sum+(rem*rem*rem);
            a=a/10;}
        if (i==sum){
            printf("%d is a armstrong Number\n",i);
        }
    }
    return 0;
}