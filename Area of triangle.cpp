#include<stdio.h>

int main(){

    // Area of Triangle //

    int Height,Base,Area;

    printf("Enter Height of Triangle:");
    scanf("%d", &Height);

    printf("Enter Base of Triangle:");
    scanf("%d", &Base);

    Area = 0.5*Height*Base;

    printf("Area of triangle is %d", Area);
    return 0;
}