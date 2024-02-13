#include <stdio.h>

int main(){
    float x1,x2,x3;
    float y1,y2,y3;
    printf("enter value for x1:");
    scanf("%d",&x1);
    printf("enter value for y1:");
    scanf("%d",&y1);
    printf("enter value for x2:");
    scanf("%d",&x2);
    printf("enter value for y2:");
    scanf("%d",&y2);
    printf("enter value for x3:");
    scanf("%d",&x3);
    printf("enter value for y3:");
    scanf("%d",&y3);
    float ab,bc;
    ab=(y2-y1)/(x2-x1);
    bc=(y3-y2)/(x3-x2);
    if (ab==bc){
        printf("It is a straight line");

    }
    else{
        printf("Points doesn't lies in straight line");
    }
    return 0;
}