//Write a C program to check Most Significant Bit (MSB) of a number is set or not. 
#include<stdio.h>
int main(){
    int num;
    printf("Enter a number: ");
    scanf("%d",&num);
    int n = 1;
    n = n << (sizeof(int)*8)-1;
    if((num&n)==0){
        printf("MSB is not set");
    }
    else{
        printf("MSB is set");
    }
    return 0;
}