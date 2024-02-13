#include <stdio.h>
#include <string.h>

int main(){
    typedef struct pokemon{
        int hp;
        int speed;
        int attack;
        char tier;
        char name[15];
    }pn;
    
    pn arr[3];
    arr[0].attack=50;
    arr[0].hp=100;
    arr[0].speed=30;
    arr[0].tier='A';
    strcpy(arr[0].name,"Devesh");
  
    arr[1].attack=80;
    arr[1].hp=160;
    arr[1].speed=50;
    arr[1].tier='B';
    strcpy(arr[1].name,"Anjali");

    arr[2].attack=520;
    arr[2].hp=200;
    arr[2].speed=60;
    arr[2].tier='s';
    strcpy(arr[2].name,"Ritesh");


    for(int i=0;i<3;i++){
        printf("Name:%s\n",arr[i].name);
        printf("Attack:%d\n",arr[i].attack);
        printf("HP:%d\n",arr[i].hp);
        printf("Speed:%d\n",arr[i].speed);
        printf("Tier:%c\n",arr[i].tier);
        printf("\n");

    }


    return 0;
}