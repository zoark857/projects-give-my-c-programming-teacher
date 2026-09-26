#include<stdio.h>

int main(){
    int a,b,c,d;
    printf("Enter your first no: ");
    scanf("%d", &a);
    printf("Enter your second no: ");
    scanf("%d", &b);
    c = a/b;
    d = a%b;
    printf("quotient is:%d\n", c);
    printf("reminder is:%d\n", d);
    return 0;
    
}