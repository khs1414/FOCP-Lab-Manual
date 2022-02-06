#include<stdio.h> 
int main() {
   char string[50];
   char string_copy[50];
   int i;
   printf("Enter the string : ");
   gets(string);
   i = 0;
   while (string[i] != '\0'){
      string_copy[i] = string[i];
      i++;
   }
   string_copy[i] = '\0';
   printf("New copied string : %s", string_copy);
   return (0);
}