#include<stdio.h>
int main(){
    int fact = 1;
    int num;
    printf("Enter a number : ");
    scanf("%d",&num);
    int i = num;
    if(num<0){
        printf("Enter a positive number");
    } 
    else if(num == 0 ){
        printf("Factorial : %d",1);
        }
    else{
        while(1){
            if(i==1){
                break;
            }
            fact = fact * i;
            i = i-1;
        }
        printf("Factorial : %d",fact);
    }
    return 0; 
}