#include<stdio.h>
int main(){
    for(int i = 5; i>=1;i--){
        for(int j = 5; j>(5-i) ; j--){
            printf("%d",i);
        }
        printf("\n");
    }
    return 0;
}