//  Write a C program to check Least Significant Bit (LSB) of a number is set or not
#include<stdio.h>
int main(){
    int num;
    printf("Enter a number: ");
    scanf("%d",&num);
    if((num&1)==1){
        printf("LSB is set");
    }
    else{
        printf("LSB is not set");
    }
    return 0;
}