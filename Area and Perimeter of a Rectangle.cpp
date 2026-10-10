#include<stdio.h>

int main(){
    int length, width, area, perimeter;
    printf("Enter your desired lenght: ");
    scanf("%d", &length);
    printf("Enter your desired width:");
    scanf("%d", &width);
    area = length*width;
    perimeter= 2*(length+width);
    printf("Area of rectangle is %d and perimeter of rectangle is %d", area, perimeter);
return 0;
 }