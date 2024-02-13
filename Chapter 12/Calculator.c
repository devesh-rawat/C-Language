#include <stdio.h>

int main(){
    int a,b;
    char op;
    scanf("%d",&a);
    scanf("%c",&op);
    scanf("%d",&b);
    switch (op)
    {
    case '+':
        printf("%d",a+b);
        break;
    
    case '-':
        printf("%d",a-b);
        break;

    case '*':
        printf("%d",a*b);
        break;
    case '/':
        printf("%f",(float)a/b);
        break;
    
    default:
        break;
    }
    return 0;
}