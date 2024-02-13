#include <stdio.h>

int main()
{
    struct Pokemon
    {
        int hp;
        int speed;
        int attack;
        char tier;
    };

    struct Pokemon pikachu;
    pikachu.hp = 60;
    pikachu.speed = 50;
    pikachu.attack = 100;
    pikachu.tier = 'S';

    // another pokemon
    struct Pokemon charizard;
    charizard.hp = 130;
    charizard.attack = 80;
    charizard.speed = 80;
    charizard.tier = 'A';

    printf("%d", pikachu.speed);

    return 0;
}