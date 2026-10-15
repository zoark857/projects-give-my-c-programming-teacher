#include<stdio.h>

int main(){
    float marks1, marks2, marks3, total;
    printf("Enter marks of three subjects: ");
    scanf("%f %f %f", &marks1, &marks2, &marks3);
    total = marks1 + marks2 + marks3;
    printf("Percentage of three subjects is: %.2f%%", (total/300)*100);
return 0;
}