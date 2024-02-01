// Write a C program to enter two angles of a triangle and find the third angle.
#include<stdio.h>
int main(){
    int A,B,C;
    printf("Enter 2 angles of triangle: ");
    scanf("%d%d",&A,&B);
    C = 180 - (A+B);
    printf("Third angle: %d",C);
    return 0;
}