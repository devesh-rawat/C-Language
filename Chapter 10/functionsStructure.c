#include <stdio.h>
#include <string.h>
typedef struct pokemon{
        int hp;
        int speed;
        int attack;
        char tier;
        char name[15];
    }pokemon;

void fun(pokemon p){
    printf("%d\n",p.hp);
    p.attack=100;
    return;
}



int main(){
    

    pokemon p;
    p.hp=60;
    printf("%d\n",p.attack);
    fun(p);
    printf("%d\n",p.attack);





    return 0;
}