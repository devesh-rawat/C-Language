#include <stdio.h>
#include <string.h>

int main(){
    typedef struct pokemon{
        int hp;
        int attack;
    }poke;

    typedef struct legendarypokemon
    {
        poke normal;
        int destroy;
    }legen;

    typedef struct godpokemon{
        legen legendary;
        int grow;
    }god;

    god pikachu;
    //assigning values to nested attributes within nested structures.
    pikachu.grow=1000;
    pikachu.legendary.destroy=400;
    pikachu.legendary.normal.attack=30;


    
}