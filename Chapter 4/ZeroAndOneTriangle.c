#include <stdio.h>

int main(){
    int n;
    printf("Enter a Number:");
    scanf("%d",&n);
    int a;
    for (int i=1;i<=n;i++){
        for (int j=1;j<=i;j++){
            if (i%2!=0){
                if(j%2!=0){
                    a=1;
                    printf("%d",a);
                }
                else{
                    a=0;
                    printf("%d",a);
                    
                }
            }
            else{
                 if(j%2!=0){
                    a=0;
                    printf("%d",a);
                }
                else{
                    a=1;
                    printf("%d",a);
                    
                }

            }
        }
        printf("\n");
    }
}