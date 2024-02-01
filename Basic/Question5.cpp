// Write a C program to enter length and breadth of a rectangle and find its area.
#include<stdio.h>
int main(){
    int length, breadth;
    int area;
    printf("Enter length and breadth of rectangle: ");
    scanf("%d%d",&length,&breadth);
    area = length*breadth;
    printf("\nArea of rectangle with length %d and breadth %d is %d",length,breadth,area);
    return 0;
}