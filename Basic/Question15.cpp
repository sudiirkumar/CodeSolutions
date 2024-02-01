// Write a C program to calculate area of an equilateral triangle.
#include<stdio.h>
int main(){
    int side;
    printf("Enter side of triangle: ");
    scanf("%d",&side);
    float area = 1.73 * side * side / 4;
    printf("Area: %f",area);
    return 0;
}