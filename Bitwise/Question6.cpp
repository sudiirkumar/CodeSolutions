// Write a C program to toggle nth bit of a number. 
#include<stdio.h>
int main(){
    int num;
    printf("Enter a number: ");
    scanf("%d",&num);
    int bit_pos;
    printf("Enter bit position: ");
    scanf("%d",&bit_pos);
    if(bit_pos<0 || bit_pos> sizeof(int)*8){
        printf("Invalid input");
        return 0;
    }
    int n = 1;
    n = n << bit_pos-1;
    num = (num ^ n);
    printf("Number after toggling bit: %d",num);
    return 0;
}