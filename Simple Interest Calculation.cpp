#include<stdio.h>

int main(){
    int principal,rate,time,interest;
    printf("Enter principal: ");
    scanf("%d", &principal);
    printf("Enter rate: ");
    scanf("%d", &rate);
    printf("Enter time: ");
    scanf("%d", &time);
    interest = (principal*rate*time)/100;
    printf("%d", interest);
    return 0;
    

}