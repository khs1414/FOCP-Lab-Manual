#include<stdio.h>
int main(){
    char c;
    printf("Enter a character : ");
    scanf("%c",&c);
    switch (c)
    {
    case 65 ... 90:
        printf("Capital letter");
        break;
    case 97 ... 122:
        printf("Lower letter");
        break;
    case 48 ... 57:
        printf("Number");
        break;
    default:
        printf("Special Character");
        break;
    }
    return 0;
}