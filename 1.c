#include<stdio.h>
int main(){
    float float_input;
    printf("Enter a floating point number : ");
    scanf("%f",&float_input);
    printf("\n");
    int int_float = (int)float_input;
    int last_digit = int_float%10;
    printf("The last digit of the floating point number is : %d",last_digit);
    return 0 ;
}