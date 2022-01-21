#include<stdio.h>
int main(){
    int sum = 0;
    int num;
    while (1)
    {
        printf("Enter a number : ");
        scanf("%d",&num);
        if(num == 0){
            break;
        }
        else{
            sum = sum + num;
        }
    }
    printf("Final sum of numbers until 0 was entered is : %d",sum);  
    return 0 ;
}