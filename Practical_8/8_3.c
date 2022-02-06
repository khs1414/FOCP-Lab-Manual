#include <stdio.h>
int main(){
   int x, y;
   int *pt_x, *pt_y;
   int temp;
   printf("Enter a number : ");
   scanf("%d", &x);
   printf("Enter another number : ");
   scanf("%d",&y);
   printf("\n");
   printf("Before swapping :  %d , %d\n", x, y); 
   pt_x = &x;
   pt_y = &y;
   temp = *pt_x;
   *pt_x = *pt_y;
   *pt_y = temp;
   printf("After swapping : %d , %d", x, y);
   return 0;
}