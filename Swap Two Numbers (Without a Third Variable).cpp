#include<stdio.h>
int main(){
int a ,b;
printf("Enter your first no: ");
scanf("%d", &a);
printf("Enter your second no: ");
scanf("%d", &b);
a = a + b;
b = a - b;
a = a - b;
printf("After swapping, first no is %d and second no is %d", a,b);
return 0;
}