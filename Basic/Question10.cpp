// Write a C program to convert days into years, weeks and days.
#include<stdio.h>
int main(){
    int days;
    printf("Enter number of days: ");
    scanf("%d",&days);
    int years = days/365;
    days = days%365;
    int weeks = days/7;
    days = days%7;
    printf("\n%d Years %d Weeks and %d Days",years,weeks,days);
    return 0;
}