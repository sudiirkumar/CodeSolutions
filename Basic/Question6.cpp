// Write a C program to enter radius of a circle and find its diameter, circumference and area.
#include<stdio.h>
int main(){
    float radius;
    printf("Enter radius of circle: ");
    scanf("%f",&radius);
    float diameter = 2*radius;
    float circumference = 2*3.14*radius;
    float area = 3.14*radius*radius;
    printf("\nDiameter: %f",diameter);
    printf("\nCircumference: %f",circumference);
    printf("\nArea: %f",area);
    return 0;
}