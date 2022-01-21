#include<stdio.h>
int main(){
    float sum = 0;
    float angle = 0;
    for(int i = 1; i<=3; i++){
        printf("Enter the angle of the triangle : ");
        scanf("%f",&angle);
        sum = sum + angle;
    }
    if(sum>=0){
        if(sum==180){
            printf("Valid triangle");
        }
        else{
        printf("Not a valid triangle ");
        }
    }
    else{
        printf("Error : Enter correct angle");
    }
        
    return 0;
}