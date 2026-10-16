#include<stdio.h>

int main(){
    float hours, Seconds, minutes, total_Seconds;
    printf("Enter time in seconds: \n");
    scanf("%f", &total_Seconds);
    Seconds =  total_Seconds;
    printf("In second: %f\n", Seconds);
    minutes = Seconds/60;
    printf("In minutes: %f\n", minutes);
    hours = minutes/60;
    printf("In hours: %f\n", hours);
    return 0;
}