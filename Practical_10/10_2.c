#include<stdio.h>
int main(){
    char string[50];  
    int i;
    printf("Enter a string : ");
    gets(string);
    printf("Orignal string : %s\n",string);     
    for(i=0;string[i];i++)  
    {
        if(string[i]>=97 && string[i]<=122)
         string[i]= string[i] - 32;
 	}
    printf("String after uppercase = %s \n",string);
    return 0;
}