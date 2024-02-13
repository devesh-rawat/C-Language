#include <stdio.h>
#include <string.h>

typedef union pokemon{
        int hp;
        int speed;
        int attack;
        char tier;
        char name[15];
    }pn;

int main(){
    pn pikachu;
    pikachu.hp=60;
    pikachu.attack=70;
    pikachu.speed=100;
    pikachu.tier='A';
    strcpy(pikachu.name,"Pikachu");

    printf("%d\n",pikachu.hp);
    printf("%d\n",pikachu.attack);
    printf("%d\n",pikachu.speed);
    printf("%c\n",pikachu.tier);
    printf("%s\n",pikachu.name);



return 0;
}