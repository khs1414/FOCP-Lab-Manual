#include<stdio.h>
#include<string.h>
int main(){
    char word[20];
    printf("Enter a string : ");
    gets(word);
    int len = strlen(word);
    int check = 0;
    for(int i=0;i < len ;i++){
        if(word[i] != word[len-i-1]){
            check = 1;
        break;
   }
}
    if (check==0) {
        printf("Word is palindrome");
    }    
    else {
        printf("Word is not a palindrome");
    }
    return 0;
} 