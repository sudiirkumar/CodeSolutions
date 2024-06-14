// Write a C program to enter temperature in Celsius and convert it into Fahrenheit
#include<stdio.h>
int main(){
    float C;
    printf("Enter value in degree Celsius: ");
    scanf("%f",&C);
    float F;
    F = (1.8*C) + 32;
    printf("Result: %.2f degree F",F);
    return 0;
}