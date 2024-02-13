#include <stdio.h>
#include <string.h>

typedef struct pokemon{
    int hp;
    int attack;
    int speed;
}poke;

void fun(poke* p){
    p->hp=100;
}

int main(){
    poke pikachu;
    poke *p=&pikachu;
    fun(p);
    printf("%d",pikachu.hp);





    return 0;
}