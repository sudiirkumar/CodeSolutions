// Write a C program to enter two numbers and find their sum.
#include<stdio.h>
int main(){
    int num1, num2;
    printf("Enter 2 numbers: ");
    scanf("%d%d",&num1,&num2);
    int sum = num1 + num2;
    printf("\nSum of %d and %d is %d.",num1,num2,sum);
    return 0;
}