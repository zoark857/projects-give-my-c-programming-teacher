#include<stdio.h>
int main(){
    int a,b, c;
    printf("Enter your first no: ");
    scanf("%d", &a);
    printf("Enter your second no: ");
    scanf("%d", &b);
    c = a;
    a = b;
    printf("After swapping, first no is %d and second no is %d", c, b);

return 0;
}