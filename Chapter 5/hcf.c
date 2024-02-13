#include <stdio.h>
int min(int x,int y){
    int minimum=x;
    if (y<x)minimum=y;
    return minimum;
}

int hcf(int m,int n){
    int Hcf;
    for(int i=min(m,n);i>=1;i--){
        if(m%i==0 && n%i==0){
            Hcf=i;
            break;
        
        }}
        return Hcf;

}

int main(){
    int a,b;
    printf("Enter a,b:");
    scanf("%d%d",&a,&b);
    int p=hcf(a,b);
    printf("%d",p);
    return 0;


    
    
}