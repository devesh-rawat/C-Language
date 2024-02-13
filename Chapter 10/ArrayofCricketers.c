#include <stdio.h>
#include <string.h>

int main(){
    typedef struct ArrayofCricketers
    {
        char name[20];
        int age;
        int No_of_Test_matches;
        int Avg_score;
    }aoc;
    
    aoc arr[3];
    
    for(int i=0;i<3;i++){
        printf("Enter Name:");
        scanf("%s",arr[i].name);
        printf("Enter age:");
        scanf("%d",&arr[i].age);
        printf("Enter Matches Played");
        scanf("%d",&arr[i].No_of_Test_matches);
        printf("Enter Average score:");
        scanf("%d",&arr[i].Avg_score);
    }

    for(int i=0;i<3;i++){
        printf("Name:%s\n",arr[i].name);
        printf("Age:%d\n",arr[i].age);
        printf("Played matches:%d\n",arr[i].No_of_Test_matches);
        printf("Average Score:%d\n",arr[i].Avg_score);
    }
    return 0;
}