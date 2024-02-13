#include <stdio.h>
#include <string.h>

typedef struct person{
    int age;
    int weight;
}per;

void fun(per * p){
    (*p).age=25;
    (*p).weight=76;

}


int main(){
    per person;
    person.age=22;
    person.weight=65;
    printf("age->%d\n",person.age);
    printf("weight->%d\n",person.weight);
    fun(&person);
    per *x=&person;
    (*x).age=12;
    printf("age->%d\n",x->age);
    printf("weight->%d\n",person.weight);
    return 0;
}
