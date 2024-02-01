// Write a C program to enter length in centimeter and convert it into meter and kilometer.
#include<stdio.h>
int main(){
    int centimeter;
    printf("Enter value in centimeter: ");
    scanf("%d",&centimeter);
    int meter = centimeter/100;
    int kilometer = meter/1000;
    printf("\nValue in meters: %d",meter);
    printf("\nValue in Kilometer: %d",kilometer);
    return 0;
}