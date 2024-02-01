// Write a C program to enter marks of five subjects and calculate total, average and percentage.
#include<stdio.h>
int main(){
    int m1,m2,m3,m4,m5;
    int total,average;
    float percentage;
    printf("Enter marks of 5 subjects: ");
    scanf("%d%d%d%d%d",&m1,&m2,&m3,&m4,&m5);
    total = m1+m2+m3+m4+m5;
    average = total/5;
    percentage = total*100.0/500;
    printf("\nTotal marks: %d",total);
    printf("\nAverage: %d",average);
    printf("\nPercentage: %.2f",percentage);
    return 0;
}