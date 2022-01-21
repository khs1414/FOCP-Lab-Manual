#include<stdio.h>
int main(){
    float age;
    printf("Enter your age : ");
    scanf("%f",&age);
    if( age != (int)age || age<0){
        printf("Enter correct age");
    }
    else if(age == (int)age){
        if(age>=18){
            printf("You can vote");
        }
        else{
            printf("You cannot vote");
        }
    }
    return 0;
}