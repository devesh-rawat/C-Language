#include <stdio.h>

int maze(int cr,int cc,int er,int ec){
        int rightways=0;
        int downways=0;
        if(cr==er && cc==ec){return 1;}
        if(cc==ec){ downways+=maze(cr+1,cc,er,ec);}
        if(cr==er){rightways+=maze(cr,cc+1,er,ec);}
        if(cr<er && cc<ec){
            downways+=maze(cr+1,cc,er,ec);
            rightways+=maze(cr,cc+1,er,ec);}
       
        
        int totalways=rightways+downways;
        return totalways;
}

int main(){
    int m,n;
    printf("Enter Number of Rows,Columns: ");
    scanf("%d%d",&n,&m);
    int NoOfWays=maze(1,1,n,m);
    printf("The No. of ways are: %d",NoOfWays);
    return 0;

}