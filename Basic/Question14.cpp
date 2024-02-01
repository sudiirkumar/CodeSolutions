// Write a C program to enter base and height of a triangle and find its area.
#include<stdio.h>
int main(){
    int height, base;
    printf("Enter height and base: ");
    scanf("%d%d",&height,&base);
    float area = base*height/2.0;
    printf("Area = %f",area);
    return 0;
}