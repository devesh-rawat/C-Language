#include <stdio.h>
#include <string.h>
  typedef struct student{
        int rno;
        char name[20];
        char dept[20];
        char course[30];
        int yoj;
    }stu;

void cmp(stu s1,stu s2){
    if(strcmp(s1.dept,s2.dept)==0){
        printf("same");
    }
}


int main(){
  
    stu stu1,stu2;
    //input stu1
    scanf("%d",&stu1.rno);
    scanf("%s",stu1.name);
    scanf("%s",stu1.dept);
    scanf("%s",stu1.course);
    scanf("%d",&stu1.yoj);
    //input stu2
    scanf("%d",&stu2.rno);
    scanf("%s",stu2.name);
    scanf("%s",stu2.dept);
    scanf("%s",stu2.course);
    scanf("%d",&stu2.yoj);
    // output stu1
    printf("%d\n",stu1.rno);
    printf("%s\n",stu1.name);
    printf("%s\n",stu1.dept);
    printf("%s\n",stu1.course);
    printf("%d\n",stu1.yoj);
    // output stu2
    printf("%d\n",stu2.rno);
    printf("%s\n",stu2.name);
    printf("%s\n",stu2.dept);
    printf("%s\n",stu2.course);
    printf("%d\n",stu2.yoj);
    cmp(stu1,stu2);


    return 0;
}