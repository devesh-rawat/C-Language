#include <stdio.h>

int main()
{
    int marks;
    printf("Enter marks of student");
    scanf("%d", &marks);

    if (marks > 80)
    {
        printf("A is the grade");
    }
    else if (marks > 60)
    {
        printf("B is the grade");
    }
    else if (marks > 40)
    {
        printf("C is the grade");
    }
    else if (marks < 40)
    {
        printf("D is the grade");
    }
}