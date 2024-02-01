//Write a C program to perform input/output of all basic data types.
#include<stdio.h>
int main(){
    int new_int_variable;
    float new_float_variable;
    double new_double_variable;
    char new_char_variable;
    printf("\nEnter a character: ");
    scanf("%c",&new_char_variable);
    printf("\nValue in character variable: %c",new_char_variable);
    printf("\nEnter a integer: ");
    scanf("%d",&new_int_variable);
    printf("\nValue in Integer variable: %d",new_int_variable);
    printf("\nEnter a float: ");
    scanf("%f",&new_float_variable);
    printf("\nValue in float variable: %f",new_float_variable);
    printf("\nEnter a double: ");
    scanf("%lf",&new_double_variable);
    printf("\nValue in double variable: %lf",new_double_variable);
    return 0;
}