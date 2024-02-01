// Write a C program to enter two numbers and perform all arithmetic operations.
#include<stdio.h>
int main(){
    int num1, num2;
    printf("Enter 2 numbers: ");
    scanf("%d%d",&num1,&num2);
    int sum = num1 + num2;
    int difference = num1 - num2;
    int product = num1 * num2;
    int integer_quotient = num1/num2;
    float real_quotient = num1*1.0/num2;
    int remainder = num1%num2;
    printf("\nSum of %d and %d is %d.",num1,num2,sum);
    printf("\nDifference of %d and %d is %d.",num1,num2,difference);
    printf("\nProduct of %d and %d is %d.",num1,num2,product);
    printf("\nIntegral quotient of %d and %d is %d.",num1,num2,integer_quotient);
    printf("\nReal quotient of %d and %d is %f.",num1,num2,real_quotient);
    printf("\nRemainder of %d and %d is %d.",num1,num2,remainder);
    return 0;
}