#include<stdio.h>
int main(){
    int fact = 1;
    int num;
    printf("Enter a number : ");
    scanf("%d",&num);
    if(num<0){
        printf("Enter a positive number");
    }
    else{
        for(int j = 1; j<=num;j++){
            fact = fact * j;
        }
        printf("Factorial : %d",fact);
    }

    return 0; 
}