#include<stdio.h>

int main(){
    float radius, area, circumference;
    printf("Enter the radius of circle: ");
    scanf("%f", &radius);
area = radius * radius *3.14;
circumference = 2* 3.14 * radius;
printf("area= %f\n", area);
printf("circumference of circle is %f",circumference);
return 0;
}