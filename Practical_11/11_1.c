#include<stdio.h>
#include<string.h>
struct office
{
    char name[20];
    float salary;
    int hours;
};

int main(){
    struct office emp[10];
    int i;
    for(i = 0; i<5;i++){
        printf("\n Enter name : ");
        scanf("%s",&emp[i].name);
        printf("\n Enter salary : ");
        scanf("%f",&emp[i].salary);
        printf("\n Enter hours : ");
        scanf("%d",&emp[i].hours);

    }
    for(i = 0 ; i < 10 ;i++){
        if(emp[i].hours>=8 && emp[i].hours<10){
            emp[i].salary = emp[i].salary + 50;
        }
        else if(emp[i].hours>=10 && emp[i].hours<12){
            emp[i].salary = emp[i].salary + 100;
        }
        else if(emp[i].hours>=12){
            emp[i].salary = emp[i].salary + 150;
        }
    }
    for(i=0;i<10;i++){
        printf("%s,%d,%f",emp[i].name,emp[i].hours,emp[i].salary);
    }

}
    