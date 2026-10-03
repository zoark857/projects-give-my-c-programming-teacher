#include<stdio.h>
#include<math.h>

int main(){

    char  C,f,value;
    int Temperature,fahernite, celsius;


    printf("Temperature Converter\n");
    printf("for coverting temperature from Fahernite to celsius Enter C for from celsius to fahernite enter f\n");
    printf("Enter your value: \n");
    scanf("%c", &value);

    if(value == 'C'){
       printf("Enter your temperature to convert from fahernite to celsuis: ");
       scanf("%d", &Temperature);
       celsius = (Temperature - 32)*5/9;
       printf("Temperature in celsius = %d", celsius); 


    }else if(value == 'f'){
        printf("Enter your temperature to convert from celsius  to fahernite: ");
       scanf("%d", &Temperature);
       fahernite = (Temperature * 9/5)+32;
       printf("Temperature in fahernite = %d", fahernite); 
    }
    else{
        printf("invalis input");
    }
    return 0;
}