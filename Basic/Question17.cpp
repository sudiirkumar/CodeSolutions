// Write a C program to enter P, T, R and calculate Simple Interest.
#include<stdio.h>
int main(){
    int p,r,t;
    float si;
    printf("Enter principle, rate and time: ");
    scanf("%d%d%d",&p,&r,&t);
    si = p*r*t/100.0;
    printf("Simple interest: %.2f",si);
    return 0;
}