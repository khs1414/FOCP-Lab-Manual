#include<stdio.h>
int main(){
    int a = 10;
    int *pt = &a;
    printf("The value of a : %d\n",a);
    printf("The value of a by pointer : %d\n",*pt);
    printf("The address of a in unsigned integer form : %u\n",pt);
    printf("The address of a in hexadecimal form : %p\n",pt);
    return 0;
}