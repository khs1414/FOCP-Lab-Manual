#include <stdio.h>
int n = 0;
int main(){
    int a;
    printf("Enter a number : ");
    scanf("%d",&a);
    int i = 0;
    int list[100];
    int len = 0;
    int num = a;

    while(a!=0){
        list[i] = a%10;
        a = a/10;
        i++;
        len++;
    }
    for(int k = 1; k<=len; k++){
        for(int o = len-k; o>=0;o--){
            printf("%d",list[o]);
        }
        printf("\n");
    }
    
    return 0;
}