// Write a C program to enter any number and calculate its square root.
#include<stdio.h>
#include<math.h>
int main(){
    int num;
    printf("Enter a number: ");
    scanf("%d",&num);
    printf("Square root of %d is %f",num,sqrt(num));
    return 0;
}