// Write a C program to enter length and breadth of a rectangle and find its perimeter.
#include<stdio.h>
int main(){
    int length, breadth;
    int perimeter;
    printf("Enter length and breadth of rectangle: ");
    scanf("%d%d",&length,&breadth);
    perimeter = 2*(length+breadth);
    printf("\nPerimeter of rectangle with length %d and breadth %d is %d",length,breadth,perimeter);
    return 0;
}