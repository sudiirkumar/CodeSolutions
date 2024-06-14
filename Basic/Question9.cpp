// Write a C program to enter temperature in Fahrenheit and convert to Celsius
// Write a C program to enter temperature in Celsius and convert it into Fahrenheit
#include<stdio.h>
int main(){
    float F;
    printf("Enter value in degree Fahreinheit: ");
    scanf("%f",&F);
    float C;
    C = (F-32)*5/9;
    printf("Result: %.2f degree C",C);
    return 0;
}