#include <stdio.h>

int maze(int er,int ec){
    int lways=0;
    int uways=0;
    if(er==1 && ec==1){return 1;}
    if(er==1){lways+=maze(er,ec-1);}
    if(ec==1){uways+=maze(er-1,ec);}
    if(er>1 && ec >1){lways+=maze(er,ec-1);
                      uways+=maze(er-1,ec);}
    return uways+lways;
}

int main(){
    int m,n;
    printf("Enter rows and columns:");
    scanf("%d%d",&m,&n);
    printf("No. of ways is %d",maze(m,n));
    return 0;
}