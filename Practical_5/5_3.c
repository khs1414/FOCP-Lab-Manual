#include<stdio.h>
int main(){
    int sum = 0; 
    int i = 10;
    while(i!=0){
        sum = sum + i;
        i--;
    }
    printf("The sum of first 10 natural numbers is : %d",sum);
    return 0;
}