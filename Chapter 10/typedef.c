#include <stdio.h>
// making int alias as i
typedef int i;
int main(){
    typedef struct Person
    {
        i roll_no;
        i salary;
        i age;
    }per;//making struct person alias as per

    per person1;
    person1.age=22;
    person1.roll_no=2022;
    person1.salary=29,000;
    
}