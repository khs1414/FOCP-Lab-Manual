#include<stdio.h>
int main(){
    float price;
    int QTY;
    printf("Enter the price per quatity (INR) : ");
    scanf("%f",&price);
    printf("Enter the purchased quatity : ");
    scanf("%d",&QTY);
    if(QTY<1000 && QTY>0 && price>0){
        float total_amt = QTY*price;
        printf("Your total amount is : %f INR", total_amt);
    }
    else if (QTY>1000 && price>0){
        float total_amt = QTY*price;
        float off = total_amt/10;
        printf("Your total amount is  : %f INR",total_amt - off);
    }
    else{
        printf("Enter correct price and quantity");
    }
    return 0;
}