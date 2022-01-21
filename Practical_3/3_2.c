#include<stdio.h>
int main(){
    float sum = 0;
    float marks;
    for(int i = 1; i<=5;i++){
        printf("Enter Marks : ");
        scanf("%f",&marks);
        sum = sum + marks;
    }
    float avg = sum/5;
    if(avg>=0 && avg<=100){
        if(avg>=60){
            printf("Result : First division ");
        }
        else if(avg>=50 && avg<=59){
        printf("Result : Second division ");
        }
        else if(avg>=40 && avg<=49){
        printf("Result First division ");
        }
        else if(avg<40){
        printf("Result : Fail ");
        }
    }
    else{
        printf("Error : enter correct marks");
    }
    return 0;
}