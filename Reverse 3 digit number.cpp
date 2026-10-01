#include<stdio.h>
#include<math.h>

int main(){

    int num, hundreds, tens, units, reverse;
    printf("Enter a 3 digit number: ");
    scanf("%d", &num);
    hundreds = num / 100;
    tens = (num /10)% 10;
    units = num % 10;
    reverse = (units * 100) + (tens * 10) + hundreds;
    printf("Reverse is %d", reverse);
    return 0;
    



}