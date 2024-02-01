// Write a C program to find power of any number x ^ y.
#include<stdio.h>
#include<math.h>
int main(){
    int x,y;
    printf("Enter base and exponent: ");
    scanf("%d%d",&x,&y);
    printf("\nAnswer: %.0f",pow(x,y));
    return 0;
}