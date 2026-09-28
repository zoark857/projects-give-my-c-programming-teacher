#include<stdio.h>

int main(){

    double kilometer,Miles;
    printf("Enter value of kilometer: ");
    scanf("%lf", &kilometer);
    Miles = 0.621*kilometer;
    printf("the value in miles will be %lf", Miles);

    return 0;
}