#include<stdio.h>
int main(){
    int avg;
    int marks;
    int sum = 0;
    for(int i = 1; i<=5;i++){
        printf("Enter marks : ");
        scanf("%d",&marks);
        sum = sum + marks;
    }
    avg = sum/5;
    switch (avg)
    {
    case 90 ... 100:
        printf("Grade : A");
        break;
    case 70 ... 89:
        printf("Grade : B");
        break;
    case 50 ... 69:
        printf("Grade: C");
        break;
    case 0 ... 49:
        printf("Fail");
        break;
    default:
        printf("Enter correct marks");
        break;
    }
    return 0;
}