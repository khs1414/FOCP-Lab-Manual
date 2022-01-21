#include<stdio.h>
int series(int);
int main(){
    int n;
    printf("Enter the number of natural numbers for sum : ");
    scanf("%d",&n);
    printf("The total sum is : %d",series(n));
    return 0;
}
int series(int x){
    if(x!=0){
        return(x + series(x-1));
    }
    else{
        return x;
    }
}