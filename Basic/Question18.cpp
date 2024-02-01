// Write a C program to enter P, T, R and calculate Compound Interest.
#include<stdio.h>
#include<math.h>
int main(){
    int p,r,t;
    float amount,ci;
    printf("Enter principle, rate and time: ");
    scanf("%d%d%d",&p,&r,&t);
    amount = p*(pow(1+(r/100),t));
    ci = amount - p;
    printf("Amount: %.2f",amount);
    printf("\nCompound interest: %.2f",ci);
    return 0;
}